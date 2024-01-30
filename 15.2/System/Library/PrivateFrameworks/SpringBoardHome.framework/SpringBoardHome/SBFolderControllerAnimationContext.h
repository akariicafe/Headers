@class UIScreen, UIWindow, UIView;

@interface SBFolderControllerAnimationContext : NSObject

@property (readonly, nonatomic) UIScreen *screen;
@property (readonly, nonatomic) UIWindow *animationWindow;
@property (readonly, nonatomic) UIView *fallbackIconContainer;

+ (id)contextWithScreen:(id)a0 animationWindow:(id)a1 fallbackIconContainer:(id)a2;

- (id)initWithScreen:(id)a0 animationWindow:(id)a1 fallbackIconContainer:(id)a2;
- (void).cxx_destruct;

@end
