@class NSString, NSData;

@interface FCCKFeedRequest : NSObject

@property (copy, nonatomic) NSString *feedID;
@property (copy, nonatomic) NSData *startCursor;
@property (nonatomic) unsigned long long startOrder;
@property (nonatomic) unsigned long long orderLimit;
@property (nonatomic) unsigned long long softResultsLimit;
@property (nonatomic) unsigned long long hardResultsLimit;

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
