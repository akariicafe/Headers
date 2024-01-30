@class NSDate;

@interface PARSessionEngagementsByTrigger : NSManagedObject

@property (nonatomic) short go;
@property (nonatomic) short tap;
@property (nonatomic) short client;
@property (copy, nonatomic) NSDate *timestamp;
@property (nonatomic) BOOL isTopHit;
@property (nonatomic) BOOL isSuggestion;

+ (id)fetchRequest;

@end
