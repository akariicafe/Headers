@class NSArray;

@interface WLKFavoritesRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, nonatomic) NSArray *favorites;

- (void).cxx_destruct;
- (void)processResponse;
- (void)prepareURLRequest:(id /* block */)a0;
- (id)initWithCaller:(id)a0;

@end
