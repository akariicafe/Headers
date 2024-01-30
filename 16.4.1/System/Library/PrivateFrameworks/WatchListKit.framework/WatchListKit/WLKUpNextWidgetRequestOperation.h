@class WLKUpNextItemCollection;

@interface WLKUpNextWidgetRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, nonatomic) WLKUpNextItemCollection *itemCollection;

- (id)init;
- (void).cxx_destruct;
- (void)processResponse;
- (id)initWithQueryParameters:(id)a0 options:(long long)a1;

@end
