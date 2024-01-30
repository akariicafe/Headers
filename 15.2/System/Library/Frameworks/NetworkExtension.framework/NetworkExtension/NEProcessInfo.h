@interface NEProcessInfo : NSObject

+ (void)clearUUIDCache;
+ (id)copyUUIDForSingleArch:(int)a0;
+ (id)copyDNSUUIDs;
+ (BOOL)is64bitCapable;
+ (id)copyUUIDsForExecutable:(id)a0;
+ (id)copyUUIDsForBundleID:(id)a0 uid:(unsigned int)a1;
+ (id)copyNEHelperUUIDs;
+ (id)copyUUIDsFromExecutable:(const char *)a0;
+ (void)initGlobals;
+ (id)copyUUIDsForFatBinary:(int)a0;

- (id)init;

@end
