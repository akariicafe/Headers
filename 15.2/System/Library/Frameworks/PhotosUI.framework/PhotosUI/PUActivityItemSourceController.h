@class NSString, PUCMMActivityItemSource, NSArray, NSURL, PUActivityViewController, PHPerson, NSOrderedSet, NSMutableArray, NSObject, NSMutableOrderedSet;
@protocol OS_dispatch_queue, PUActivityItemSourceControllerDelegate;

@interface PUActivityItemSourceController : PXObservable <PUCMMActivityItemSourceDelegate, PXCMMActionPerformerDelegate, PXChangeObserver, PXActivityItemSourceController> {
    NSMutableOrderedSet *_assetItemSources;
    NSArray *_activeItemSources;
    _Atomic int _taskId;
    unsigned long long _cloudSharedAssetCount;
    long long _momentShareAssetCount;
    long long _unsavedSyndicatedAssetCount;
    long long _externalLibraryAssetCount;
}

@property (readonly, nonatomic) PUCMMActivityItemSource *cmmActivityItemSource;
@property (copy) NSArray *activeItemSources;
@property (retain) NSMutableArray *errors;
@property (retain) NSString *activeActivityType;
@property (retain, nonatomic, setter=_setPublishedURL:) NSURL *publishedURL;
@property (nonatomic) unsigned long long numSourcesDownloading;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *externalIsolation;
@property (readonly, nonatomic) unsigned int powerAssertionIdentifier;
@property (nonatomic) unsigned long long preferredPreparationType;
@property (nonatomic) BOOL shouldUseMomentShareLinkInMessagesIfThresholdMet;
@property (weak, nonatomic) id<PUActivityItemSourceControllerDelegate> delegate;
@property (readonly, nonatomic) unsigned long long state;
@property (weak, nonatomic) PUActivityViewController *activityViewController;
@property (copy, nonatomic) NSMutableOrderedSet *assetItems;
@property (nonatomic) BOOL shouldExcludeLivenessInAllItemSources;
@property (nonatomic) BOOL shouldExcludeLocationInAllItemSources;
@property (nonatomic) BOOL shouldExcludeCaptionInAllItemSources;
@property (nonatomic) BOOL shouldExcludeAccessibilityDescriptionInAllItemSources;
@property (nonatomic) BOOL shouldShareAsOriginals;
@property (retain, nonatomic) PHPerson *person;
@property (readonly, copy, nonatomic) NSOrderedSet *assetItemSources;
@property (readonly, copy, nonatomic) NSArray *activityItems;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (readonly, copy, nonatomic) NSOrderedSet *assets;
@property (readonly, nonatomic) BOOL momentSharePublishAttempted;
@property (readonly, nonatomic) BOOL itemSourcesSupportMomentShareLinkCreation;
@property (readonly, nonatomic) BOOL isPreparingIndividualItems;
@property (readonly, nonatomic) unsigned long long unsavedSyndicatedAssetCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL itemSourcesSupportSlideshow;

- (BOOL)actionPerformer:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (void)setState:(unsigned long long)a0;
- (void)updateState;
- (void)_prepareMomentShareLinkFromIndividualItemSourcesForActivity:(id)a0;
- (BOOL)_prepareForPerformWithActivityType:(id)a0 error:(id *)a1;
- (void)_cleanupAfterPerform;
- (void)runExplicitly:(BOOL)a0 withActivityType:(id)a1 completionHandler:(id /* block */)a2;
- (void)publishLinkForActivityType:(id)a0 completionHandler:(id /* block */)a1;
- (void)_didPublishMomentShareLinkToURL:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (id)activityItemSourceForAsset:(id)a0;
- (void).cxx_destruct;
- (BOOL)actionPerformer:(id)a0 presentViewController:(id)a1;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)cleanUpExportedFiles;
- (struct PXAssetMediaTypeCount { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; })requestAssetsMediaTypeCount;
- (void)cmmActivityItemSource:(id)a0 willBeginPreparationWithActivityType:(id)a1 preparationType:(unsigned long long)a2;
- (void)cmmActivityItemSource:(id)a0 didFinishPreparationForActivityType:(id)a1 preparationType:(unsigned long long)a2 withItems:(id)a3 didCancel:(BOOL)a4 error:(id)a5 completion:(id /* block */)a6;
- (void)cancel;
- (void)updateSharingPreferencesInItemSources;
- (struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; })synthesizedSharingPreferencesForAssetItem:(id)a0;
- (void)addAssetItem:(id)a0;
- (void)removeAssetItem:(id)a0;
- (void)configureItemSourcesForActivityIfNeeded:(id)a0 forcePreparationAsMomentShareLink:(BOOL)a1;
- (void)_prepareIndividualItemSourcesForActivity:(id)a0;

@end
