@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface SFShareAudioSessionClient : NSObject <NSSecureCoding> {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ progressHandler;

- (void)_ensureXPCStarted;
- (id)init;
- (void).cxx_destruct;
- (void)shareAudioProgressEvent:(int)a0 info:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)_invalidated;
- (void)activate;
- (void)_activate:(BOOL)a0;
- (void)userConfirmed;
- (void)_interrupted;
- (void)invalidate;
- (void)encodeWithCoder:(id)a0;

@end
