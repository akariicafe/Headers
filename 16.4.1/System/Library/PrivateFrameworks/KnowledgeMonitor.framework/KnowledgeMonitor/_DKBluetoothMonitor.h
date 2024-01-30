@class BMSource, NSMutableDictionary, NSDictionary, BMPruner, NSString, NSObject, NSLock;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _DKBluetoothMonitor : _DKMonitor <_DKNotificationReceiver, _DKHistoricalDeletingMonitor> {
    BMSource *_source;
    BOOL _enabled;
}

@property (retain, nonatomic) NSMutableDictionary *activeConnections;
@property (retain, nonatomic) NSMutableDictionary *inactiveConnections;
@property (retain, nonatomic) BMPruner *pruner;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *batteryLevelPollingQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *batteryLevelPollingTimer;
@property (retain) NSDictionary *batteryLevels;
@property (retain, nonatomic) NSLock *connectionUpdateLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ historicalDeletingHandler;

+ (id)eventStream;
+ (id)log;
+ (id)entitlements;
+ (int)BMDeviceBluetoothDeviceTypeFromBTDeviceType:(int)a0;
+ (id)_BMEventFromDKEvent:(id)a0 starting:(BOOL)a1;
+ (id)_eventWithState:(BOOL)a0 name:(id)a1 address:(id)a2 type:(int)a3 isAppleAudioDevice:(BOOL)a4 isUserWearing:(BOOL)a5 productID:(unsigned int)a6 accessoryBatteryLevels:(id)a7;
+ (id)audioProductsBatteryLevels;
+ (id)contextValueForBluetoothConnectionStatus:(BOOL)a0 name:(id)a1 address:(id)a2 deviceType:(int)a3 isAppleAudioDevice:(BOOL)a4 isUserWearing:(BOOL)a5 productID:(unsigned int)a6;

- (void)deactivate;
- (void)receiveNotificationEvent:(id)a0;
- (void)saveState;
- (id)loadState;
- (void)handleUnpairingEvent:(id)a0;
- (void)dealloc;
- (void)updateCurrentBatteryLevels;
- (void)stop;
- (id)init;
- (void)start;
- (void).cxx_destruct;
- (BOOL)_inEarStatusForDevice:(id)a0;

@end
