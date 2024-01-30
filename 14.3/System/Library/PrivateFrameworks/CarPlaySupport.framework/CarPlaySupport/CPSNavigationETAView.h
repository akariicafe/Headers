@class NSString, CPSRouteEstimatesView, UIView, CPTrip;

@interface CPSNavigationETAView : UIView <CPSNavigationDisplaying>

@property (retain, nonatomic) UIView *borderView;
@property (readonly, nonatomic) CPTrip *trip;
@property (readonly, nonatomic) CPSRouteEstimatesView *routeEstimatesView;
@property (nonatomic) unsigned long long tripEstimateStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateStyle;
- (void).cxx_destruct;
- (void)removeFromSuperview;
- (void)setHidden:(BOOL)a0;
- (void)didMoveToSuperview;
- (void)updateEstimates:(id)a0 forManeuver:(id)a1;
- (id)initWithTrip:(id)a0 style:(unsigned long long)a1;
- (void)showManeuvers:(id)a0;

@end
