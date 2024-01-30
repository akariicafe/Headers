@class WLKUpNextItemCollection;

@interface WLKUpNextWidgetRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, nonatomic) WLKUpNextItemCollection *itemCollection;

- (void)processResponse;
- (void).cxx_destruct;
- (id)init;
- (id)initWithQueryParameters:(id)a0 options:(long long)a1;

@end
