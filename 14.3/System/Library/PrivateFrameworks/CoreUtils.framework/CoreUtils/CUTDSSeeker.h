@class NSString, NSXPCConnection, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface CUTDSSeeker : NSObject <CUTDSXPCClientInterface, NSSecureCoding> {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableSet *endpoints;
@property (nonatomic) unsigned long long tdsHashProvide;
@property (nonatomic) unsigned long long tdsHashSeek;
@property (nonatomic) int dataLinkType;
@property (nonatomic) BOOL directedOnly;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ endpointFoundHandler;
@property (copy, nonatomic) id /* block */ endpointLostHandler;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) BOOL passive;
@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) NSString *xpcServiceName;

- (void)_ensureXPCStarted;
- (id)init;
- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)_invalidated;
- (void)xpcTDSProviderStateChanged:(unsigned int)a0;
- (void)xpcTDSSeekerEndpointFound:(id)a0;
- (void)xpcTDSSeekerEndpointLost:(id)a0;
- (void)updateEndpointsForDevices:(id)a0;
- (void)_activateDirectWithCompletion:(id /* block */)a0;
- (void)_activateXPCWithCompletion:(id /* block */)a0 reactivate:(BOOL)a1;
- (void)_invalidate;
- (void)_interrupted;
- (void)invalidate;
- (void)encodeWithCoder:(id)a0;

@end
