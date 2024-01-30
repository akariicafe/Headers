@interface PLSandboxHelper : NSObject

+ (BOOL)processCanWriteSandboxForPath:(id)a0;
+ (BOOL)processWithID:(int)a0 canWriteSandboxForPath:(id)a1;
+ (BOOL)processWithID:(int)a0 canReadSandboxForPath:(id)a1;
+ (BOOL)processCanReadSandboxForPath:(id)a0;

@end
