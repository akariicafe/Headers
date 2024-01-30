@class VUIAppContext, NSString, VUIAppDocumentUpdateEventStore, NSMutableOrderedSet, NSMutableArray;
@protocol VUIAppDocumentUpdateContext;

@interface VUIAppDocumentServiceViewController : _TVAppDocumentRequestController <IKUpdateServiceRequestDelegate, VUIAppDocumentUpdateEventMonitorObserving, UIPopoverPresentationControllerDelegate>

@property (weak, nonatomic) VUIAppContext *appContext;
@property (copy, nonatomic) NSString *documentRef;
@property (retain, nonatomic) id<VUIAppDocumentUpdateContext> documentUpdateContext;
@property (retain, nonatomic) NSMutableOrderedSet *documentUpdateViewElements;
@property (retain, nonatomic) VUIAppDocumentUpdateEventStore *deferredDocumentUpdateEventStore;
@property (nonatomic) BOOL deferDocumentUpdateEventProcessing;
@property (nonatomic) unsigned long long viewWillAppearReason;
@property (nonatomic, getter=isDocumentMarkedDirty) BOOL markDocumentDirtyForRefreshUpdate;
@property (retain, nonatomic) NSString *viewControllerIdentifier;
@property (retain, nonatomic) NSString *viewControllerDocumentIdentifier;
@property (retain, nonatomic) NSMutableArray *impressionableSwiftViewControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_findCollectionListChildElementsInViewElement:(id)a0;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)popoverPresentationController:(id)a0 willRepositionPopoverToRect:(inout struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 inView:(inout id *)a2;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)_receivedEvents;
- (id)initWithAppContext:(id)a0;
- (void)documentDidUpdate:(id)a0;
- (void)appDocumentDidReceiveEvent:(id)a0;
- (void)appDocumentHasBecomeActive;
- (BOOL)isEqualToAppDocumentServiceViewController:(id)a0;
- (id)initWithDocumentServiceRequest:(id)a0 loadImmediately:(BOOL)a1;
- (void)_cancelDocumentUpdates;
- (void)_unregisterDocumentUpdateEventDescriptors;
- (void)_cancelDocumentUpdatesAndPreserveUpdateEvents;
- (void)_startDocumentUpdatesWithContext:(id)a0;
- (void)_startDocumentUpdatesForDeferredEventsIfPossible;
- (BOOL)_hasRefreshEvents;
- (void)_registerDocumentUpdateEventDescriptorsWithServiceCompletionStatus:(long long)a0;
- (void)_performNextDocumentUpdateIfNeeded;
- (void)serviceRequest:(id)a0 didCompleteWithStatus:(long long)a1 errorDictionary:(id)a2;
- (void)_disableFastScrollIfNeeded;
- (void)_cancelDocumentUpdateWithRequest:(id)a0;
- (void)_startDocumentUpdateWithRequest:(id)a0;
- (void)_removeStoreEvents:(unsigned long long)a0;
- (void)_removeEventTypes:(id)a0 receivedEvents:(id)a1;
- (void)updateServiceRequest:(id)a0 documentDidChange:(id)a1;
- (id)initWithDocumentServiceRequest:(id)a0;
- (id)initWithDocumentServiceRequest:(id)a0 loadImmediately:(BOOL)a1 documentRef:(id)a2 viewControllerIdentifier:(id)a3 viewControllerDocumentIdentifier:(id)a4;
- (void)updateDocumentWithContextDictionary:(id)a0 element:(id)a1;
- (void)viewWillAppearAfterTabSwitch;
- (void)didCompleteDocumentCreationWithStatus:(long long)a0 errorDictionary:(id)a1;
- (BOOL)handleEvent:(id)a0 targetResponder:(id)a1 viewElement:(id)a2 extraInfo:(id *)a3;

@end
