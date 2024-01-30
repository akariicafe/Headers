@class NSMutableDictionary, NSDictionary, NSString, NSObject, NSLock;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _DKBluetoothMonitor : _DKMonitor <_DKHistoricalDeletingMonitor>

@property (retain, nonatomic) NSMutableDictionary *activeConnections;
@property (retain, nonatomic) NSMutableDictionary *inactiveConnections;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *batteryLevelPollingQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *batteryLevelPollingTimer;
@property (retain) NSDictionary *batteryLevels;
@property (retain, nonatomic) NSLock *connectionUpdateLock;
@property (copy, nonatomic) id /* block */ historicalDeletingHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventStream;
+ (id)audioProductsBatteryLevels;
+ (id)entitlements;
+ (id)_eventWithState:(BOOL)a0 name:(id)a1 address:(id)a2 type:(int)a3 isAppleAudioDevice:(BOOL)a4 isUserWearing:(BOOL)a5 productID:(unsigned int)a6 accessoryBatteryLevels:(id)a7;
+ (id)contextValueForBluetoothConnectionStatus:(BOOL)a0 name:(id)a1 address:(id)a2 deviceType:(int)a3 isAppleAudioDevice:(BOOL)a4 isUserWearing:(BOOL)a5 productID:(unsigned int)a6;

- (void)saveState;
- (id)loadState;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_inEarStatusForDevice:(id)a0;
- (void)deactivate;
- (void)updateCurrentBatteryLevels;
- (void)dealloc;
- (void)stop;

@end
