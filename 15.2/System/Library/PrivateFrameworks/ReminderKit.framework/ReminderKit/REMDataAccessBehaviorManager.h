@class REMXPCDaemonController;

@interface REMDataAccessBehaviorManager : NSObject

@property (retain, nonatomic) REMXPCDaemonController *daemonController;

- (void)unapplyChangeTrackingBehavior:(long long)a0;
- (BOOL)_getBoolForKey:(id)a0 withDefaultValue:(BOOL)a1;
- (void)_setBoolValue:(BOOL)a0 forBehaviorKey:(id)a1;
- (id)initWithDaemonController:(id)a0;
- (void)_setIntegerValue:(long long)a0 forBehaviorKey:(id)a1;
- (id)_debugPerformerWithReason:(id)a0 errorHandler:(id /* block */)a1;
- (void)disableDataAccess;
- (void)enableDataAccess;
- (BOOL)isDataAccessEnabled;
- (void)enableBabySitter;
- (void)_crashDaemonWithMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (long long)changeTrackingBehaviors;
- (void)applyChangeTrackingBehavior:(long long)a0;
- (BOOL)isBabySitterEnabled;
- (long long)_getIntegerForKey:(id)a0 withDefaultValue:(long long)a1;
- (id)fetchStatusReportsWithError:(id *)a0;
- (void)disableBabySitter;

@end
