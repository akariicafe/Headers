@class NSArray, FCFeedRange, NSData;

@interface FCFeedDatabaseLookupResult : NSObject

@property (readonly, nonatomic) BOOL hasCKCursor;
@property (copy, nonatomic) NSArray *feedItems;
@property (copy, nonatomic) FCFeedRange *feedRange;
@property (nonatomic) BOOL exhaustedRange;
@property (copy, nonatomic) NSData *ckFromCursor;
@property (nonatomic) unsigned long long ckFromOrder;
@property (nonatomic) unsigned long long ckToOrder;
@property (retain, nonatomic) id insertionToken;

- (void).cxx_destruct;
- (id)description;

@end
