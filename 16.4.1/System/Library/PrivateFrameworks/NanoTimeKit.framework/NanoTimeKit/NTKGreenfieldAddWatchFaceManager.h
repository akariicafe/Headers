@class NSTimer, NSUUID, NSString, NTKPersistentFaceCollection, NSError, NSSet, NSObject, NSMutableArray, NTKGreenfieldDownloader, NTKGreenfieldDecodedRecipe, NSMutableSet;
@protocol NTKGreenfieldAddWatchFaceManagerDelegate, OS_dispatch_queue;

@interface NTKGreenfieldAddWatchFaceManager : NSObject <NTKFaceCollectionObserver> {
    unsigned long long _decodingState;
    unsigned long long _uiState;
    NTKGreenfieldDownloader *_downloader;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NTKPersistentFaceCollection *_library;
    NSTimer *_libraryTimeoutTimer;
    BOOL _isLibraryTimeout;
    NSError *_failedError;
    NSMutableArray *_orderedPendingComplicationsItemIds;
    NSMutableSet *_skippedPendingComplicationsItemIds;
    NSMutableSet *_installedComplicationIds;
    NSSet *_locallyAvailableItemIds;
    NSSet *_appsThatRequireUpdatesItemIds;
    NSString *_sourceApplicationBundleIdentifier;
    unsigned long long _totalNonInstalledSlotCount;
    NSMutableSet *_unavailableComplicationsSlots;
    NSMutableSet *_unavailableComplicationsNames;
}

@property (readonly, nonatomic) NTKGreenfieldDecodedRecipe *decodedRecipe;
@property (weak, nonatomic) id<NTKGreenfieldAddWatchFaceManagerDelegate> delegate;
@property (readonly, nonatomic) long long remainingAppsToInstallCount;
@property (readonly, nonatomic) long long viewedNonInstalledAppCount;
@property (readonly, nonatomic) long long totalNonInstalledAppCount;
@property (readonly, nonatomic) NSUUID *addedFaceID;
@property (readonly, nonatomic) NSString *addFaceDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)faceCollectionDidLoad:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_analyticsModelForAddFaceEvents;
- (id)_addToLibraryOrUpdateFaceInLibrary;
- (id)_analyticsExitScreenNameForCurrentState;
- (id)_appNameFromItemId:(id)a0;
- (void)_buildUnavailableComplicationsInformationWithInstalledBundleIds:(id)a0;
- (BOOL)_canAddFaceWithoutAllCompicationInstalled;
- (void)_cancelLibraryTimeoutTimer;
- (void)_cleanUpDownloader;
- (id)_curPendingComplicationItemId;
- (void)_decodeUrl:(id)a0;
- (void)_handleAddWatchFaceManagerDidFinishWithError:(id)a0;
- (void)_libraryTimeoutTimerFired;
- (id)_missingAppsDescription;
- (void)_moveAndNotifyDelegateToStartStateIfPossible;
- (void)_queue_fetchInstalledAppsOnWatchWithithCompletionBlock:(id /* block */)a0;
- (id)_queue_fetchLocallyAvailableAppsWithError:(id *)a0;
- (void)_refreshInstalledComplicationsWithContinueBlock:(id /* block */)a0;
- (void)_startDownloadWirthURL:(id)a0;
- (void)_startLibraryTimeoutTimer;
- (void)_updateUIStateAndNotifyDelegate:(unsigned long long)a0;
- (id)canAddWatchFaceFromDecodedRecipe:(id)a0 toLibrary:(id)a1;
- (void)decodeWatchFaceWithURL:(id)a0 sourceApplicationBundleIdentifier:(id)a1;
- (void)handleAddToMyFacesAction;
- (void)handleContinueAction;
- (void)handleDidExitAddWatchFaceFlow;
- (void)handleDoneAction;
- (void)handleRevisitSkippedComplicationsAction;
- (void)handleSkipComplicationAction;
- (BOOL)hasSkippedComplications;
- (void)markComplicationAsInstalled;
- (void)openAppStore;
- (long long)remainingComplicationsToInstallCount;
- (id)skippedComplicationsSlots;

@end
