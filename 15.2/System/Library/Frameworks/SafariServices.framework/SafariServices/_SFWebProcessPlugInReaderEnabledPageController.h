@class SFWebProcessPlugInCertificateWarningController, NSString, NSDictionary, _SFReaderWebProcessPlugInPageController, _WKRemoteObjectInterface, SFWebProcessPlugInPageExtensionController, _SFWebProcessSharingLinkExtractor;
@protocol SFReaderEventsListener, _SFAppBannerMetaTagContentObserver;

@interface _SFWebProcessPlugInReaderEnabledPageController : _SFWebProcessPlugInAutoFillPageController <SFReaderWebProcessControllerProtocol> {
    struct unique_ptr<SafariServices::ReaderAvailabilityController, std::default_delete<SafariServices::ReaderAvailabilityController>> { struct __compressed_pair<SafariServices::ReaderAvailabilityController *, std::default_delete<SafariServices::ReaderAvailabilityController>> { struct ReaderAvailabilityController *__value_; } __ptr_; } _readerAvailabilityController;
    _WKRemoteObjectInterface *_availabilityControllerInterface;
    id<SFReaderEventsListener> _readerActivityListenerProxy;
    NSDictionary *_initialScrollPositionAsDictionary;
    SFWebProcessPlugInPageExtensionController *_extensionController;
    _SFWebProcessSharingLinkExtractor *_sharingLinkExtractor;
    SFWebProcessPlugInCertificateWarningController *_certificateWarningController;
    id<_SFAppBannerMetaTagContentObserver> _appBannerObserverProxy;
}

@property (retain, nonatomic) _SFReaderWebProcessPlugInPageController *readerPageController;
@property (copy, nonatomic) NSDictionary *initalArticleScrollPositionAsDictionary;
@property (nonatomic) long long cachedReaderTopScrollOffset;
@property (readonly, nonatomic) NSDictionary *initialReaderConfiguration;
@property (readonly, nonatomic, getter=isViewingReadingListArchive) BOOL viewingReadingListArchive;
@property (readonly, nonatomic) BOOL readerHasBeenActivatedRecently;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webProcessPlugInBrowserContextController:(id)a0 globalObjectIsAvailableForFrame:(id)a1 inScriptWorld:(id)a2;
- (void)didFinishPresentationUpdateAfterTransitioningToReader;
- (void)didDetermineAdditionalTextSamples:(id)a0;
- (void)willDestroyBrowserContextController:(id)a0;
- (void)checkReaderAvailability;
- (id)initWithPlugIn:(id)a0 contextController:(id)a1;
- (void)didSetReaderConfiguration:(id)a0;
- (void)setConfiguration:(id)a0;
- (void)webProcessPlugInBrowserContextController:(id)a0 didFinishLoadForFrame:(id)a1;
- (void).cxx_destruct;
- (void)webProcessPlugInBrowserContextController:(id)a0 willInjectUserScriptForFrame:(id)a1 inScriptWorld:(id)a2;
- (void)webProcessPlugInBrowserContextController:(id)a0 didFinishDocumentLoadForFrame:(id)a1;
- (void)setReaderIsActive:(BOOL)a0;
- (void)webProcessPlugInBrowserContextController:(id)a0 renderingProgressDidChange:(unsigned long long)a1;
- (void)webProcessPlugInBrowserContextController:(id)a0 didStartProvisionalLoadForFrame:(id)a1;
- (void)collectArticleContent;
- (void)setReaderInitialTopScrollOffset:(long long)a0 configuration:(id)a1 isViewingArchive:(BOOL)a2;
- (void)didDetermineReaderAvailability:(id)a0;
- (id).cxx_construct;
- (void)webProcessPlugInBrowserContextController:(id)a0 didCommitLoadForFrame:(id)a1;
- (void)activateFont:(id)a0;
- (void)webProcessPlugInBrowserContextController:(id)a0 didSameDocumentNavigation:(long long)a1 forFrame:(id)a2;
- (struct OpaqueJSValue { } *)originalArticleFinder;
- (void)prepareToTransitionToReader;
- (void)didCreateReaderPageContextHandle:(id)a0;
- (void)loadNewReaderArticle;
- (void)collectReadingListItemInfoWithBookmarkID:(id)a0;
- (void)collectReaderContentForMail;
- (void)prepareReaderContentForPrinting;
- (void)readerContentDidBecomeReadyWithDetectedLanguage:(id)a0;
- (void)articleContentDidChange;
- (void)readerTextWasExtracted:(id)a0 withMetadata:(id)a1 wasDeterminingAvailability:(BOOL)a2;
- (void)_setUpReaderControllerInterface;
- (void)_clearReaderControllerInterface;
- (void)_setUpReaderActivityListenerProxy;
- (void)_detectReaderAvailabilityAfterSameDocumentNavigation;
- (void)_detectAvailabilityAfterDelay:(double)a0 loadEvent:(int)a1;
- (id)_searchForSmartAppBannerMetaContent;
- (id)_appBannerMetaTagObserverProxy;
- (id)_appBannerMetaElementInHeaderElement:(id)a0;

@end
