@interface SiriUISnippetBridgeViewManager : NSObject

+ (id)sharedInstance;

- (void)insertBridgeViewIfNecessaryForCell:(id)a0 controller:(id)a1 currentSnippet:(id)a2 previousSnippet:(id)a3 bridgeSize:(struct CGSize { double x0; double x1; })a4;
- (void)removeBridgeViewsFromView:(id)a0;

@end
