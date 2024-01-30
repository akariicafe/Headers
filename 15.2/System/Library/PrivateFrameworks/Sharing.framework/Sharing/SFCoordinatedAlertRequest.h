@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFCoordinatedAlertRequest : NSObject <NSSecureCoding, SFXPCInterface> {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _started;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (nonatomic) double timeout;
@property (nonatomic) long long type;

- (void)_start;
- (void)encodeWithCoder:(id)a0;
- (void)_invalidate;
- (void)_timeoutFired;
- (void)_ensureXPCStarted;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (void)_interrupted;
- (void)_invalidated;
- (void)dealloc;

@end
