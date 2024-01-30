@class CKServerChangeToken;

@interface IMDCKInitialMessageSyncController : IMDCKMessageSyncController

@property (retain, nonatomic) CKServerChangeToken *syncToken;

- (void)dealloc;
- (id)ckUtilities;
- (void)setLatestSyncToken:(id)a0 forSyncType:(id)a1;
- (BOOL)_deviceConditionsAllowsMessageSyncForCurrentBatchCount:(long long)a0 maxBatchCount:(long long)a1;
- (BOOL)_kickOffWriteIfNeededForSyncType:(long long)a0 completion:(id /* block */)a1;
- (BOOL)_deviceConditionsAllowsMessageSyncForActivity:(id)a0 deviceConditionsToCheck:(unsigned long long)a1 currentBatchCount:(long long)a2 maxBatchCount:(long long)a3;
- (void)setLatestSyncToken:(id)a0;
- (id)latestSyncToken;
- (void)syncMessagesWithSyncType:(long long)a0 deviceConditionsToCheck:(unsigned long long)a1 activity:(id)a2 completionBlock:(id /* block */)a3;

@end
