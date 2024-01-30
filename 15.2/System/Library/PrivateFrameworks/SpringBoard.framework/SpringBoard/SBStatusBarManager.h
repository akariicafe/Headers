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

- (id)trailingStatusBarStyleRequest;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)leadingStatusBarStyleRequest;
- (void)_removeStatusBarContainer:(id)a0;
- (void)resetStatusBar:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)createStatusBarWithReason:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)createStatusBarWithReason:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isFrontmostStatusBarPartHidden:(long long)a0;
- (void)recycleStatusBar:(id)a0;
- (id)frontmostStatusBarStyleRequest;
- (BOOL)isFrontmostStatusBarHidden;
- (id)acquireHideFrontmostStatusBarAssertionForReason:(id)a0;
- (void)handleStatusBarTapWithEvent:(id)a0;

@end
