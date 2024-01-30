@class NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, RPSiriAudioSessionDelegate;

@interface RPSiriAudioSession : NSObject <RPSiriAudioXPCClientInterface, NSSecureCoding> {
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
@property (retain, nonatomic) id<RPSiriAudioSessionDelegate> delegate;

- (void)encodeWithCoder:(id)a0;
- (void)_ensureXPCStarted;
- (void)activateWithCompletion:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (void)_interrupted;
- (void)dealloc;
- (id)init;
- (id)description;
- (void)invalidate;
- (void)_invalidated;
- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)a0 reactivate:(BOOL)a1;
- (void)receivedSiriAudioEvent:(id)a0;
- (void)xpcSiriStopClientRecordingWithDeviceId:(id)a0;

@end
