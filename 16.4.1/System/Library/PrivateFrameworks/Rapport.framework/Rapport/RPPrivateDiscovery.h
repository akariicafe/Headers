@class NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface RPPrivateDiscovery : NSObject <NSSecureCoding, RPPrivateDiscoveryXPCClientInterface> {
    BOOL _activateCalled;
    BOOL _changesPending;
    BOOL _direct;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int clientID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ endpointFoundHandler;
@property (copy, nonatomic) id /* block */ endpointLostHandler;
@property (copy, nonatomic) id /* block */ endpointChangedHandler;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *serviceType;

- (void)encodeWithCoder:(id)a0;
- (void)_ensureXPCStarted;
- (id)initWithCoder:(id)a0;
- (void)_updateIfNeededWithBlock:(id /* block */)a0;
- (void)_update;
- (void)_invalidateDirect;
- (void)_interrupted;
- (void)dealloc;
- (id)init;
- (void)activate;
- (id)description;
- (void)invalidate;
- (void)_invalidated;
- (void).cxx_destruct;
- (void)_activateDirect;
- (void)_activateXPC:(BOOL)a0;
- (void)xpcPrivateDiscoveryEndpointChanged:(id)a0;
- (void)xpcPrivateDiscoveryEndpointFound:(id)a0;
- (void)xpcPrivateDiscoveryEndpointLost:(id)a0;

@end
