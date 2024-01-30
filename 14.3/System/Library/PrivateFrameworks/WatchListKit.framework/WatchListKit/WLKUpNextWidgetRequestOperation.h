@class WLKUpNextItemCollection;

@interface WLKUpNextWidgetRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, nonatomic) WLKUpNextItemCollection *itemCollection;

- (id)init;
- (void).cxx_destruct;
- (id)initWithQueryParameters:(id)a0 options:(long long)a1;
- (void)processResponse;

@end
