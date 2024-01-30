@class NSString, IMDCKSyncController;

@interface IMDMessageHistoryCKChatSyncTask : NSObject <IMDMessageHistorySyncTask> {
    IMDCKSyncController *_ckSyncController;
}

@property (copy, nonatomic) id /* block */ syncTaskCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCKSyncController:(id)a0;
- (void)startSyncTask:(id /* block */)a0;
- (unsigned long long)syncTaskType;
- (void)_startICloudSyncWithActivity:(id)a0;

@end
