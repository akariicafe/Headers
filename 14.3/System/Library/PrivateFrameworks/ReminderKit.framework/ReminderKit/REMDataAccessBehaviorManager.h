@class REMXPCDaemonController;

@interface REMDataAccessBehaviorManager : NSObject

@property (retain, nonatomic) REMXPCDaemonController *daemonController;

- (BOOL)isBabySitterEnabled;
- (BOOL)_getBoolForKey:(id)a0 withDefaultValue:(BOOL)a1;
- (void)_crashDaemonWithMessage:(id)a0;
- (id)initWithDaemonController:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)enableBabySitter;
- (long long)_getIntegerForKey:(id)a0 withDefaultValue:(long long)a1;
- (void)applyChangeTrackingBehavior:(long long)a0;
- (void)unapplyChangeTrackingBehavior:(long long)a0;
- (void)_setBoolValue:(BOOL)a0 forBehaviorKey:(id)a1;
- (long long)changeTrackingBehaviors;
- (id)_debugPerformerWithReason:(id)a0 errorHandler:(id /* block */)a1;
- (void)disableBabySitter;
- (BOOL)isDataAccessEnabled;
- (void)_setIntegerValue:(long long)a0 forBehaviorKey:(id)a1;
- (void)enableDataAccess;
- (id)fetchStatusReportsWithError:(id *)a0;
- (void)disableDataAccess;

@end
