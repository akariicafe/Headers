@class UIWindow;

@interface _TVWindowSizeAdaptor : NSObject {
    unsigned long long _allowedInterfaceOrientations;
}

@property (readonly, weak, nonatomic) UIWindow *window;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } adjustedWindowSize;

- (void).cxx_destruct;
- (BOOL)update;
- (id)initWithWindow:(id)a0;
- (unsigned long long)_supportedOrientations;
- (BOOL)_shouldSwapDimensions;

@end
