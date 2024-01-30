@class NSError, NSUUID, NSString, NSArray, NTKPersistentFaceCollection, NSTimer, ProductKitCatalog, NSObject, NSBundle, NTKGreenfieldDecodedRecipe, NTKFace;
@protocol NTKGreenfieldB640WatchFacesManagerDelegate, OS_dispatch_queue;

@interface NTKGreenfieldB640Manager : NSObject <NTKFaceCollectionObserver> {
    NSString *_sourceApplicationBundleIdentifier;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSArray *_watchFacesDecodedRecipes;
    NSArray *_watchFacesDecodeErrors;
    NTKPersistentFaceCollection *_library;
    NSTimer *_libraryTimeoutTimer;
    unsigned long long _state;
    NSError *_error;
    NTKFace *_watchFaceAddedToLibrary;
    NSString *_bandImagePath;
    NSBundle *_bandImageBundle;
    unsigned long long _libraryState;
    NTKGreenfieldDecodedRecipe *_selectedRecipe;
    ProductKitCatalog *_productKitCatalog;
}

@property (readonly, nonatomic) NSUUID *addedFaceID;
@property (weak, nonatomic) id<NTKGreenfieldB640WatchFacesManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)faceCollectionDidLoad:(id)a0;
- (void)decodeUrl:(id)a0 sourceApplicationBundleIdentifier:(id)a1;
- (void)handleDidExitGreenfieldB640Flow;
- (void)handleAddToMyFacesActionWithGreenfieldDecodedRecipe:(id)a0;
- (void)handleWatchFaceSelectedActionWithGreenfieldDecodedRecipe:(id)a0;
- (void)_startLibraryTimeoutTimer;
- (void)_cancelLibraryTimeoutTimer;
- (void)_libraryTimeoutTimerFired;
- (id)_analyticsExitScreenNameForCurrentState;
- (void)_setLibraryState:(unsigned long long)a0;
- (void)_handleProductKitUrl:(id)a0;
- (void)_handleB640WatchFaceManagerDidFinishWithError:(id)a0 decodedRecipes:(id)a1;
- (id)_bandAssetPathForCurrentPairedDevice:(id)a0;
- (void)_deocdeWatchFacesUrls:(id)a0;
- (void)_moveToDecodeStateCompletedIfPossible;
- (id)_analyticsModelForAddFaceEventsForWatchFace:(id)a0;

@end
