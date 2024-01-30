@interface SFWebBookmarkCollection : WebBookmarkCollection

+ (BOOL)lockSync;
+ (void)unlockSyncAsynchronously;
+ (void)unlockSync;
+ (BOOL)isLockedSync;
+ (BOOL)isSyncAllowed;
+ (void)holdLockSync:(const void *)a0;
+ (void)unholdLockSync:(const void *)a0;

- (id)initWithConfiguration:(id)a0 checkIntegrity:(BOOL)a1;

@end
