@class NSArray;

@interface VUIMediaEntitiesFetchControllerResult : NSObject

@property (nonatomic) long long fetchReason;
@property (copy, nonatomic) NSArray *fetchResponses;
@property (copy, nonatomic) NSArray *fetchResponseChanges;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithFetchReason:(long long)a0 fetchResponses:(id)a1;

@end
