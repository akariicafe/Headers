@class NSString, UIVisualEffectView, UIBlurEffect, UIView, _SFBarTheme;
@protocol _SFBarRegistrationToken;

@interface _SFToolbar : UIToolbar <_SFBarCommon, _SFBarRegistrationObserving> {
    UIVisualEffectView *_backgroundView;
    UIBlurEffect *_customBackdropEffect;
    UIView *_separator;
}

@property (readonly, nonatomic) long long placement;
@property (copy, nonatomic) NSString *backdropGroupName;
@property (retain, nonatomic) _SFBarTheme *theme;
@property (nonatomic) BOOL usesLegacyDarkBackdrop;
@property (weak, nonatomic) id<_SFBarRegistrationToken> barRegistration;
@property (weak, nonatomic) UIView *superviewOwningLayout;
@property (readonly, nonatomic) double baselineOffsetAdjustment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_deviceSupportsMinibars;

- (void)animateLinkImage:(struct CGImage { } *)a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2 toBarItem:(long long)a3 afterImageDisappearsBlock:(id /* block */)a4 afterDestinationLayerBouncesBlock:(id /* block */)a5;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setItems:(id)a0 animated:(BOOL)a1;
- (void)animateSafariIconLinkFromPoint:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (id)initWithPlacement:(long long)a0 hideBackground:(BOOL)a1;
- (id)popoverSourceInfoForBarItem:(long long)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)didCompleteBarRegistrationWithToken:(id)a0;
- (void).cxx_destruct;
- (double)_contentMargin;
- (BOOL)isMinibar;
- (void)didChangeArrangedBarItems:(id)a0;
- (void)_cancelLinkAnimations;
- (void)_updateBackgroundViewEffects;
- (id)initWithPlacement:(long long)a0;

@end
