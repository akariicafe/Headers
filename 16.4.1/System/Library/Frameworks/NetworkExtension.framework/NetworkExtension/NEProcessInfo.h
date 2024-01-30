@interface NEProcessInfo : NSObject

+ (BOOL)is64bitCapable;
+ (id)copyUUIDsForBundleID:(id)a0 uid:(unsigned int)a1;
+ (void)clearUUIDCache;
+ (id)copyNEHelperUUIDs;
+ (id)copyUUIDsForExecutable:(id)a0;
+ (id)copyDNSUUIDs;

- (id)init;

@end
