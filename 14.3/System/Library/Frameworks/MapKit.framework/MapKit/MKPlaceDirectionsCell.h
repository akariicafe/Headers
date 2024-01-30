@class NSLayoutConstraint, NSString, _MKQuickRouteManager, NSMutableArray, UILabel, MKMapItem, UIButton;

@interface MKPlaceDirectionsCell : MKPlaceSectionRowView <MKQuickRouteManagerDelegate, MKQuickRouteConfigurableView, MKLocationManagerObserver> {
    UIButton *_directionsButton;
    UIButton *_walkButton;
    UIButton *_transitButton;
    UIButton *_driveButton;
    UILabel *_walkTimeLabel;
    UILabel *_transitTimeLabel;
    UILabel *_driveTimeLabel;
    NSLayoutConstraint *_directionsToWalkButtonConstraint;
    NSLayoutConstraint *_directionsToTransitButtonConstraint;
    NSLayoutConstraint *_directionsToDriveButtonConstraint;
    NSLayoutConstraint *_walkButtonToTransitButtonConstraint;
    NSLayoutConstraint *_walkButtonToDriveButtonConstraint;
    NSLayoutConstraint *_transitButtonToDriveButtonConstraint;
    NSLayoutConstraint *_directionsTrailingConstraint;
    NSLayoutConstraint *_walkButtonTrailingConstraint;
    NSLayoutConstraint *_transitButtonTrailingConstraint;
    NSLayoutConstraint *_driveButtonTrailingConstraint;
    _MKQuickRouteManager *_quickRouteManager;
    NSMutableArray *_baseConstraints;
    NSMutableArray *_buttonBaselineConstraints;
}

@property (retain, nonatomic) MKMapItem *mapItem;
@property (copy, nonatomic) id /* block */ requestDirectionsBlock;
@property (nonatomic) BOOL offlineMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)contentSizeDidChange;
- (void)locationManagerDidPauseLocationUpdates:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)locationManagerUpdatedLocation:(id)a0;
- (void)locationManagerFailedToUpdateLocation:(id)a0 withError:(id)a1;
- (void)locationManagerDidReset:(id)a0;
- (BOOL)locationManagerShouldPauseLocationUpdates:(id)a0;
- (void)locationManager:(id)a0 didUpdateVehicleHeading:(double)a1 timestamp:(id)a2;
- (void)locationManager:(id)a0 didUpdateVehicleSpeed:(double)a1 timestamp:(id)a2;
- (void)dealloc;
- (void)updateConstraints;
- (void)_quickDirectionsTapped:(id)a0;
- (void)_walkingDirectionsTapped:(id)a0;
- (id)timeEstimateFont;
- (id)newButtonWithImage:(id)a0 andSelector:(SEL)a1;
- (void)_transitDirectionsTapped:(id)a0;
- (void)_drivingDirectionsTapped:(id)a0;
- (void)updateETAs:(BOOL)a0 constraintsOnly:(BOOL)a1;
- (void)updateETAFor:(unsigned long long)a0 button:(id)a1 label:(id)a2;
- (BOOL)quickRouteShouldOnlyUseAutomobile;
- (BOOL)quickRouteShouldIncludeTransitWhenNotPreferredTransportType;
- (unsigned long long)preferredDirectionsTypeForQuickRoute;
- (void)quickRouteManager:(id)a0 didUpdateETA:(id)a1 error:(id)a2 animated:(BOOL)a3;
- (id)newLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)locationManagerDidResumeLocationUpdates:(id)a0;

@end
