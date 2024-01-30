@class CLLocation, UIView, EKEventMapCell, MKMapItemView;

@interface EKEventMapDetailItem : EKEventDetailItem {
    EKEventMapCell *_cell;
    MKMapItemView *_mapView;
    UIView *_loadingView;
    CLLocation *_location;
    EKEventMapCell *_oldCell;
    BOOL _animationHasRan;
}

@property (nonatomic) BOOL hasMapItemLaunchOptionFromTimeToLeaveNotification;

- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1 forceUpdate:(BOOL)a2;
- (void)eventViewController:(id)a0 tableViewDidScroll:(id)a1;
- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (struct { double x0; double x1; })_makeSpanWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radius:(double)a1 minRadius:(double)a2;
- (void)updateViewColors;
- (void)_loadMapItem:(id)a0 withCoordinateSpan:(struct { double x0; double x1; })a1;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)_animateMapIfNeededWithPresentingController:(id)a0 presentingView:(id)a1;
- (double)_mapHeight;
- (void)reset;
- (void)setupMapView;
- (id)_mapRelatedViewConstraintsForMapRelatedView:(id)a0 inCell:(id)a1;

@end
