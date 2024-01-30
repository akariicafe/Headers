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
- (void)dealloc;
- (void)discardContents;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)handleTap:(id)a0;
- (void)memoryWarning:(id)a0;
- (void)setupToolbar;
- (void)mapTypeChanged:(id)a0;
- (void)setupNavigationBar;
- (void)presentComponentWithChanges:(struct { BOOL x0; BOOL x1; BOOL x2; })a0;
- (void)renderContents;
- (unsigned long long)analyticsMediaType;
- (BOOL)areBarsHidden;
- (void)cancelSnapShot;
- (void)configureMapView;
- (void)createMediaEngageEvent;
- (void)createSnapShot;
- (void)dismissFullScreen;
- (void)enableMapViewInteraction:(BOOL)a0;
- (void)finishMediaEngageEvent;
- (void)fullScreenCanvasViewControllerWantsToDismiss:(id)a0;
- (void)handleDoneTap:(id)a0;
- (BOOL)hasSelectedAnnotations;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegate:(id)a2 componentStyleRendererFactory:(id)a3 analyticsReporting:(id)a4 appStateMonitor:(id)a5 documentTitleProvider:(id)a6;
- (BOOL)isPresentingFullscreen;
- (BOOL)isUserInteractingWithMap;
- (id)mapTitle;
- (unsigned long long)mapTypeForSegmentIndex:(unsigned long long)a0;
- (void)presentFullScreen;
- (unsigned long long)segmentIndexForMapType:(unsigned long long)a0;
- (void)submitEvents;
- (void)submitMediaEngageCompleteEvent;

@end
