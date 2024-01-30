@class UIView, NSString, _UILegibilitySettings, CSHomeAffordanceView, SBUICallToActionLabel, NSArray, UIButton, SBFTouchPassThroughView, NSObject, UILabel, SBUILegibilityLabel;
@protocol OS_dispatch_source;

@interface SBDashBoardSetupView : UIView <CAAnimationDelegate> {
    UILabel *_titleLabel;
    UILabel *_storeRestrictedLabel;
    UILabel *_securityResearchDeviceTitleLabel;
    UIView *_securityResearchDeviceContainer;
    SBFTouchPassThroughView *_homeAffordanceContainer;
    UIView *_homeAffordanceCallToActionContainer;
    SBUILegibilityLabel *_homeAffordanceCallToActionLabel;
    SBUICallToActionLabel *_homeButtonCallToActionLabel;
    NSObject<OS_dispatch_source> *_homeButtonCallToActionTimer;
    NSArray *_activationInfoViewConstraints;
}

@property (retain, nonatomic) CSHomeAffordanceView *homeAffordanceView;
@property (retain, nonatomic) UIView *activationInfoView;
@property (retain, nonatomic) UIView *regulatoryInfoView;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, nonatomic) UIButton *infoButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateLegibilitySettings;
- (void)_setupConstraints;
- (void)_addTitleLabel;
- (void)setInfoButtonVisible:(BOOL)a0 animated:(BOOL)a1 withDelay:(double)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 usingHomeAffordance:(BOOL)a1 isStoreRestricted:(BOOL)a2 isSecurityResearchDevice:(BOOL)a3;
- (void)animateComponents:(unsigned long long)a0 toActive:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)setTitleString:(id)a0 forLanguage:(id)a1;
- (void)setStoreRestrictedString:(id)a0 forLanguage:(id)a1;
- (void)setCallToActionString:(id)a0 forLanguage:(id)a1;
- (void)_addSecurityResearchLabels;
- (void)_addInfoButton;
- (void)_addStoreRestrictedLabel;
- (void)_addHomeAffordanceCallToAction;
- (void)_addHomeAffordance;
- (void)_addHomeButtonCallToAction;
- (void)_adjustTitleVisibilityForInfoViews;
- (void)_setupActivationInfoConstraintsIfNeeded;
- (void)_animateView:(id)a0 toActive:(BOOL)a1 withDispatchGroup:(id)a2;
- (void)_animateHomeButtonCallToActionToActive:(BOOL)a0 withDispatchGroup:(id)a1;
- (void)_animateHomeAffordanceCallToActionToActive:(BOOL)a0 withDispatchGroup:(id)a1;
- (void)_animateHomeAffordanceToActive:(BOOL)a0 withDispatchGroup:(id)a1;
- (void)_layoutRegulatoryInfo;
- (void)_layoutActivationInfoView;
- (void)_layoutHomeButtonCallToAction;
- (void)_layoutHomeAffordanceCallToAction;
- (void)_layoutHomeAffordance;
- (void)_removeResetAnimationForKeyPath:(id)a0 onLayer:(id)a1;
- (void)_removeNormalAnimationForKeyPath:(id)a0 onLayer:(id)a1;
- (void)_addResetAnimationForKeyPath:(id)a0 onLayer:(id)a1 dispatchGroup:(id)a2;

@end
