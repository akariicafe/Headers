@class NSDate, RPCompanionLinkDevice, NSArray, NSString, NSMutableDictionary, RPCompanionLinkClient, NSObject, NSMapTable;
@protocol OS_dispatch_queue, OS_dispatch_source, ANRapportConnectionDelegate;

@interface ANRapportConnection : NSObject <ANRapportConnectionProvider>

@property (retain, nonatomic) RPCompanionLinkClient *companionLinkClient;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *rapportQueue;
@property (retain) NSMutableDictionary *clients;
@property (retain) NSArray *activeDevices;
@property (retain) NSDate *lastScanStartTimestamp;
@property (readonly, nonatomic) NSMapTable *deviceDelegatesToQueues;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) BOOL isTimerSuspended;
@property (weak, nonatomic) id<ANRapportConnectionDelegate> delegate;
@property (readonly, nonatomic) RPCompanionLinkDevice *localDevice;
@property (readonly, nonatomic) NSArray *devices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedConnection;

- (void)_registerMessageRequestHandler;
- (void)_sendHomeLocationStatusRequestToDevice:(id)a0 handler:(id /* block */)a1;
- (void)_handleLinkInvalidation;
- (void)_registerHomeLocationStatusRequestHandler;
- (void)_handleTimerExpired;
- (void)registerDailyRequest:(id /* block */)a0;
- (void)_linkForDevice:(id)a0 handler:(id /* block */)a1;
- (void)_sendDailyRequest:(id)a0 handler:(id /* block */)a1;
- (void)_tearDownLink;
- (double)_remainingScanTimeInterval;
- (void)_incrementMessageCountForCompanionLinkClient:(id)a0;
- (void)_setupLink:(id /* block */)a0;
- (void)activateLinkWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)sendDailyRequest:(id)a0 handler:(id /* block */)a1;
- (void)sendHomeLocationStatusRequestToDevice:(id)a0 handler:(id /* block */)a1;
- (void)_simulateDeliveryFailureForMessage:(id)a0;
- (id)activateLinkWithOptions:(unsigned long long)a0;
- (void)_sendMessage:(id)a0 linkClient:(id)a1 handler:(id /* block */)a2;
- (void)_notifyDeviceDelegatesConnectionDidFindDevice:(id)a0;
- (void)_decrementMessageCountForCompanionLinkClient:(id)a0;
- (void)_executeBlockForDelegates:(id /* block */)a0;
- (void)deactivateLinkWithOptions:(unsigned long long)a0;
- (BOOL)_needsScan;
- (void)_startTimer;
- (void)_updateDevices;
- (id)init;
- (void)_notifyDeviceDelegatesConnectionDidLoseDevice:(id)a0;
- (void)_cancelTimer;
- (id)sendMessage:(id)a0 device:(id)a1 responseHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)addDeviceDelegate:(id)a0 queue:(id)a1;
- (void)_registerHandlers;

@end
