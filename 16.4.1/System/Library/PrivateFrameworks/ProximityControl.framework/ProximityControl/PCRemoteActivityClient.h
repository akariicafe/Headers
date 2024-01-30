@class NSObject;
@protocol OS_dispatch_queue, NSXPCProxyCreating;

@interface PCRemoteActivityClient : NSObject <NSSecureCoding, PCActivatable> {
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) id /* block */ activityDataUpdateHandler;
@property (retain, nonatomic) id<NSXPCProxyCreating> xpcCnx;
@property (copy, nonatomic) id /* block */ homeKitUpdateHandler;
@property (copy, nonatomic) id /* block */ mediaRemoteUpdateHandler;
@property (copy, nonatomic) id /* block */ uiWillDismissHandler;
@property (copy, nonatomic) id /* block */ updateHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ interruptionHandler;

- (void)encodeWithCoder:(id)a0;
- (void)activateWithCompletion:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)interrupted;
- (void)_xpcEnsureStopped;
- (void)_interrupted;
- (void)dealloc;
- (void)_xpcEnsureStarted;
- (id)init;
- (void)invalidate;
- (void)_invalidate;
- (void)_invalidated;
- (void).cxx_destruct;
- (void)userTappedCloseButton;
- (void)userTappedDisambiguationButton:(id)a0;
- (void)startObservingDeviceWithIdentifier:(id)a0;
- (void)startObservingMediaRemoteIdentifier:(id)a0;
- (void)stopObservingHomeKitIdentifier:(id)a0;
- (void)startObservingHomeKitIdentifier:(id)a0;
- (void)stopObservingAllDevices;
- (void)stopObservingDeviceWithIdentifier:(id)a0;
- (void)stopObservingMediaRemoteIdentifier:(id)a0;
- (void)updateHomeKitID:(id)a0 mediaRemoteID:(id)a1 withActivities:(id)a2 disambiguationContext:(id)a3;
- (void)updateHomeKitID:(id)a0 withActivities:(id)a1 disambiguationContext:(id)a2;
- (void)updateMediaRemoteID:(id)a0 withActivities:(id)a1 disambiguationContext:(id)a2;
- (id)userActivitySetFromData:(id)a0;

@end
