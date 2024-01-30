@interface DMMigrationDeferredExitManager : NSObject

+ (id)_serialQueue;

- (void)_exitClean;
- (void)migrationDidStart;
- (void)migrationDidEnd;
- (void)deferExitWithConnection:(id)a0;
- (id)_deferralDuration;
- (void)cancelDeferredExitWithConnection:(id)a0;
- (void)_resetGlobalState;
- (BOOL)_isDeferringExit;

@end
