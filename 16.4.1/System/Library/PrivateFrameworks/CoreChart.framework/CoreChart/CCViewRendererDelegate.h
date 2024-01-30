@class CCVegaRenderer;

@interface CCViewRendererDelegate : NSObject <CCViewRendererDelegateInterface>

@property (weak) CCVegaRenderer *vegaRenderer;

- (void).cxx_destruct;
- (id)initWithVegaRenderer:(id)a0;
- (void)loadURL:(id)a0 options:(id)a1 withCallback:(id)a2;
- (void)updateNativeView;

@end
