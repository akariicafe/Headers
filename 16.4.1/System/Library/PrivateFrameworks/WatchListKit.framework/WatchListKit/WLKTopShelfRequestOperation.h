@class NSArray;

@interface WLKTopShelfRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, nonatomic) NSArray *items;

- (id)init;
- (void).cxx_destruct;
- (void)processResponse;
- (id)initWithQueryParameters:(id)a0 options:(long long)a1;

@end
