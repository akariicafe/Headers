@class NSString;

@interface HUDefaultStatusBarVisiblityHandler : NSObject <HUStatusBarVisibilityHandling>

@property (readonly, nonatomic, getter=isStatusBarHidden) BOOL statusBarHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_statusBarAnimationParametersForAnimationSettings:(id)a0;
- (void)setStatusBarHidden:(BOOL)a0 withAnimationSettings:(id)a1;

@end
