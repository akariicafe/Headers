@class _UIBackdropView, NSString, AFUIPasscodeBlurView, UIView;
@protocol SBUIPasscodeLockView, AFUIPasscodeContainerViewDelegate;

@interface AFUIPasscodeContainerView : UIView <SBUIPasscodeLockViewDelegate> {
    AFUIPasscodeBlurView *_passcodeBlurView;
    long long _mode;
    Class _factoryClass;
}

@property (weak, nonatomic) _UIBackdropView *backdropView;
@property (copy, nonatomic) id /* block */ unlockCompletion;
@property (nonatomic) unsigned long long unlockAttemptCount;
@property (retain, nonatomic) UIView<SBUIPasscodeLockView> *lockView;
@property (weak, nonatomic) id<AFUIPasscodeContainerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)maxUnlockAttempts;

- (void).cxx_destruct;
- (void)passcodeLockViewCancelButtonPressed:(id)a0;
- (void)passcodeLockViewPasscodeEntered:(id)a0;
- (void)passcodeLockViewPasscodeEnteredViaMesa:(id)a0;
- (id)_lockViewLegibilityProvider;
- (void)cancelShowingPasscodeUnlock;
- (void)cleanupWithResult:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 backdropView:(id)a1 mode:(long long)a2 passcodeViewFactoryClass:(Class)a3;
- (void)showPasscodeUnlockWithStatusText:(id)a0 subtitle:(id)a1 completionHandler:(id /* block */)a2 unlockCompletionHandler:(id /* block */)a3;

@end
