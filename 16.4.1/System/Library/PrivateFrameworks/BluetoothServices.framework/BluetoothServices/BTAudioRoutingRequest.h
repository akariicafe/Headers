@class NSXPCListenerEndpoint, NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface BTAudioRoutingRequest : NSObject <NSSecureCoding> {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int clientID;
@property (retain, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint;
@property (nonatomic) int audioScore;
@property (copy, nonatomic) NSString *deviceAddress;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned int flags;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void)encodeWithCoder:(id)a0;
- (void)_ensureXPCStarted;
- (id)initWithCoder:(id)a0;
- (void)_activate;
- (void)_interrupted;
- (id)init;
- (void)_reportError:(id)a0;
- (void)activate;
- (id)description;
- (void)invalidate;
- (void)_invalidated;
- (void).cxx_destruct;

@end
