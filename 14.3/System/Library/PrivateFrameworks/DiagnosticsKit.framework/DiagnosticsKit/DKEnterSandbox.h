@interface DKEnterSandbox : NSObject

+ (id)_bundleId;
+ (id)_processName;
+ (char *)_getHomeDirectory;
+ (char *)_getTempDirectory;
+ (char *)_getCacheDirectory;
+ (char *)_getMainBundle;
+ (BOOL)defaultSandboxWithHelperAppPath:(const char *)a0;
+ (BOOL)sandboxWithSeatbeltAbsolutePath:(const char *)a0 helperAppPath:(const char *)a1;

@end
