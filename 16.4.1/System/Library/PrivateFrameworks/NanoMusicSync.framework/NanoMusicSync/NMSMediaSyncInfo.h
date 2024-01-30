@class NSDictionary;

@interface NMSMediaSyncInfo : NSObject {
    int _notifyToken;
}

@property (retain, nonatomic) NSDictionary *info;
@property (readonly, nonatomic, getter=_isValid) BOOL valid;
@property (readonly, nonatomic) unsigned long long target;

+ (id)_mediaSyncInfoDirectory;

- (id)containers;
- (unsigned long long)itemCount;
- (id)_notificationName;
- (BOOL)hasItemsOverStorageLimitForContainer:(id)a0;
- (id)initWithTarget:(unsigned long long)a0;
- (BOOL)hasItemsWaitingWithoutPauseReason;
- (unsigned long long)downloadPauseReason;
- (void)dealloc;
- (float)progressForContainer:(id)a0;
- (unsigned long long)downloadPauseReasonForContainer:(id)a0;
- (unsigned long long)statusForContainer:(id)a0;
- (BOOL)hasItemsOverStorageLimit;
- (float)progress;
- (unsigned long long)status;
- (void).cxx_destruct;
- (unsigned long long)playabilityForContainer:(id)a0;
- (id)_targetIdentifier;
- (BOOL)_hasItemsForContainer:(id)a0;
- (id)_identifiersWithKeepLocalStates:(id)a0 modelKind:(id)a1;
- (id)_initWithTarget:(unsigned long long)a0 readAndObserveChanges:(BOOL)a1;
- (id)_preferencesApplicationID;
- (id)_preferencesInfoKey;
- (void)_readInfo;
- (void)_registerForInfoChanged;
- (id)_syncInfoFilePath;
- (id)_syncInfoModelKindForMPModelKind:(id)a0;
- (id)allAlbums;
- (id)allPlaylists;
- (unsigned long long)downloadPauseReasonForItem:(id)a0;
- (BOOL)hasContainer:(id)a0;
- (BOOL)hasDownloadableItemsWithinStorageLimitForContainer:(id)a0;
- (BOOL)hasItem:(id)a0;
- (BOOL)hasItemsWaitingWithoutPauseReasonForContainer:(id)a0;
- (BOOL)isItemOverStorageLimit:(id)a0;
- (id)itemsForContainer:(id)a0;
- (id)keepLocalEnabledAlbums;
- (id)keepLocalEnabledPlaylists;
- (unsigned long long)numberOfItemsOverStorageLimitForContainer:(id)a0;
- (float)progressForItem:(id)a0;
- (unsigned long long)statusForItem:(id)a0;
- (id)userInfoForContainer:(id)a0;
- (id)userInfoForItem:(id)a0;

@end
