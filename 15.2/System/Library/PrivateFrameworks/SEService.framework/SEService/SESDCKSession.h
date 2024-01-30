@class NSString, NSDictionary, NSObject;
@protocol OS_dispatch_queue, SESDCKSessionDelegate, SESDCKSessionPassthroughDelegate;

@interface SESDCKSession : NSObject <SESSessionPrivate, SESDCKSessionCallbacks, SESSession>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sessionQueue;
@property (copy, nonatomic) id /* block */ startCallback;
@property (weak, nonatomic) id<SESDCKSessionDelegate> delegate;
@property (weak, nonatomic) id<SESDCKSessionPassthroughDelegate> passthroughDelegate;
@property (readonly, nonatomic) NSString *aid;
@property (readonly, nonatomic) NSString *activeKeyIdentifier;
@property (readonly, nonatomic) BOOL supportsSecureRanging;
@property (readonly) NSDictionary *vehicleState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long state;

+ (id)getVehicleReports:(id *)a0;
+ (id)pauseRangingForReaderIdentifier:(id)a0 durationInSec:(id)a1;
+ (id)resumeRangingForReaderIdentifier:(id)a0;

- (void)sendEvent:(id)a0;
- (void)endSession;
- (id)setAuthorization:(id)a0;
- (void)startSession;
- (void).cxx_destruct;
- (id)init;
- (id)setActiveKey:(id)a0;
- (id)cancelRKEFunction:(id)a0;
- (void)dealloc;
- (id)sendRKEFunction:(id)a0 action:(id)a1 authorization:(id)a2;
- (id)disableBluetooth:(BOOL)a0;
- (BOOL)sendPassthroughMessage:(id)a0 error:(id *)a1;
- (BOOL)sendSignedPassthroughMessage:(id)a0 authorization:(id)a1 reply:(id /* block */)a2;
- (BOOL)sendPassthroughMessage:(id)a0 reply:(id /* block */)a1;
- (BOOL)getSignedMessage:(id)a0 authorization:(id)a1 reply:(id /* block */)a2;
- (id)setSecureElementToken:(id)a0;
- (void)didReceivePassthroughMessage:(id)a0;
- (id)endRemoteSession;
- (void)didEndWithError:(id)a0;
- (id)sendRKEAction:(unsigned long long)a0 authorization:(id)a1;
- (id)getRKEActionsInProgress;
- (id)cancelRKEAction:(unsigned long long)a0;

@end
