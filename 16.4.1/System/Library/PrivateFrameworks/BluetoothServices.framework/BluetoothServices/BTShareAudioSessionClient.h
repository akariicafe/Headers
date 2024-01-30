@class NSObject, NSXPCConnection, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface BTShareAudioSessionClient : NSObject <NSSecureCoding> {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) int mode;
@property (copy, nonatomic) id /* block */ progressHandler;

- (void)encodeWithCoder:(id)a0;
- (void)_ensureXPCStarted;
- (id)initWithCoder:(id)a0;
- (void)_interrupted;
- (void)_activate:(BOOL)a0;
- (id)init;
- (void)activate;
- (void)invalidate;
- (void)_invalidated;
- (void).cxx_destruct;
- (void)shareAudioProgressEvent:(int)a0 info:(id)a1;
- (void)userConfirmed:(BOOL)a0;

@end
