@class NSString;

@interface FCCKOrderFeedRequest : NSObject

@property (copy, nonatomic) NSString *feedID;
@property (nonatomic) unsigned long long maxOrder;
@property (nonatomic) unsigned long long minOrder;
@property (nonatomic) unsigned long long resultsLimit;
@property (nonatomic) unsigned long long topK;

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
