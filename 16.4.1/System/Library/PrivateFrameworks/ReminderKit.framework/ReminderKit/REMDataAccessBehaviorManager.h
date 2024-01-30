@class REMXPCDaemonController;

@interface REMDataAccessBehaviorManager : NSObject

@property (retain, nonatomic) REMXPCDaemonController *daemonController;

- (id)initWithDaemonController:(id)a0;
- (BOOL)isDataAccessEnabled;
- (BOOL)isBabySitterEnabled;
- (void)disableDataAccess;
- (id)fetchStatusReportsWithError:(id *)a0;
- (void)enableBabySitter;
- (BOOL)_getBoolForKey:(id)a0 withDefaultValue:(BOOL)a1;
- (void)enableDataAccess;
- (long long)changeTrackingBehaviors;
- (void)_setIntegerValue:(long long)a0 forBehaviorKey:(id)a1;
- (void)_crashDaemonWithMessage:(id)a0;
- (id)_debugPerformerWithReason:(id)a0 errorHandler:(id /* block */)a1;
- (void)disableBabySitter;
- (long long)_getIntegerForKey:(id)a0 withDefaultValue:(long long)a1;
- (id)init;
- (void)applyChangeTrackingBehavior:(long long)a0;
- (void).cxx_destruct;
- (void)unapplyChangeTrackingBehavior:(long long)a0;
- (void)_setBoolValue:(BOOL)a0 forBehaviorKey:(id)a1;

@end
