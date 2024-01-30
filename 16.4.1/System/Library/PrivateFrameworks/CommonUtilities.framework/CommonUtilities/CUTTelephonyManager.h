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
- (void)addFastDormancyDisableToken:(id)a0;
- (void)dealloc;
- (void)_adjustFastDormancyTokens;
- (void)_setFastDormancySuspended:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (void)__adjustFastDormancyTokens;

@end
