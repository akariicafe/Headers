@class UIView;

@interface _SAUIPortalView : UIView

@property (retain, nonatomic) UIView *sourceView;

+ (Class)layerClass;

- (id)portalLayer;
- (void)didMoveToWindow;
- (void).cxx_destruct;
- (void)_configurePortalViewIfNeeded;

@end
