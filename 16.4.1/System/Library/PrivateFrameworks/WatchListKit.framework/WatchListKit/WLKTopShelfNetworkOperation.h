@class NSDictionary;

@interface WLKTopShelfNetworkOperation : WLKUTSNetworkRequestOperation

@property (readonly, nonatomic) NSDictionary *payload;

- (void).cxx_destruct;
- (void)processResponse;
- (id)initWithEndPoint:(id)a0 queryParameters:(id)a1 options:(long long)a2;

@end
