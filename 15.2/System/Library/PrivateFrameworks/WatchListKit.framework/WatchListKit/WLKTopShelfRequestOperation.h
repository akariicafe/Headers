@class NSArray;

@interface WLKTopShelfRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, nonatomic) NSArray *items;

- (void)processResponse;
- (void).cxx_destruct;
- (id)init;
- (id)initWithQueryParameters:(id)a0 options:(long long)a1;

@end
