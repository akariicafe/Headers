@interface NEProcessInfo : NSObject

+ (id)copyUUIDsFromExecutable:(const char *)a0;
+ (void)initGlobals;
+ (void)clearUUIDCache;
+ (id)copyDNSUUIDs;
+ (id)copyUUIDsForExecutable:(id)a0;
+ (id)copyUUIDsForFatBinary:(int)a0;
+ (id)copyNEHelperUUIDs;
+ (id)copyUUIDForSingleArch:(int)a0;
+ (id)copyUUIDsForBundleID:(id)a0 uid:(unsigned int)a1;
+ (BOOL)is64bitCapable;

- (id)init;

@end
