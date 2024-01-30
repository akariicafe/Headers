@class CLLocation, NSArray, UIView, EKEventMapCell, MKMapItemView;

@interface EKEventMapDetailItem : EKEventDetailItem {
    EKEventMapCell *_cell;
    EKEventMapCell *_oldCell;
    MKMapItemView *_mapView;
    NSArray *_mapViewConstraints;
    UIView *_loadingView;
    NSArray *_loadingViewConstraints;
    CLLocation *_location;
    BOOL _animationHasRan;
}

@property (nonatomic) BOOL hasMapItemLaunchOptionFromTimeToLeaveNotification;

- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void)setupMapView;
- (void)eventViewController:(id)a0 tableViewDidScroll:(id)a1;
- (void)_setupCellAsEmpty;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1 forceUpdate:(BOOL)a2;
- (void)refreshCopiedEvents;
- (struct { double x0; double x1; })_makeSpanWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radius:(double)a1 minRadius:(double)a2;
- (void)_setupCellWithMapView;
- (id)_mapRelatedViewConstraintsForMapRelatedView:(id)a0 inCell:(id)a1;
- (double)_mapHeight;
- (void)updateViewColors;
- (void)_loadMapItem:(id)a0 withCoordinateSpan:(struct { double x0; double x1; })a1;
- (BOOL)_shouldShowMapView;
- (void)_animateMapIfNeededWithPresentingController:(id)a0 presentingView:(id)a1;
- (void)_setupCell;
- (void).cxx_destruct;
- (void)reset;

@end
