@class NSString, PUPhotoSelectionManager, NSPredicate, PXSelectionCoordinator, NSOrderedSet, PHAssetCollection, PXLoadingStatusManager, NSPointerArray;
@protocol PXPhotosViewDelegate;

@interface PUSessionInfo : NSObject <PUPhotoSelectionManagerChangeObserver> {
    NSPointerArray *_observers;
}

@property (retain, nonatomic) PHAssetCollection *sourceAlbum;
@property (copy, nonatomic) NSOrderedSet *transferredAssets;
@property (retain, nonatomic) PUPhotoSelectionManager *photoSelectionManager;
@property (copy, nonatomic) NSString *localizedPrompt;
@property (nonatomic) long long promptLocation;
@property (copy, nonatomic) id /* block */ bannerGenerator;
@property (nonatomic) BOOL allowsMultipleSelection;
@property (weak, nonatomic) id<PXPhotosViewDelegate> photosViewDelegate;
@property (retain, nonatomic) PXLoadingStatusManager *loadingStatusManager;
@property (nonatomic) long long status;
@property (readonly, nonatomic, getter=isSelectingAssets) BOOL selectingAssets;
@property (readonly, nonatomic, getter=isSelectingTargetAlbum) BOOL selectingTargetAlbum;
@property (retain, nonatomic) PHAssetCollection *targetAlbum;
@property (retain, nonatomic) NSString *targetAlbumName;
@property (retain, nonatomic) NSPredicate *assetsFilterPredicate;
@property (nonatomic) unsigned long long assetTypesToInclude;
@property (nonatomic) BOOL wantsNumberedSelectionStyle;
@property (nonatomic) long long noContentPlaceholderType;
@property (nonatomic) BOOL showsFileSizePicker;
@property (nonatomic) BOOL allowsSwipeToSelect;
@property (nonatomic) BOOL excludesSharedAlbums;
@property (nonatomic) BOOL excludesHiddenAlbum;
@property (nonatomic) BOOL reverseSortOrder;
@property (nonatomic) long long contentStartingPosition;
@property (readonly, nonatomic) BOOL isForAssetPicker;
@property (readonly, nonatomic) BOOL isLimitedLibraryPicker;
@property (readonly, nonatomic) BOOL isForAlbumPicker;
@property (retain, nonatomic) PXSelectionCoordinator *selectionCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_enumerateObserversWithBlock:(id /* block */)a0;
- (void)addSessionInfoObserver:(id)a0;
- (BOOL)hasLocalTargetAlbum;
- (BOOL)hasTargetAlbum;
- (void)photoSelectionManagerSelectionDidChange:(id)a0;
- (void)removeSessionInfoObserver:(id)a0;

@end
