@class FCFeedRange, NSSet, NSData, NSDate, NSNumber;

@interface FCFDBFeedSegment : NSManagedObject

@property (nonatomic) unsigned long long top;
@property (nonatomic) unsigned long long bottom;
@property (retain, nonatomic) NSNumber *feedItemCount;
@property (retain, nonatomic) NSData *ckCursor;
@property (retain, nonatomic) NSDate *lastAccessDate;
@property (retain, nonatomic) NSSet *feedItemIndexes;
@property (readonly, nonatomic) FCFeedRange *feedRange;

- (void)awakeFromFetch;
- (void)willTurnIntoFault;
- (id)description;

@end
