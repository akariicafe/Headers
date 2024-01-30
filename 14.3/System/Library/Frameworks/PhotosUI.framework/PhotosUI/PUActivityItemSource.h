@class NSURL, NSMutableDictionary, PUActivityItemSourceOperation, NSDate, NSDictionary, NSObject, PHAsset, NSString, PUActivityItemSourceAnchorOperation, PUActivityItemSourceConfiguration, NSMutableSet, PHAssetExportRequest, NSError, NSProgress;
@protocol OS_os_log, OS_dispatch_queue, OS_dispatch_group;

@interface PUActivityItemSource : PXObservable <PHAssetExportRequestDelegate, PUActivityItemSourceOperationDelegate, PUMutableActivityItemSource, UIActivityItemDeferredSource, UIActivityItemApplicationExtensionSource, UIActivityItemImageDataProvider, UIActivityItemSource> {
    NSDictionary *_cachedSharingVariants;
    NSObject<OS_dispatch_group> *_cachedSharingVariantsDisptachGroup;
    NSMutableSet *_onDemandExports;
    NSMutableDictionary *_sharingURLs;
    NSString *_sharingUUID;
    NSString *_assetOriginalFilenameBase;
    PUActivityItemSourceOperation *_currentOperation;
    PUActivityItemSourceAnchorOperation *_anchorOperation;
}

@property (class, readonly, nonatomic) NSObject<OS_os_log> *activityItemSourceLog;

@property (retain, nonatomic) PUActivityItemSourceConfiguration *exportConfiguration;
@property (retain, nonatomic, setter=_setAssetExportRequest:) PHAssetExportRequest *_assetExportRequest;
@property (retain, nonatomic, setter=_setExportProgress:) NSProgress *_exportProgress;
@property (copy, nonatomic, setter=_setExportProgressHandler:) id /* block */ _exportProgressHandler;
@property (retain, setter=_setPasteboardRepresentation:) NSDictionary *_pasteboardRepresentation;
@property (retain, setter=_setAssetsLibraryURL:) NSURL *_assetsLibraryURL;
@property (readonly, nonatomic) unsigned long long signpostId;
@property (readonly, nonatomic) NSMutableDictionary *preparationStepTimingInfo;
@property (retain, nonatomic) NSDate *preparationStepSignpostIntervalStartTime;
@property (readonly, nonatomic) long long prepareItemEventCPAnalyticsSignpostId;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *externalIsolation;
@property (retain, nonatomic) NSError *lastPreparationError;
@property (readonly, nonatomic) PHAsset *asset;
@property (readonly, nonatomic) NSString *sharingUUID;
@property (readonly, nonatomic) struct { BOOL excludeLiveness; BOOL excludeLocation; BOOL excludeCaption; BOOL excludeAccessibilityDescription; BOOL includeAllOriginalResources; } sharingPreferences;
@property (readonly, nonatomic) unsigned long long state;
@property (copy) id /* block */ progressHandler;
@property (copy) id /* block */ completionHandler;
@property (copy) id /* block */ postCompletionHandler;
@property (nonatomic) BOOL shouldSkipPreparation;
@property (nonatomic) BOOL shouldAnchorPreparation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)_sharingErrorWithCode:(long long)a0 underlyingError:(id)a1 localizedDescription:(id)a2 additionalInfo:(id)a3;
+ (BOOL)supportsAssetLocalIdentifierForActivityType:(id)a0;

- (void)cancel;
- (void)_resetState;
- (void)setSharingPreferences:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; })a0;
- (void)activityItemSourceOperation:(id)a0 prepareItemForActivityType:(id)a1;
- (id)initWithAsset:(id)a0 sharingPreferences:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; })a1;
- (id)_activityOperationQueue;
- (void)runWithActivityType:(id)a0;
- (id)_sharingVariants;
- (void)_fetchSharingVariants;
- (void)signalAnchorCompletion;
- (id)_uniformTypeIdentifierForActivityType:(id)a0;
- (id)_newOperationForActivityType:(id)a0;
- (id)_newPasteboardRepresentationForURL:(id)a0;
- (void)_runExportRequestWithOptions:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)_fetchImageWithOptions:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)_stopObservingExportRequest;
- (void)_fetchVideoWithOptions:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)_fetchLivePhotoWithOptions:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)_fetchAlternateWithOptions:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)_itemForActivityType:(id)a0;
- (id)activityViewController:(id)a0 dataTypeIdentifierForActivityType:(id)a1;
- (void)_beginObservingExportRequest:(id)a0 withProgressHandler:(id /* block */)a1;
- (void)commitTimingInfoForPreparationStep:(id)a0 fromStartTime:(id)a1;
- (id)finalizeTotalPreparationDurationTimingInfoDictionary;
- (id)_generateAnalyticsPayloadWithTimingInfo:(id)a0;
- (void)sendPreparationCompletedEventForActivityType:(id)a0 preparationTimingInfo:(id)a1 withError:(id)a2 didCancel:(BOOL)a3;
- (id)_runOnDemandExportForAsset:(id)a0 withOptions:(id)a1 completionHandler:(id /* block */)a2;
- (id)_outboundResourcesDirectoryURL;
- (id)_resourceURLForType:(long long)a0;
- (void).cxx_destruct;
- (id)_runOnDemandSingleFileExportForAsset:(id)a0 withOptions:(id)a1 completionHandler:(id /* block */)a2;
- (id)_generateURLForType:(long long)a0 withPathExtension:(id)a1 preferredFilename:(id)a2;
- (BOOL)_copyResourceAtURL:(id)a0 toURL:(id)a1 shouldMove:(BOOL)a2;
- (void)_setResourceURL:(id)a0 forType:(long long)a1;
- (id)_createManagedURLForResourceAtURL:(id)a0 shouldMove:(BOOL)a1 forType:(long long)a2;
- (void)cleanUpExportedFiles;
- (void)dealloc;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (id)activityViewControllerOperation:(id)a0;
- (void)setState:(unsigned long long)a0;
- (void)assetExportRequest:(id)a0 didChangeToState:(unsigned long long)a1 fromState:(unsigned long long)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)activityViewControllerApplicationExtensionItem:(id)a0;
- (id)activityViewController:(id)a0 thumbnailImageDataForActivityType:(id)a1 suggestedSize:(struct CGSize { double x0; double x1; })a2;

@end
