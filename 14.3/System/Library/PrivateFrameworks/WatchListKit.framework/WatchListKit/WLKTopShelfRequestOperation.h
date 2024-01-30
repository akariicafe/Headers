@class NSArray;

@interface WLKTopShelfRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, nonatomic) NSArray *items;

- (id)init;
- (void).cxx_destruct;
- (id)initWithQueryParameters:(id)a0 options:(long long)a1;
- (void)processResponse;

@end
