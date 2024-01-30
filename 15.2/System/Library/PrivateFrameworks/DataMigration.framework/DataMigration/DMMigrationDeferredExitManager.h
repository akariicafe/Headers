@interface DMMigrationDeferredExitManager : NSObject

+ (id)_serialQueue;

- (void)_exitClean;
- (id)_deferralDuration;
- (void)migrationDidStart;
- (void)migrationDidEnd;
- (void)deferExitWithConnection:(id)a0;
- (void)cancelDeferredExitWithConnection:(id)a0;
- (void)_resetGlobalState;
- (BOOL)_isDeferringExit;

@end
