@class PHFetchResult, NSString, PHPhotoLibrary, PXUbiquitousKeyValueStoreValueAccessor, NSDate;

@interface PXForYouBadgeManager : PXObservable <PXMutableForYouBadgeManager, PXPhotoLibraryUIChangeObserver>

@property (class, readonly, nonatomic) PXUbiquitousKeyValueStoreValueAccessor *lastSeenBadgeDateAccessor;
@property (class, retain, nonatomic) NSDate *lastSeenBadgeDate;

@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;
@property (retain, nonatomic) PHFetchResult *memories;
@property (nonatomic) unsigned long long unreadSharedAlbumCount;
@property (nonatomic) unsigned long long unreadMemoriesCount;
@property (readonly, nonatomic) unsigned long long unreadBadgeCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateUnreadSharedAlbumsCount;
- (id)mutableChangeObject;
- (void)performChanges:(id /* block */)a0;
- (void)setUnreadBadgeCount:(unsigned long long)a0;
- (void)_didFinishPostingNotifications:(id)a0;
- (void)_stopListeningForChanges;
- (void)_updateUnreadBadgeCount;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (void)startListeningForChanges;
- (void)dealloc;

@end
