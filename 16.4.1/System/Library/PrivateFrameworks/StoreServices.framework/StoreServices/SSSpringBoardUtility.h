@interface SSSpringBoardUtility : NSObject

+ (id)_dispatchQueue;
+ (id)_applicationStateMonitor;
+ (id)_dispatchQueueNotifications;
+ (id)_dispatchQueueSpringBoard;
+ (id)_getApplicationInfoForIdentifier:(id)a0 key:(id)a1;
+ (BOOL)_getProcessID:(int *)a0 forApplicationIdentifier:(id)a1;
+ (void)_setApplicationState:(unsigned int)a0 forClientID:(id)a1;
+ (id)_stateCache;
+ (BOOL)launchApplicationWithIdentifier:(id)a0 options:(id)a1 error:(id *)a2;
+ (void)wakeAppUsingRequest:(id)a0;

@end
