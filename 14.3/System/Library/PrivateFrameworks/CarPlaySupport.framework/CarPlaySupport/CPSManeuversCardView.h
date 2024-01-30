@class CPSCardPlatterView, NSArray, CPSHairlineView, CPSSecondaryManeuverView, NSLayoutConstraint, CPSPrimaryManeuverView, NSString;

@interface CPSManeuversCardView : UIView <CPSNavigationDisplaying, CPSCardPlatterProviding, BSInvalidatable>

@property (retain, nonatomic) NSArray *maneuvers;
@property (retain, nonatomic) CPSPrimaryManeuverView *primaryManeuverView;
@property (retain, nonatomic) CPSSecondaryManeuverView *secondaryManeuverView;
@property (retain, nonatomic) NSArray *secondaryHeightConstraints;
@property (nonatomic) BOOL showSecondaryManeuverView;
@property (retain, nonatomic) NSLayoutConstraint *platterBottomConstraint;
@property (retain, nonatomic) CPSHairlineView *hairlineView;
@property (nonatomic) BOOL usesCustomBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CPSCardPlatterView *cardPlatterView;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (void)invalidate;
- (void)showManeuvers:(id)a0 usingDisplayStyles:(id)a1;
- (void)updateEstimates:(id)a0 forManeuver:(id)a1;
- (BOOL)canFitSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithManeuvers:(id)a0;
- (void)_updateSecondaryManeuverBackgroundColor;
- (void)_updateHairlineBackgroundColor;

@end
