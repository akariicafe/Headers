@class NSString;

@interface IMPowerWifiUsageCollector : NSObject <CUTPowerMonitorDelegate, CUTWiFiManagerDelegate>

@property (readonly, nonatomic) BOOL shouldCollectInternalStats;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_noteWifiLinkDidChangeForInternalCollection:(BOOL)a0 isOnPower:(BOOL)a1;
- (BOOL)connectedToPowerAndWifiForOver20Hours;
- (void)reconnectedToBothResources_ExternalCollection;
- (id)init;
- (void)disconnectFromResourceForTotalDurationKey:(id)a0 dateKey:(id)a1 powerWifiDict:(id)a2;
- (id)todaysKey;
- (void)dealloc;
- (BOOL)_isWifiUsable;
- (void)cutPowerMonitorBatteryConnectedStateDidChange:(id)a0;
- (void)disconnectedFromAResource_ExternalCollection;
- (BOOL)_isOnPower;
- (void)clearConnectedToPowerWifiOver20Hours;
- (void)cutWiFiManagerLinkDidChange:(id)a0 context:(id)a1;
- (BOOL)_shouldWriteDownPowerWifiChanges;
- (void)_setExternalTotalDuration:(id)a0;
- (id)_getPowerAndWifiDictionaryForKey:(id)a0;
- (void)_notePowerDidChangeForInternalCollection:(BOOL)a0 isOnWifi:(BOOL)a1;
- (id)_getExternalLastConnectedDate;
- (id)createTodaysStatisticDictionaryIfNeeded;
- (void)updateConnectedToPowerWifiIntervalIfConnected;
- (void)_setExternalLastConnectedDate:(id)a0;
- (double)_getExternalTotalDuration;
- (void)reconnectToResourceForTotalDurationKey:(id)a0 dateKey:(id)a1 powerWifiDict:(id)a2;

@end
