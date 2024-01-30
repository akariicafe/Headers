@interface SSSpringBoardUtility : NSObject

+ (id)_dispatchQueue;
+ (void)wakeAppUsingRequest:(id)a0;
+ (id)_applicationStateMonitor;
+ (id)_dispatchQueueSpringBoard;
+ (BOOL)launchApplicationWithIdentifier:(id)a0 options:(id)a1 error:(id *)a2;
+ (BOOL)_getProcessID:(int *)a0 forApplicationIdentifier:(id)a1;
+ (id)_stateCache;
+ (void)_setApplicationState:(unsigned int)a0 forClientID:(id)a1;
+ (id)_getApplicationInfoForIdentifier:(id)a0 key:(id)a1;
+ (id)_dispatchQueueNotifications;

@end
