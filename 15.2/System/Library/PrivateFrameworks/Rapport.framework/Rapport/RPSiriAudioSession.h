@class NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface RPSiriAudioSession : NSObject <NSSecureCoding> {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *sessionID;

- (void)encodeWithCoder:(id)a0;
- (void)activateWithCompletion:(id /* block */)a0;
- (id)description;
- (void)_ensureXPCStarted;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (void)_interrupted;
- (void)_invalidated;
- (void)dealloc;
- (void)_activateWithCompletion:(id /* block */)a0 reactivate:(BOOL)a1;
- (void)receivedSiriAudioEvent:(id)a0;

@end
