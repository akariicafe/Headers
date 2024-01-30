@class VUIMediaItemEntityTypesFetchResponse, VUIMediaItemEntityTypesFetchResponseChanges;

@interface VUIMediaItemEntityTypesFetchControllerResult : NSObject

@property (nonatomic) long long fetchReason;
@property (retain, nonatomic) VUIMediaItemEntityTypesFetchResponse *fetchResponse;
@property (retain, nonatomic) VUIMediaItemEntityTypesFetchResponseChanges *fetchChanges;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithFetchReason:(long long)a0 fetchResponse:(id)a1;

@end
