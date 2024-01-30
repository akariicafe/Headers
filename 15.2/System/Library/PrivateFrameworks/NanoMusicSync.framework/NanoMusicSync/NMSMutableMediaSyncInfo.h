@class NSMutableDictionary;

@interface NMSMutableMediaSyncInfo : NMSMediaSyncInfo {
    BOOL _needsUpdateAggregateInfo;
}

@property (retain, nonatomic) NSMutableDictionary *info;

- (void)_notifyInfoChanged;
- (id)_infoForItem:(id)a0;
- (void)setOverStorageLimitBehavior:(unsigned long long)a0 forContainer:(id)a1;
- (unsigned long long)status;
- (float)progressForContainer:(id)a0;
- (void)_writeInfo;
- (id)_infoForContainer:(id)a0;
- (void)setProgressBytes:(unsigned long long)a0 totalBytes:(unsigned long long)a1 forItem:(id)a2;
- (void)setItems:(id)a0 forContainer:(id)a1;
- (unsigned long long)statusForContainer:(id)a0;
- (void)setUserInfo:(id)a0 forContainer:(id)a1;
- (float)progress;
- (void)_updateAggregateInfoIfNeeded;
- (id)initWithTarget:(unsigned long long)a0;
- (unsigned long long)_persistingOptions;
- (void)setOverStorageLimit:(BOOL)a0 forItem:(id)a1;
- (void)synchronize;
- (void)setUserInfo:(id)a0 forItem:(id)a1;
- (id)_info;
- (void)setStatus:(unsigned long long)a0 forItem:(id)a1;
- (unsigned long long)playabilityForContainer:(id)a0;
- (BOOL)hasItemsOverStorageLimit;
- (BOOL)hasItemsOverStorageLimitForContainer:(id)a0;

@end
