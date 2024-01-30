@class NSMutableDictionary;

@interface NMSMutableMediaSyncInfo : NMSMediaSyncInfo {
    BOOL _needsUpdateAggregateInfo;
}

@property (retain, nonatomic) NSMutableDictionary *info;

- (id)initWithTarget:(unsigned long long)a0;
- (void)_writeInfo;
- (void)setProgressBytes:(unsigned long long)a0 totalBytes:(unsigned long long)a1 forItem:(id)a2;
- (void)setOverStorageLimit:(BOOL)a0 forItem:(id)a1;
- (void)setUserInfo:(id)a0 forContainer:(id)a1;
- (void)setStatus:(unsigned long long)a0 forItem:(id)a1;
- (id)_infoForContainer:(id)a0;
- (BOOL)hasItemsOverStorageLimitForContainer:(id)a0;
- (void)synchronize;
- (void)_updateAggregateInfoIfNeeded;
- (float)progress;
- (id)_info;
- (unsigned long long)statusForContainer:(id)a0;
- (id)_infoForItem:(id)a0;
- (void)setItems:(id)a0 forContainer:(id)a1;
- (void)setUserInfo:(id)a0 forItem:(id)a1;
- (unsigned long long)status;
- (void)_notifyInfoChanged;
- (unsigned long long)playabilityForContainer:(id)a0;
- (void)setOverStorageLimitBehavior:(unsigned long long)a0 forContainer:(id)a1;
- (unsigned long long)_persistingOptions;
- (BOOL)hasItemsOverStorageLimit;
- (float)progressForContainer:(id)a0;

@end
