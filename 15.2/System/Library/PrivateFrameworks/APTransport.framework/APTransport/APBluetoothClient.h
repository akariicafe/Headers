@class NSMutableDictionary, NSDictionary, WPAirPlaySolo, NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, APBluetoothClientDelegate;

@interface APBluetoothClient : NSObject <WPAirPlaySoloDelegate> {
    id<APBluetoothClientDelegate> _delegate;
}

@property (nonatomic) BOOL isFirstCycle;
@property (nonatomic) BOOL isSourcePresenceAdvertising;
@property (nonatomic) BOOL isStartAdvertisingPending;
@property (nonatomic) BOOL isStopAdvertisingPending;
@property (retain, nonatomic) NSMutableDictionary *nearbyDevices;
@property (nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) NSDictionary *sourcePresenceAdvertisingData;
@property (nonatomic) NSObject<OS_dispatch_source> *sourcePresenceAdvertisingTimer;
@property (nonatomic) NSObject<OS_dispatch_source> *sourcePresenceWaitingTimer;
@property (retain, nonatomic) WPAirPlaySolo *wpAirPlaySolo;
@property (readonly) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)startSourcePresenceWaitingCycle;
- (void)stopConnectionlessAdvertising;
- (void)startConnectionlessAdvertisingWithData:(id)a0;
- (void)stopSourcePresenceAdvertisingCycle;
- (void)startTrackingPeer:(id)a0 withData:(id)a1;
- (void)airPlaySolo:(id)a0 didLosePeer:(id)a1 withData:(id)a2;
- (void)airPlaySolo:(id)a0 failedToStartAdvertisingWithError:(id)a1;
- (void)stopSourcePresenceConnectionlessAdvertising;
- (void)airPlaySoloDidUpdateState:(id)a0;
- (void)setDelegate:(id)a0;
- (void)airPlaySolo:(id)a0 didStartTrackingPeer:(id)a1 withData:(id)a2 error:(id)a3;
- (void)stopSourcePresenceWaitingCycle;
- (void)stopTrackingPeer:(id)a0 withData:(id)a1;
- (void)airPlaySoloAdvertisingPending:(id)a0;
- (id)init;
- (id)delegate;
- (void)airPlaySoloStoppedAdvertising:(id)a0;
- (void)airPlaySoloStoppedScanning:(id)a0;
- (void)airPlaySolo:(id)a0 didStopTrackingPeer:(id)a1 withData:(id)a2;
- (void)airPlaySoloStartedScanning:(id)a0;
- (void)startConnectionlessScanningWithData:(id)a0;
- (void)startSourcePresenceConnectionlessAdvertising;
- (void)stopConnectionlessScanningWithData:(id)a0;
- (void)airPlaySolo:(id)a0 foundDevice:(id)a1 withData:(id)a2;
- (void)startSourcePresenceAdvertisingCycle;
- (void)dealloc;
- (void)airPlaySolo:(id)a0 failedToStartScanningWithError:(id)a1;
- (void)airPlaySoloStartedAdvertising:(id)a0;

@end
