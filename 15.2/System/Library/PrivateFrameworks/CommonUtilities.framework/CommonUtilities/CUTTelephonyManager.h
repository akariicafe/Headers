@class NSMutableSet, NSRecursiveLock;

@interface CUTTelephonyManager : NSObject

@property (nonatomic) struct __CTServerConnection { } *_serverConnection;
@property (nonatomic) void *_suspendDormancyAssertion;
@property (nonatomic) BOOL registered;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSMutableSet *disableFastDormancyTokens;
@property (readonly, nonatomic) BOOL disableFastDormancy;

+ (id)sharedInstance;

- (void)removeFastDormancyDisableToken:(id)a0;
- (void)_adjustFastDormancyTokens;
- (void).cxx_destruct;
- (id)init;
- (void)addFastDormancyDisableToken:(id)a0;
- (void)_setFastDormancySuspended:(BOOL)a0;
- (void)__adjustFastDormancyTokens;
- (void)dealloc;

@end
