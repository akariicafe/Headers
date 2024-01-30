@class NSError, NSString, MKMapItem, NSTimer, MKMapSnapshotView, NSMutableArray, NSLayoutConstraint, MKMuninContainerView;

@interface MKMapItemView : UIView <MKInfoCardThemeListener> {
    MKMuninContainerView *_muninContainerView;
    NSMutableArray *_muninConstraints;
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
    BOOL _loadingMuninView;
}

@property (readonly, nonatomic) MKMapItem *mapItem;
@property (nonatomic) BOOL shouldResolveMapItem;
@property (nonatomic) BOOL shouldShowBorders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_resetState;
- (void)layoutSubviews;
- (void)_setupObserver;
- (void)triggerAnimation;
- (void)loadMapItem:(id)a0 coordinateSpan:(struct { double x0; double x1; })a1 completionHandler:(id /* block */)a2;
- (void)_updateBorders;
- (BOOL)_areBoundsValid;
- (void)_callCompletionHandlerWithInvalidBoundsError;
- (struct { double x0; double x1; })_clampCoordinateSpan:(struct { double x0; double x1; })a0;
- (void)_takeSnapshotCompleted;
- (void)_getParentItem;
- (void)_takeSnapshotWithCompletionHandler:(id /* block */)a0 isReload:(BOOL)a1;
- (void)_callCompletionHandler;
- (void)_fetchMuninViewforMapItem:(id)a0;
- (BOOL)shouldHideMuninForParsec;
- (void)_handleTapOnMuninView:(id)a0;
- (void)_setupMuninConstraints;
- (void)_handleTapOnSnapshot:(id)a0;
- (void)_setupSnapshotConstraints;
- (id)_deriveSnapshotOptions:(BOOL)a0;
- (void)_reloadSnapshot;
- (id)_customAnnotation;
- (void)_receivedFullyDrawnNotification:(id)a0;
- (void)_renderMapItem;
- (void)_resetMuninContainerViewState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)dealloc;
- (void)cancel;
- (void)infoCardThemeChanged;
- (id)_annotationView;

@end
