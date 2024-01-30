@class ASProtocol, NSMutableDictionary, ASPolicyManager, ASTask, NSError, ASGetOptionsTask, NSString;

@interface ASTaskManager : DATaskManager <ASPolicyManagerDelegate>

@property (retain, nonatomic) ASPolicyManager *policyManager;
@property (retain, nonatomic) NSError *versionError;
@property (retain, nonatomic) NSMutableDictionary *taskIDToTask;
@property (weak, nonatomic) ASTask *modalGetOptionsTask;
@property (retain, nonatomic) ASGetOptionsTask *getOptionsTask;
@property (weak, nonatomic) ASTask *modalPolicyKeyUpdateTask;
@property (readonly, nonatomic) NSString *deviceID;
@property (readonly, nonatomic) NSString *policyKey;
@property (readonly, nonatomic) ASProtocol *protocol;
@property (retain, nonatomic) NSString *easProtocolVersion;

- (void)cancelTask:(id)a0;
- (id)stateString;
- (void)shutdown;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_version;
- (void)cancelTaskWithID:(int)a0;
- (void)cancelAllTasks;
- (BOOL)_hasTasksIndicatingARunningSync;
- (void)_populateVersionDescriptions;
- (BOOL)shouldCancelTaskDueToOnPowerFetchMode;
- (void)taskDidFinish:(id)a0;
- (void)taskEndModal:(id)a0;
- (BOOL)taskIsModal:(id)a0;
- (void)taskManagerDidAddTask:(id)a0;
- (void)taskManagerWillRemoveTask:(id)a0;
- (void)taskRequestModal:(id)a0;
- (void)_finishAllTasksWithError:(id)a0;
- (void)finishTask:(id)a0 withError:(id)a1;
- (void)getOptionsTask:(id)a0 completedWithStatus:(long long)a1 supportedCommands:(id)a2 supportedVersions:(id)a3 error:(id)a4;
- (id)initWithAccount:(id)a0 policyManager:(id)a1;
- (void)policyManagerFailedToUpdatePolicy:(id)a0;
- (void)policyManagerUpdatedPolicy:(id)a0;
- (void)requestEASVersionWithDelegateTask:(id)a0;
- (void)setEASProtocolVersion:(id)a0;
- (void)updatePolicyKeyWithDelegateTask:(id)a0;

@end
