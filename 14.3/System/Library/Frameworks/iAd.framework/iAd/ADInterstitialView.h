@class NSString, ADPrivacyMarker, ADInterstitialAd, ADDimmerView;

@interface ADInterstitialView : UIView <ADDimmerViewDelegate>

@property (weak, nonatomic) ADInterstitialAd *interstitialAd;
@property (retain, nonatomic) ADPrivacyMarker *privacyMarker;
@property (retain, nonatomic) ADDimmerView *dimmerView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } dismissButtonRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresConstraintBasedLayout;

- (void)setTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)positionAdPrivacyMark;
- (void)dealloc;
- (void)_privacyButtonWasTapped;
- (void)removeFromSuperview;
- (id)initForInterstitialAd:(id)a0;
- (void)disableDimmerView;
- (void)setHidden:(BOOL)a0;
- (void)enablePrivacyButton;
- (void)dimmerView:(id)a0 didReceiveTouchUpAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)didMoveToWindow;
- (void)setAlpha:(double)a0;
- (BOOL)enableDimmerView:(id)a0;
- (void)traitCollectionDidChange:(id)a0;

@end
