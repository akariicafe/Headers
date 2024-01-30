@class UIWindow, NSString, NSHashTable, NSMutableArray;

@interface SBStatusBarManager : NSObject <BSDescriptionProviding> {
    NSHashTable *_statusBars;
    UIWindow *_recycledStatusBarsContainerWindow;
    NSMutableArray *_recycledStatusBars;
    NSHashTable *_hideStatusBarAssertions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)acquireHideFrontmostStatusBarAssertionForReason:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)handleStatusBarTapWithEvent:(id)a0;
- (BOOL)isFrontmostStatusBarHidden;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)leadingStatusBarStyleRequest;
- (id)succinctDescriptionBuilder;
- (id)frontmostStatusBarStyleRequest;
- (void)recycleStatusBar:(id)a0;
- (id)trailingStatusBarStyleRequest;
- (void)_removeStatusBarContainer:(id)a0;
- (id)createStatusBarWithReason:(id)a0;
- (BOOL)isFrontmostStatusBarPartHidden:(long long)a0;
- (id)createStatusBarWithReason:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
