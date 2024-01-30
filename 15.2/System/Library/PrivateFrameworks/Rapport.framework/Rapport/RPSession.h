@class NSString, RPEndpoint, NSArray, RPConnection, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface RPSession : NSObject <NSSecureCoding, RPCompanionLinkXPCClientInterface, RPAuthenticatable, RPMessageable> {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) RPConnection *cnx;
@property (copy, nonatomic) NSString *peerID;
@property (nonatomic) unsigned long long sessionID;
@property (nonatomic) unsigned long long startTicks;
@property (nonatomic) unsigned long long controlFlags;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) RPEndpoint *peerEndpoint;
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

- (void)encodeWithCoder:(id)a0;
- (void)activateWithCompletion:(id /* block */)a0;
- (id)descriptionWithLevel:(int)a0;
- (id)description;
- (void)_ensureXPCStarted;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)deregisterEventID:(id)a0;
- (void)sendEventID:(id)a0 event:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)deregisterRequestID:(id)a0;
- (void)sendRequestID:(id)a0 request:(id)a1 options:(id)a2 responseHandler:(id /* block */)a3;
- (void)registerRequestID:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)sendRequestID:(id)a0 request:(id)a1 destinationID:(id)a2 options:(id)a3 responseHandler:(id /* block */)a4;
- (void)invalidate;
- (void)registerEventID:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)sendEventID:(id)a0 event:(id)a1 destinationID:(id)a2 options:(id)a3 completion:(id /* block */)a4;
- (void)_interrupted;
- (void)_invalidated;
- (void)dealloc;
- (void)tryPassword:(id)a0;
- (void)_activateWithCompletion:(id /* block */)a0 reactivate:(BOOL)a1;

@end
