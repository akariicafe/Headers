@class NSDictionary;

@interface NMSMediaSyncInfo : NSObject {
    int _notifyToken;
}

@property (retain, nonatomic) NSDictionary *info;
@property (readonly, nonatomic) unsigned long long target;

+ (id)_mediaSyncInfoDirectory;

- (id)_notificationName;
- (id)containers;
- (unsigned long long)status;
- (float)progressForContainer:(id)a0;
- (unsigned long long)statusForContainer:(id)a0;
- (float)progress;
- (id)initWithTarget:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)itemCount;
- (void)dealloc;
- (BOOL)_isValid;
- (unsigned long long)playabilityForContainer:(id)a0;
- (BOOL)hasItemsOverStorageLimit;
- (BOOL)hasItemsOverStorageLimitForContainer:(id)a0;
- (id)_targetIdentifier;
- (id)_initWithTarget:(unsigned long long)a0 readAndObserveChanges:(BOOL)a1;
- (void)_registerForInfoChanged;
- (void)_readInfo;
- (id)_syncInfoFilePath;
- (id)itemsForContainer:(id)a0;
- (unsigned long long)statusForItem:(id)a0;
- (float)progressForItem:(id)a0;
- (BOOL)isItemOverStorageLimit:(id)a0;
- (BOOL)hasDownloadableItemsWithinStorageLimitForContainer:(id)a0;
- (id)userInfoForContainer:(id)a0;
- (id)userInfoForItem:(id)a0;
- (BOOL)_hasItemsForContainer:(id)a0;
- (id)_preferencesApplicationID;
- (id)_preferencesInfoKey;
- (unsigned long long)numberOfItemsOverStorageLimitForContainer:(id)a0;

@end
