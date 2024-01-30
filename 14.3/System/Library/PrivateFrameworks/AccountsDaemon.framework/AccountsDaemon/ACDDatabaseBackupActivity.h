@class ACDDatabase, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface ACDDatabaseBackupActivity : NSObject {
    BOOL _xpcActivityPending;
    NSObject<OS_xpc_object> *_activityExecutionCriteria;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) ACDDatabase *database;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)activityCriteria;
- (id)initWithDatabase:(id)a0;
- (void)scheduleBackupIfNonexistent;
- (void)_registerActivityIfNeededSchedulingBackup:(BOOL)a0;
- (void)_registerActivitySchedulingBackup:(BOOL)a0;
- (void)scheduleBackup;
- (void)registerActivityIfNeeded;

@end
