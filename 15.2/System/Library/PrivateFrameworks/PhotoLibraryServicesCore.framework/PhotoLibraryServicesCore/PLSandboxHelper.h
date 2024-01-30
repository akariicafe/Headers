@interface PLSandboxHelper : NSObject

+ (BOOL)processCanReadSandboxForPath:(id)a0;
+ (BOOL)processWithID:(int)a0 canWriteSandboxForPath:(id)a1;
+ (BOOL)processCanWriteSandboxForPath:(id)a0;
+ (BOOL)processWithID:(int)a0 canReadSandboxForPath:(id)a1;

@end
