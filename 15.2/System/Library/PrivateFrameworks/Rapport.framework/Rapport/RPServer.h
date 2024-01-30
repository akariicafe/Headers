@class NSString, NSArray, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface RPServer : NSObject <NSSecureCoding, RPCompanionLinkXPCClientInterface, RPAuthenticatable> {
    BOOL _activateCalled;
    BOOL _changesPending;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int internalAuthFlags;
@property (copy, nonatomic) id /* block */ acceptHandler;
@property (nonatomic) unsigned long long controlFlags;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *serviceType;
@property (retain, nonatomic) NSArray *allowedMACAddresses;
@property (retain, nonatomic) NSArray *pairSetupACL;
@property (nonatomic) unsigned int pairSetupFlags;
@property (nonatomic) unsigned int pairVerifyFlags;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) int passwordType;
@property (readonly, nonatomic) int passwordTypeActual;
@property (copy, nonatomic) id /* block */ authCompletionHandler;
@property (copy, nonatomic) id /* block */ showPasswordHandler;
@property (copy, nonatomic) id /* block */ hidePasswordHandler;
@property (copy, nonatomic) id /* block */ promptForPasswordHandler;

- (void)_updateIfNeededWithBlock:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_activateWithReactivate:(BOOL)a0;
- (id)descriptionWithLevel:(int)a0;
- (id)description;
- (void)xpcServerAcceptSession:(id)a0 completion:(id /* block */)a1;
- (void)_ensureXPCStarted;
- (void)xpcServerHidePassword:(unsigned int)a0;
- (void).cxx_destruct;
- (void)activate;
- (id)init;
- (void)xpcServerShowPassword:(id)a0 flags:(unsigned int)a1;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (void)_update;
- (void)_interrupted;
- (void)_invalidated;
- (void)dealloc;
- (void)tryPassword:(id)a0;

@end
