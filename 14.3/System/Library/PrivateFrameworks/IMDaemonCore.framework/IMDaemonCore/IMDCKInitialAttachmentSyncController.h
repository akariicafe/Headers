@class CKServerChangeToken;

@interface IMDCKInitialAttachmentSyncController : IMDCKAttachmentSyncController

@property (retain, nonatomic) CKServerChangeToken *syncToken;

- (void)dealloc;
- (id)ckUtilities;
- (void)setLatestSyncToken:(id)a0 forSyncType:(id)a1;
- (BOOL)_deviceConditionsAllowsMessageSyncIgnoreFeatureEnabled:(BOOL)a0;
- (BOOL)_deviceConditionsAllowsMessageSync;
- (BOOL)_deviceConditionsAllowsMessageSyncForCurrentBatchCount:(long long)a0 maxBatchCount:(long long)a1;
- (BOOL)_kickOffWriteIfNeededForSyncType:(long long)a0 completion:(id /* block */)a1;
- (void)setLatestSyncToken:(id)a0;
- (id)latestSyncToken;

@end
