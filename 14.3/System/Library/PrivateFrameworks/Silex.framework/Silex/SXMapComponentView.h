@class MKMapView, NSArray, SXMapSnapShotter, UISegmentedControl, UITapGestureRecognizer, UIImageView, SXMediaEngageEvent, SXFullscreenCanvasViewController, NSString, UIBarButtonItem, NSCache;
@protocol SXDocumentTitleProviding;

@interface SXMapComponentView : SXMediaComponentView <UIGestureRecognizerDelegate, MKMapViewDelegate, SXFullscreenCanvasViewControllerDelegate>

@property (retain, nonatomic) MKMapView *mapView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) NSArray *annotations;
@property (readonly, nonatomic) id<SXDocumentTitleProviding> documentTitleProvider;
@property (retain, nonatomic) UIBarButtonItem *doneBarButtonItem;
@property (retain, nonatomic) SXFullscreenCanvasViewController *fullScreenCanvasViewController;
@property (retain, nonatomic) UISegmentedControl *segmentedControl;
@property (retain, nonatomic) NSArray *toolbarItems;
@property (readonly, nonatomic) SXMapSnapShotter *snapShotter;
@property (readonly, nonatomic) UIImageView *imageView;
@property (nonatomic) struct { struct { double x; double y; } origin; struct { double width; double height; } size; } mapRect;
@property (copy, nonatomic) id /* block */ snapShotCancelHandler;
@property (readonly, nonatomic) NSCache *cachedSnapshots;
@property (retain, nonatomic) SXMediaEngageEvent *activeMediaEngageEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })region;
- (void).cxx_destruct;
- (void)dealloc;
- (void)memoryWarning:(id)a0;
- (void)setupToolbar;
- (void)handleTap:(id)a0;
- (void)discardContents;
- (id)mapTitle;
- (void)traitCollectionDidChange:(id)a0;
- (void)setupNavigationBar;
- (void)mapTypeChanged:(id)a0;
- (void)renderContents;
- (void)presentComponentWithChanges:(struct { BOOL x0; BOOL x1; BOOL x2; })a0;
- (void)fullScreenCanvasViewControllerWantsToDismiss:(id)a0;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegate:(id)a2 componentStyleRendererFactory:(id)a3 analyticsReporting:(id)a4 appStateMonitor:(id)a5 documentTitleProvider:(id)a6;
- (void)submitEvents;
- (unsigned long long)analyticsMediaType;
- (void)submitMediaEngageCompleteEvent;
- (BOOL)isPresentingFullscreen;
- (void)createSnapShot;
- (void)cancelSnapShot;
- (void)configureMapView;
- (void)enableMapViewInteraction:(BOOL)a0;
- (void)createMediaEngageEvent;
- (void)finishMediaEngageEvent;
- (BOOL)hasSelectedAnnotations;
- (BOOL)areBarsHidden;
- (void)presentFullScreen;
- (void)dismissFullScreen;
- (void)handleDoneTap:(id)a0;
- (unsigned long long)segmentIndexForMapType:(unsigned long long)a0;
- (unsigned long long)mapTypeForSegmentIndex:(unsigned long long)a0;
- (BOOL)isUserInteractingWithMap;

@end
