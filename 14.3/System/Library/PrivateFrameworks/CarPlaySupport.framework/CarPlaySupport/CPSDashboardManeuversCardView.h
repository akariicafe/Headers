@class NSArray, NSString, CPSDashboardSecondaryManeuverView, CPSPrimaryManeuverView;

@interface CPSDashboardManeuversCardView : UIView <CPSNavigationDisplaying>

@property (retain, nonatomic) NSArray *maneuvers;
@property (retain, nonatomic) CPSPrimaryManeuverView *primaryManeuverView;
@property (retain, nonatomic) CPSDashboardSecondaryManeuverView *secondaryManeuverView;
@property (retain, nonatomic) NSArray *secondaryManeveuverConstraints;
@property (nonatomic) BOOL showSecondaryManeuverView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateConstraints;
- (void)showManeuvers:(id)a0 usingDisplayStyles:(id)a1;
- (void)updateEstimates:(id)a0 forManeuver:(id)a1;
- (BOOL)wantsLargeSize;

@end
