@class NSMutableDictionary;

@interface NMSMutableMediaSyncInfo : NMSMediaSyncInfo {
    BOOL _needsUpdateAggregateInfo;
}

@property (retain, nonatomic) NSMutableDictionary *info;

+ (id)requiredUserInfoPropertiesForModelKind:(id)a0;

- (void)synchronize;
- (BOOL)hasItemsOverStorageLimitForContainer:(id)a0;
- (void)setUserInfo:(id)a0 forItem:(id)a1;
- (id)initWithTarget:(unsigned long long)a0;
- (void)setUserInfoForModelObject:(id)a0 manuallyPinned:(BOOL)a1;
- (BOOL)hasItemsWaitingWithoutPauseReason;
- (void)_updateAggregateInfoIfNeeded;
- (unsigned long long)downloadPauseReason;
- (void)_writeInfo;
- (void)setUserInfo:(id)a0 forContainer:(id)a1;
- (float)progressForContainer:(id)a0;
- (void)setOverStorageLimitBehavior:(unsigned long long)a0 forContainer:(id)a1;
- (unsigned long long)_persistingOptions;
- (void)setOverStorageLimit:(BOOL)a0 forItem:(id)a1;
- (id)_info;
- (void)setDownloadPauseReason:(unsigned long long)a0 forItem:(id)a1;
- (void)setProgressBytes:(unsigned long long)a0 totalBytes:(unsigned long long)a1 forItem:(id)a2;
- (void)setStatus:(unsigned long long)a0 forItem:(id)a1;
- (id)_infoForItem:(id)a0;
- (unsigned long long)downloadPauseReasonForContainer:(id)a0;
- (unsigned long long)statusForContainer:(id)a0;
- (BOOL)hasItemsOverStorageLimit;
- (float)progress;
- (id)_infoForContainer:(id)a0;
- (unsigned long long)status;
- (void)setItems:(id)a0 forContainer:(id)a1;
- (void)_notifyInfoChanged;
- (unsigned long long)playabilityForContainer:(id)a0;

@end
