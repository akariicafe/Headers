@class IKDOMDocument, NSString, IKViewElement, NSError, IKHeadElement, NSMutableDictionary, NSDictionary, IKViewElementStyleFactory, IKJSNavigationDocument, IKAppContext, NSMapTable, IKJSObject;
@protocol IKNetworkRequestLoader, IKAppDocumentDelegate;

@interface IKAppDocument : NSObject <IKJSDOMDocumentAppBridgeInternal, IKStyleMediaQueryEvaluator> {
    NSMutableDictionary *_mediaQueryCache;
    long long _implicitUpdatesStack;
    BOOL _parsingDOM;
    NSMapTable *_viewElementRegistry;
    BOOL _isViewElementRegistryDirty;
}

@property (retain) NSString *identifier;
@property (retain) IKViewElement *templateElement;
@property (retain) IKViewElement *navigationBarElement;
@property (retain) IKViewElement *toolbarElement;
@property (retain) IKHeadElement *headElement;
@property (retain, nonatomic) NSError *error;
@property (nonatomic, getter=isUpdated) BOOL updated;
@property (getter=isSubtreeUpdated) BOOL subtreeUpdated;
@property (nonatomic) double impressionThreshold;
@property (nonatomic) double impressionViewablePercentage;
@property (retain, nonatomic) NSDictionary *cachedSnapshotImpressionsMap;
@property (retain, nonatomic) NSMutableDictionary *impressions;
@property (readonly, weak, nonatomic) IKDOMDocument *jsDocument;
@property (readonly, weak, nonatomic) IKJSObject *owner;
@property (retain, nonatomic) IKViewElementStyleFactory *styleFactory;
@property (readonly, nonatomic) id<IKNetworkRequestLoader> requestLoader;
@property (readonly, nonatomic, getter=isImplicitlyUpdated) BOOL implicitlyUpdated;
@property (readonly, weak, nonatomic) IKJSNavigationDocument *navigationDocument;
@property (readonly, weak) IKAppContext *appContext;
@property (weak, nonatomic) id<IKAppDocumentDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onLoad;
- (void)scrollToTop;
- (void).cxx_destruct;
- (void)dealloc;
- (void)runTestWithName:(id)a0 options:(id)a1;
- (void)onUnload;
- (void)onAppear;
- (void)onUpdate;
- (void)onDisappear;
- (id)initWithAppContext:(id)a0 document:(id)a1 owner:(id)a2;
- (id)retrieveJSElementForViewElement:(id)a0 jsContext:(id)a1;
- (void)setViewElementStylesDirty;
- (void)onViewAttributesChangeWithArguments:(id)a0 completion:(id /* block */)a1;
- (void)recordImpressionsForViewElements:(id)a0;
- (id)initWithAppContext:(id)a0 document:(id)a1 owner:(id)a2 extraInfo:(id)a3;
- (void)_updateWithXML:(id)a0;
- (void)dispatchDocumentCallback:(id)a0 eventType:(unsigned long long)a1;
- (void)onImpressionsChange:(id)a0;
- (void)_setViewElementStylesDirtyForced:(BOOL)a0;
- (id)recordedImpressions:(BOOL)a0;
- (id)impressionsMatching:(id)a0 reset:(BOOL)a1;
- (void)recordedImpressionsMatching:(id)a0 reset:(BOOL)a1 completion:(id /* block */)a2;
- (id)_viewElementForNodeID:(unsigned long long)a0;
- (void)_resetImplicitUpdates;
- (void)updateForDocument:(id)a0;
- (void)setNeedsUpdateForDocument:(id)a0;
- (id)snapshotImpressions;
- (id)recordedImpressions;
- (void)recordedImpressions:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)_isUpdateAllowed;
- (BOOL)evaluateStyleMediaQueryList:(id)a0;
- (void)onActive;
- (void)onInactive;
- (void)onNeedsUpdateWithCompletion:(id /* block */)a0;
- (void)onPerformanceMetricsChange:(id)a0;
- (void)snapshotImpressionsForViewElements:(id)a0;
- (id)viewElementForNodeID:(unsigned long long)a0;
- (void)pushTrackingImplictUpdates;
- (void)popTrackingImplictUpdates;
- (BOOL)markImplicitlyUpdated;

@end
