@interface AMDMiscHelpers : NSObject

+ (void)AMDPerformCleanup;
+ (void)printInput:(id)a0 withRawData:(void *)a1 withType:(long long)a2 andSize:(int)a3;
+ (id)sortArrayElements:(id)a0 inDescendingOrder:(BOOL)a1 withComparisonKey:(id)a2 isKeyString:(BOOL)a3;
+ (id)logAndCreateError:(long long)a0 errorMessage:(id)a1;
+ (id)getCurrentEpochSeconds;
+ (BOOL)isValidDSID:(id)a0;
+ (BOOL)ensureDir:(id)a0 removeIfExists:(BOOL)a1;
+ (void)setAppStoreDirAttributes;
+ (BOOL)createOrMoveSymbolicLinkAtURL:(id)a0 toDestinationURL:(id)a1;
+ (void)AMDInitialize:(id)a0;

@end
