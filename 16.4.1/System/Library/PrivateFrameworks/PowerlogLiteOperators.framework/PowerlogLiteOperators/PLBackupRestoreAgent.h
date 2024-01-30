@class MBManager;

@interface PLBackupRestoreAgent : PLAgent

@property (readonly) MBManager *backupRestoreManager;
@property (nonatomic) BOOL backupState;
@property (nonatomic) BOOL restoreState;

+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)defaults;
+ (void)load;
+ (id)entryAggregateDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;

- (void)initOperatorDependancies;
- (void)log;
- (void)didChangeEvent:(id)a0 toState:(BOOL)a1;
- (id)init;
- (void)updateRestoreState;
- (void).cxx_destruct;
- (void)updateBackupState;

@end
