@class _NCWidgetViewController;

@interface _NCWidgetExtensionContext : NSExtensionContext {
    struct CGSize { double width; double height; } _maxCompactSize;
    struct CGSize { double width; double height; } _maxExpandedSize;
}

@property (weak, nonatomic, getter=_hostViewController, setter=_setHostViewController:) _NCWidgetViewController *hostViewController;
@property (nonatomic, getter=_activeDisplayMode, setter=_setActiveDisplayMode:) long long activeDisplayMode;
@property (nonatomic, getter=_largestAvailableDisplayMode, setter=_setLargestAvailableDisplayMode:) long long largestAvailableDisplayMode;

- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)openURL:(id)a0 completion:(id /* block */)a1;
- (BOOL)widgetIsForeground;
- (void)_setMaximumSize:(struct CGSize { double x0; double x1; })a0 forDisplayMode:(long long)a1;
- (void)setWidgetLargestAvailableDisplayMode:(long long)a0;
- (long long)widgetActiveDisplayMode;
- (long long)widgetLargestAvailableDisplayMode;
- (struct CGSize { double x0; double x1; })widgetMaximumSizeForDisplayMode:(long long)a0;
- (struct CGSize { double x0; double x1; })_maximumSizeForDisplayMode:(long long)a0;

@end
