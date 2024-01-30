@class NSString;

@interface IMPowerWifiUsageCollector : NSObject <CUTPowerMonitorDelegate, CUTWiFiManagerDelegate>

@property (readonly, nonatomic) BOOL shouldCollectInternalStats;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_setExternalLastConnectedDate:(id)a0;
- (id)createTodaysStatisticDictionaryIfNeeded;
- (id)_getExternalLastConnectedDate;
- (BOOL)connectedToPowerAndWifiForOver20Hours;
- (void)reconnectedToBothResources_ExternalCollection;
- (id)_getPowerAndWifiDictionaryForKey:(id)a0;
- (void)cutPowerMonitorBatteryConnectedStateDidChange:(id)a0;
- (id)init;
- (BOOL)_isOnPower;
- (void)updateConnectedToPowerWifiIntervalIfConnected;
- (void)reconnectToResourceForTotalDurationKey:(id)a0 dateKey:(id)a1 powerWifiDict:(id)a2;
- (void)_setExternalTotalDuration:(id)a0;
- (id)todaysKey;
- (void)dealloc;
- (void)disconnectFromResourceForTotalDurationKey:(id)a0 dateKey:(id)a1 powerWifiDict:(id)a2;
- (void)_noteWifiLinkDidChangeForInternalCollection:(BOOL)a0 isOnPower:(BOOL)a1;
- (void)_notePowerDidChangeForInternalCollection:(BOOL)a0 isOnWifi:(BOOL)a1;
- (BOOL)_isWifiUsable;
- (BOOL)_shouldWriteDownPowerWifiChanges;
- (void)disconnectedFromAResource_ExternalCollection;
- (double)_getExternalTotalDuration;
- (void)clearConnectedToPowerWifiOver20Hours;
- (void)cutWiFiManagerLinkDidChange:(id)a0 context:(id)a1;

@end
