@class NSDictionary, WLKSiriSearchResponse;

@interface WLKSiriSearchRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, copy, nonatomic) NSDictionary *query;
@property (readonly, nonatomic) WLKSiriSearchResponse *response;

- (void)processResponse;
- (void).cxx_destruct;
- (id)initWithQuery:(id)a0 caller:(id)a1;

@end
