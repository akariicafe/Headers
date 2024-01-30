@class NSString, NSDictionary, SESDCKSession, NFApplet;
@protocol NFDigitalCarKeySessionDelegate, NFDigitalCarKeySessionPassthroughDelegate;

@interface NFDigitalCarKeySession : NFSession <NFContactlessPaymentSessionCallbacks, SESDCKSessionDelegate, SESDCKSessionPassthroughDelegate, NFSessionDelegate>

@property (nonatomic) BOOL fieldNotificationSent;
@property BOOL cardEmulationStarted;
@property (retain, nonatomic) NSDictionary *appletsById;
@property (retain, nonatomic) SESDCKSession *sesdSession;
@property (weak) id<NFDigitalCarKeySessionPassthroughDelegate> passthroughDelegate;
@property (weak) id<NFDigitalCarKeySessionDelegate> delegate;
@property (readonly) NFApplet *activeApplet;
@property (readonly) NSString *activeKey;
@property (readonly) NFApplet *defaultApplet;
@property (readonly, nonatomic) BOOL supportsSecureRanging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)vehicleReports:(id *)a0;
+ (id)getVehicleReports:(id *)a0;
+ (id)pauseRangingForReaderIdentifier:(id)a0 durationInSec:(id)a1;
+ (id)requestAssertionForKeyID:(id)a0 options:(id)a1 outError:(id *)a2;
+ (id)resumeRangingForReaderIdentifier:(id)a0;

- (void)endSession;
- (id)appletWithIdentifier:(id)a0;
- (id)allApplets;
- (id)setAuthorization:(id)a0;
- (void)didEndUnexpectedly;
- (id)init;
- (void).cxx_destruct;
- (id)activateWithToken:(id)a0;
- (id)cancelRKEFunction:(id)a0;
- (id)createSessionHandoffToken:(id *)a0;
- (void)endSessionWithCompletion:(id /* block */)a0;
- (void)sendRKEFunction:(id)a0 action:(id)a1 authorization:(id)a2 completion:(id /* block */)a3;
- (id)sendRKEFunction:(id)a0 rkeAction:(id)a1 authorization:(id)a2;
- (BOOL)setActiveApplet:(id)a0 key:(id)a1 outError:(id *)a2;
- (BOOL)startCardEmulationAuthorization:(id)a0 deferred:(BOOL)a1 error:(id *)a2;
- (BOOL)stopCardEmulation:(id *)a0;
- (void)didDetectField:(BOOL)a0;
- (id)_getAppletsFromNFCD;
- (void)didDetectFieldNotification:(id)a0;
- (void)didEndTransaction:(id)a0;
- (void)didExpireTransactionForApplet:(id)a0;
- (void)didExpressModeStateChange:(unsigned int)a0 withObject:(id)a1;
- (void)didFailDeferredAuthorization;
- (void)didFelicaStateChange:(id)a0;
- (void)didReceiveActivityTimeout:(id)a0;
- (void)didReceivePendingServerRequest;
- (void)didSelectApplet:(id)a0;
- (void)didStartSession:(id)a0;
- (void)didStartTransaction:(id)a0;
- (void)handleSessionResumed;
- (void)handleSessionSuspended:(id)a0;
- (void)releaseSesdSession;
- (BOOL)sendPassthroughMessage:(id)a0 error:(id *)a1;
- (void)sesSession:(id)a0 didReceivePassthroughMessage:(id)a1;
- (void)sesSession:(id)a0 event:(id)a1;

@end
