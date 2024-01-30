@class CKServerChangeToken;

@interface IMDCKInitialAttachmentSyncController : IMDCKAttachmentSyncController

@property (retain, nonatomic) CKServerChangeToken *syncToken;

- (id)ckUtilities;
- (void)dealloc;
- (void)setLatestSyncToken:(id)a0 forSyncType:(id)a1;
- (BOOL)_kickOffWriteIfNeededForSyncType:(long long)a0 activity:(id)a1 completion:(id /* block */)a2;
- (BOOL)_deviceConditionsAllowsMessageSyncForActivity:(id)a0 deviceConditionsToCheck:(unsigned long long)a1 currentBatchCount:(long long)a2 maxBatchCount:(long long)a3;
- (void)setLatestSyncToken:(id)a0;
- (id)latestSyncToken;
- (BOOL)_deviceConditionsAllowsMessageSyncForCurrentBatchCount:(long long)a0 maxBatchCount:(long long)a1;
- (BOOL)_deviceConditionsAllowsMessageSync;
- (BOOL)_deviceConditionsAllowsMessageSyncIgnoreFeatureEnabled:(BOOL)a0;

@end
