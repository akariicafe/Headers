@class ACDDatabase, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface ACDDatabaseBackupActivity : NSObject {
    BOOL _xpcActivityPending;
    NSObject<OS_xpc_object> *_activityExecutionCriteria;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) ACDDatabase *database;

+ (id)new;

- (id)initWithDatabase:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)activityCriteria;
- (void)scheduleBackupIfNonexistent;
- (void)_registerActivityIfNeededSchedulingBackup:(BOOL)a0;
- (void)_registerActivitySchedulingBackup:(BOOL)a0;
- (void)scheduleBackup;
- (void)registerActivityIfNeeded;

@end
