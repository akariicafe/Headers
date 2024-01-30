@class MBManager;

@interface PLBackupRestoreAgent : PLAgent

@property (readonly) MBManager *backupRestoreManager;
@property (nonatomic) BOOL backupState;
@property (nonatomic) BOOL restoreState;

+ (id)entryEventBackwardDefinitions;
+ (id)defaults;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitions;
+ (void)load;

- (void)updateRestoreState;
- (void)log;
- (void)didChangeEvent:(id)a0 toState:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)updateBackupState;
- (void)initOperatorDependancies;

@end
