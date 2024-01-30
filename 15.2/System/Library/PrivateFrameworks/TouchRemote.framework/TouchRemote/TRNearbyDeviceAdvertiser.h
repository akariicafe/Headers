@class SFService, NSMapTable, NSObject;
@protocol OS_dispatch_queue, TRNearbyDeviceAdvertiserDelegate;

@interface TRNearbyDeviceAdvertiser : NSObject

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) SFService *service;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *advertiserQ;
@property unsigned long long requestedService;
@property (retain, nonatomic) NSMapTable *sessionsTable;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sessionsTableQ;
@property (weak) id<TRNearbyDeviceAdvertiserDelegate> delegate;

+ (void)initialize;

- (void)_handleInvalidation;
- (void)_handleInterruption;
- (void)stopAdvertising;
- (void).cxx_destruct;
- (id)init;
- (void)_handleRequestMessage:(id)a0;
- (void)_handleEventMessage:(id)a0;
- (void)_handleActivationWithError:(id)a0;
- (void)_requestSessionForMessage:(id)a0 withCallback:(id /* block */)a1;
- (void)_respondToRequest:(id)a0 withError:(id)a1;
- (void)_handleNewConnectionFromPeerDevice:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)startAdvertisingWithService:(unsigned long long)a0;
- (void)pauseAdvertising;
- (void)resumeAdvertising;

@end
