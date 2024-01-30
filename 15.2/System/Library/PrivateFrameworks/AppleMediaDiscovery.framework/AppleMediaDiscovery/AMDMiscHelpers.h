@interface AMDMiscHelpers : NSObject

+ (void)showAlert:(id)a0;
+ (void)validateDSID:(id)a0 error:(id *)a1;
+ (BOOL)ensureDir:(id)a0 removeIfExists:(BOOL)a1;
+ (BOOL)createOrMoveSymbolicLinkAtURL:(id)a0 toDestinationURL:(id)a1;
+ (double)machGetClockSecs;
+ (void)printInput:(id)a0 withRawData:(void *)a1 withType:(long long)a2 andSize:(int)a3;

@end
