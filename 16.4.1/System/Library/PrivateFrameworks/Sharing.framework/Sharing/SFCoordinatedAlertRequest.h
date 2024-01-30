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
- (void)_ensureXPCStarted;
- (id)initWithCoder:(id)a0;
- (void)_interrupted;
- (void)dealloc;
- (id)init;
- (void)start;
- (void)invalidate;
- (void)_invalidate;
- (void)_invalidated;
- (void).cxx_destruct;
- (void)_timeoutFired;

@end
