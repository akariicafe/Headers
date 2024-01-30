@class NSString;

@interface IMPowerWifiUsageCollector : NSObject <CUTPowerMonitorDelegate, CUTWiFiManagerDelegate>

@property (readonly, nonatomic) BOOL shouldCollectInternalStats;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)_shouldWriteDownPowerWifiChanges;
- (void)_setExternalLastConnectedDate:(id)a0;
- (id)_getPowerAndWifiDictionaryForKey:(id)a0;
- (void)disconnectFromResourceForTotalDurationKey:(id)a0 dateKey:(id)a1 powerWifiDict:(id)a2;
- (void)reconnectedToBothResources_ExternalCollection;
- (BOOL)_isWifiUsable;
- (BOOL)connectedToPowerAndWifiForOver20Hours;
- (void)clearConnectedToPowerWifiOver20Hours;
- (void)_notePowerDidChangeForInternalCollection:(BOOL)a0 isOnWifi:(BOOL)a1;
- (void)disconnectedFromAResource_ExternalCollection;
- (void)_noteWifiLinkDidChangeForInternalCollection:(BOOL)a0 isOnPower:(BOOL)a1;
- (void)_setExternalTotalDuration:(id)a0;
- (void)dealloc;
- (id)createTodaysStatisticDictionaryIfNeeded;
- (void)cutWiFiManagerLinkDidChange:(id)a0 context:(id)a1;
- (double)_getExternalTotalDuration;
- (BOOL)_isOnPower;
- (id)init;
- (void)cutPowerMonitorBatteryConnectedStateDidChange:(id)a0;
- (id)todaysKey;
- (id)_getExternalLastConnectedDate;
- (void)reconnectToResourceForTotalDurationKey:(id)a0 dateKey:(id)a1 powerWifiDict:(id)a2;
- (void)updateConnectedToPowerWifiIntervalIfConnected;

@end
