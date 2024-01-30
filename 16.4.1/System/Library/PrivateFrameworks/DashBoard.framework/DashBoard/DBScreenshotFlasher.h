@class UIWindow, UIWindowScene, UIView, NSMutableArray;

@interface DBScreenshotFlasher : NSObject {
    NSMutableArray *_flashCompletionBlocks;
    UIWindow *_flashWindow;
    UIView *_flashView;
    BOOL _windowVisible;
}

@property (readonly, nonatomic) UIWindowScene *windowScene;

- (id)initWithWindowScene:(id)a0;
- (void)_tearDown;
- (void).cxx_destruct;
- (void)_createUIWithColor:(id)a0;
- (void)_orderWindowFrontAndThenOut:(id)a0 withColor:(id)a1;
- (void)_orderWindowOut:(id)a0;
- (void)flashColor:(id)a0 withCompletion:(id /* block */)a1;

@end
