@class NSString, NSObject;
@protocol OS_os_transaction;

@interface PFLoggerBackendAdapter : NSObject <PFLoggerBackend> {
    _Atomic unsigned long long _pendingTransactionCount;
    NSObject<OS_os_transaction> *_transaction;
}

@property BOOL runningUnderDebugger;
@property (readonly, nonatomic) BOOL allowsConcurrentAccess;
@property (readonly, nonatomic) BOOL formatsMessage;
@property (readonly, nonatomic) BOOL outputsToDebuggerConsole;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)backendsFromUserDefaultsWithLogLevel:(int)a0;
+ (id)pathWithoutParametersFromString:(id)a0;
+ (long long)fileSizeMaxBytesFromString:(id)a0;
+ (long long)allFileSizeMaxBytesFromString:(id)a0;
+ (long long)parseByteSizeValueForKey:(id)a0 inString:(id)a1;

- (void)flushWithCompletionHandler:(id /* block */)a0;
- (void)beginTransaction;
- (void)logFromCodeLocation:(struct { char *x0; char *x1; char *x2; char *x3; void *x4; })a0 facility:(id)a1 subsystem:(id)a2 level:(int)a3 message:(id)a4 format:(id)a5 args:(char *)a6;
- (void)endTransaction;
- (void).cxx_destruct;
- (id)init;

@end
