@class NSError, NSString, MKMapItem, MKLookAroundContainerView, NSTimer, MKMapSnapshotView, NSMutableArray, NSLayoutConstraint;

@interface MKMapItemView : UIView <MKInfoCardThemeListener> {
    MKLookAroundContainerView *_lookAroundContainerView;
    NSMutableArray *_lookAroundConstraints;
    MKMapSnapshotView *_snapshotView;
    struct { double latitudeDelta; double longitudeDelta; } _coordinateSpan;
    id /* block */ _mapItemloadedCompletionHandler;
    NSMutableArray *_snapshotConstraints;
    NSLayoutConstraint *_snapshotWidthConstraint;
    NSError *_snapshotError;
    NSTimer *_loadTimeoutTimer;
    struct CGSize { double width; double height; } _sizeWhenLastLoaded;
    BOOL _loadCalledOnce;
    unsigned long long _signpostID;
    BOOL _loadingLookAroundView;
}

@property (readonly, nonatomic) MKMapItem *mapItem;
@property (nonatomic) BOOL shouldResolveMapItem;
@property (nonatomic) BOOL shouldShowBorders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_resetState;
- (void)_setupObserver;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)cancel;
- (void)dealloc;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)_annotationView;
- (BOOL)_areBoundsValid;
- (void)_fetchLookAroundViewforMapItem:(id)a0;
- (void)_reloadSnapshot;
- (void)_callCompletionHandler;
- (void)_callCompletionHandlerWithInvalidBoundsError;
- (struct { double x0; double x1; })_clampCoordinateSpan:(struct { double x0; double x1; })a0;
- (id)_customAnnotation;
- (id)_deriveSnapshotOptions:(BOOL)a0;
- (void)_getParentItem;
- (void)_handleTapOnLookAroundView:(id)a0;
- (void)_handleTapOnSnapshot:(id)a0;
- (void)_receivedFullyDrawnNotification:(id)a0;
- (void)_renderMapItem;
- (void)_resetLookAroundContainerViewState;
- (void)_setupLookAroundConstraints;
- (void)_setupSnapshotConstraints;
- (void)_takeSnapshotCompleted;
- (void)_takeSnapshotWithCompletionHandler:(id /* block */)a0 isReload:(BOOL)a1;
- (void)_updateBorders;
- (void)infoCardThemeChanged;
- (void)loadMapItem:(id)a0 coordinateSpan:(struct { double x0; double x1; })a1 completionHandler:(id /* block */)a2;
- (BOOL)shouldHideLookAroundForParsec;
- (void)triggerAnimation;

@end
