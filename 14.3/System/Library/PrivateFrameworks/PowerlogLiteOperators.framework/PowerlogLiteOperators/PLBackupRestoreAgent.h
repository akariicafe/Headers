@class MBManager;

@interface PLBackupRestoreAgent : PLAgent

@property (readonly) MBManager *backupRestoreManager;
@property (nonatomic) BOOL backupState;
@property (nonatomic) BOOL restoreState;

+ (void)load;
+ (id)defaults;
+ (id)entryEventPointDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;

- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)updateRestoreState;
- (void)didChangeEvent:(id)a0 toState:(BOOL)a1;
- (void)updateBackupState;
- (void)initOperatorDependancies;

@end
