@class CDDebug, CDDXPCConnection;

@interface CDDClientConnection : NSObject

@property (readonly) CDDebug *debug;
@property (readonly) unsigned long long clientId;
@property (readonly) CDDXPCConnection *connection;

- (BOOL)attributeId:(unsigned long long)a0 attributeName:(id)a1 admissionCheckOfValue:(id)a2 admissionCheckType:(int)a3 attributeType:(int)a4 options:(id)a5 error:(id *)a6 replyHandler:(id /* block */)a7;
- (BOOL)attributeId:(unsigned long long)a0 attributeName:(id)a1 occurredWithValue:(id)a2 cost:(long long)a3 onDate:(id)a4 risingEdge:(BOOL)a5 fallingEdge:(BOOL)a6 type:(int)a7 error:(id *)a8 replyHandler:(id /* block */)a9;
- (BOOL)attributeId:(unsigned long long)a0 attributeName:(id)a1 repeatedStatistic:(int)a2 forHistoryWindow:(id)a3 deviceIdentifier:(id)a4 error:(id *)a5 replyHandler:(id /* block */)a6;
- (BOOL)attributeId:(unsigned long long)a0 attributeName:(id)a1 admissionCheckOfValue:(id)a2 admissionCheckType:(int)a3 attributeType:(int)a4 options:(id)a5 cost:(long long)a6 onDate:(id)a7 risingEdge:(BOOL)a8 fallingEdge:(BOOL)a9 error:(id *)a10 replyHandler:(id /* block */)a11;
- (BOOL)attributeId:(unsigned long long)a0 attributeName:(id)a1 meteredWithValue:(id)a2 costDictionary:(id)a3 onDate:(id)a4 risingEdge:(BOOL)a5 fallingEdge:(BOOL)a6 type:(int)a7 meterToken:(unsigned long long)a8 error:(id *)a9 replyHandler:(id /* block */)a10;
- (BOOL)attributeId:(unsigned long long)a0 attributeName:(id)a1 historyOfValue:(id)a2 forWindow:(id)a3 filter:(long long)a4 maximumElements:(unsigned long long)a5 error:(id *)a6 replyHandler:(id /* block */)a7;
- (BOOL)requestStatisticFromDevice:(unsigned int)a0 attributeId:(unsigned long long)a1 attributeName:(id)a2 statistic:(int)a3 historyWindow:(id)a4 error:(id *)a5 replyHandler:(id /* block */)a6;
- (BOOL)requestForecastFromDevice:(unsigned int)a0 attributeId:(unsigned long long)a1 attributeName:(id)a2 value:(id)a3 historyWindow:(id)a4 format:(long long)a5 error:(id *)a6 replyHandler:(id /* block */)a7;
- (BOOL)forecastAttributeId:(unsigned long long)a0 attributeName:(id)a1 value:(id)a2 format:(long long)a3 historyWindow:(id)a4 limitCount:(unsigned long long)a5 error:(id *)a6 replyHandler:(id /* block */)a7;
- (BOOL)forecastAttributeId:(unsigned long long)a0 attributeName:(id)a1 value:(id)a2 format:(long long)a3 historyWindow:(id)a4 deviceIdentifier:(id)a5 temporalLeeway:(double)a6 limitCount:(unsigned long long)a7 error:(id *)a8 replyHandler:(id /* block */)a9;
- (void).cxx_destruct;
- (id)init;
- (BOOL)deleteAttributeId:(unsigned long long)a0 attributeName:(id)a1 error:(id *)a2 replyHandler:(id /* block */)a3;
- (BOOL)attributeId:(unsigned long long)a0 attributeName:(id)a1 setCategory:(unsigned long long)a2 error:(id *)a3 replyHandler:(id /* block */)a4;
- (BOOL)attributeId:(unsigned long long)a0 attributeName:(id)a1 associateToBudgetId:(unsigned long long)a2 error:(id *)a3 replyHandler:(id /* block */)a4;
- (BOOL)attributeId:(unsigned long long)a0 backgroundLaunch:(id)a1 risingEdge:(BOOL)a2 fallingEdge:(BOOL)a3 type:(int)a4 error:(id *)a5 replyHandler:(id /* block */)a6;
- (BOOL)attributeId:(unsigned long long)a0 attributeName:(id)a1 repeatedStatistic:(int)a2 forHistoryWindow:(id)a3 error:(id *)a4 replyHandler:(id /* block */)a5;
- (BOOL)attributeId:(unsigned long long)a0 attributeName:(id)a1 statistic:(int)a2 forHistoryWindow:(id)a3 error:(id *)a4 replyHandler:(id /* block */)a5;
- (BOOL)remoteFocalAppWithId:(unsigned long long)a0 error:(id *)a1 replyHandler:(id /* block */)a2;
- (BOOL)budgetsForAttributeId:(unsigned long long)a0 attributeName:(id)a1 error:(id *)a2 replyHandler:(id /* block */)a3;
- (BOOL)getLocalAppBundleId:(id *)a0 replyHandler:(id /* block */)a1;
- (BOOL)bundleIdChange:(id *)a0 replyHandler:(id /* block */)a1;
- (BOOL)resetAttributeId:(unsigned long long)a0 attributeName:(id)a1 type:(int)a2 error:(id *)a3 replyHandler:(id /* block */)a4;
- (BOOL)setAdmissionMask:(unsigned long long)a0 attributeName:(id)a1 bitfield:(unsigned long long)a2 error:(id *)a3 replyHandler:(id /* block */)a4;
- (BOOL)resetAdmissionMask:(unsigned long long)a0 attributeName:(id)a1 bitfield:(unsigned long long)a2 error:(id *)a3 replyHandler:(id /* block */)a4;
- (BOOL)readRemoteRequestResult:(unsigned long long)a0 error:(id *)a1 replyHandler:(id /* block */)a2;
- (id)initWithClientId:(unsigned long long)a0 error:(id *)a1;
- (BOOL)sendMessageWithType:(long long)a0 error:(id *)a1 replyHandler:(id /* block */)a2;
- (BOOL)registerPool:(id)a0 withInitialValue:(long long)a1 poolType:(long long)a2 budgetOptions:(unsigned long long)a3 error:(id *)a4 replyHandler:(id /* block */)a5;
- (BOOL)registerChildPool:(id)a0 parentIntegerId:(unsigned long long)a1 poolType:(long long)a2 budgetOptions:(unsigned long long)a3 maxFraction:(double)a4 error:(id *)a5 replyHandler:(id /* block */)a6;
- (BOOL)sendMessageWithType:(long long)a0 nameKey:(id)a1 name:(id)a2 error:(id *)a3 replyHandler:(id /* block */)a4;
- (BOOL)sendMessageWithType:(long long)a0 valueKey1:(id)a1 uint64Value1:(unsigned long long)a2 valueKey2:(id)a3 uint64Value2:(unsigned long long)a4 error:(id *)a5 replyHandler:(id /* block */)a6;
- (BOOL)sendMessageWithType:(long long)a0 valueKey:(id)a1 uint64Value:(unsigned long long)a2 error:(id *)a3 replyHandler:(id /* block */)a4;
- (BOOL)sendMessageWithType:(long long)a0 valueKey1:(id)a1 int64Value1:(long long)a2 valueKey2:(id)a3 uint64Value2:(unsigned long long)a4 valueKey3:(id)a5 uint64Value3:(unsigned long long)a6 error:(id *)a7 replyHandler:(id /* block */)a8;
- (BOOL)budgetsForAttributeId:(unsigned long long)a0 error:(id *)a1 replyHandler:(id /* block */)a2;
- (BOOL)sendMessageWithType:(long long)a0 nameKey:(id)a1 name:(id)a2 valueKey:(id)a3 int64Value:(long long)a4 error:(id *)a5 replyHandler:(id /* block */)a6;
- (BOOL)sendMessageWithType:(long long)a0 nameKey:(id)a1 name:(id)a2 typeField:(unsigned long long)a3 integerId:(unsigned long long)a4 error:(id *)a5 replyHandler:(id /* block */)a6;
- (BOOL)sendMessageWithType:(long long)a0 nameKey:(id)a1 name:(id)a2 valueKey:(id)a3 int64Value:(long long)a4 type:(unsigned long long)a5 integerId:(unsigned long long)a6 error:(id *)a7 replyHandler:(id /* block */)a8;
- (BOOL)versionWithError:(id *)a0 replyHandler:(id /* block */)a1;
- (BOOL)message:(id)a0 withReplyHandler:(id /* block */)a1;
- (BOOL)forecastAttributeId:(unsigned long long)a0 value:(id)a1 format:(long long)a2 historyWindow:(id)a3 limitCount:(unsigned long long)a4 error:(id *)a5 replyHandler:(id /* block */)a6;
- (BOOL)forecastAttributeId:(unsigned long long)a0 value:(id)a1 format:(long long)a2 historyWindow:(id)a3 deviceIdentifier:(id)a4 temporalLeeway:(double)a5 limitCount:(unsigned long long)a6 error:(id *)a7 replyHandler:(id /* block */)a8;
- (BOOL)registerPool:(id)a0 withInitialValue:(long long)a1 poolType:(long long)a2 error:(id *)a3 replyHandler:(id /* block */)a4;
- (BOOL)registerChildPool:(id)a0 parentIntegerId:(unsigned long long)a1 poolType:(long long)a2 maxFraction:(double)a3 error:(id *)a4 replyHandler:(id /* block */)a5;
- (BOOL)idForPool:(id)a0 error:(id *)a1 replyHandler:(id /* block */)a2;
- (BOOL)deletePool:(unsigned long long)a0 type:(unsigned long long)a1 error:(id *)a2 replyHandler:(id /* block */)a3;
- (BOOL)readPool:(unsigned long long)a0 type:(unsigned long long)a1 error:(id *)a2 replyHandler:(id /* block */)a3;
- (BOOL)compareAndSwapPool:(unsigned long long)a0 compareValue:(long long)a1 swapValue:(long long)a2 type:(unsigned long long)a3 error:(id *)a4 replyHandler:(id /* block */)a5;
- (BOOL)decrementPool:(unsigned long long)a0 decrementValue:(long long)a1 type:(unsigned long long)a2 error:(id *)a3 replyHandler:(id /* block */)a4;
- (BOOL)incrementPool:(unsigned long long)a0 incrementValue:(long long)a1 type:(unsigned long long)a2 error:(id *)a3 replyHandler:(id /* block */)a4;
- (BOOL)readTrendingAppsWithError:(id *)a0 replyHandler:(id /* block */)a1;
- (BOOL)readLiveAppsWithError:(id *)a0 replyHandler:(id /* block */)a1;
- (BOOL)registerTrendableApp:(id)a0 error:(id *)a1 replyHandler:(id /* block */)a2;
- (BOOL)deregisterTrendableApp:(id)a0 error:(id *)a1 replyHandler:(id /* block */)a2;
- (BOOL)bundleIdEntriesOlderThanDate:(id)a0 error:(id *)a1 replyHandler:(id /* block */)a2;
- (BOOL)deleteBundleId:(id)a0 error:(id *)a1 replyHandler:(id /* block */)a2;
- (BOOL)deleteAttributeId:(unsigned long long)a0 error:(id *)a1 replyHandler:(id /* block */)a2;
- (BOOL)setDebugBitmap:(unsigned long long)a0 error:(id *)a1 replyHandler:(id /* block */)a2;
- (BOOL)deleteAllDatabaseEntriesOlderThanDate:(id)a0 error:(id *)a1 replyHandler:(id /* block */)a2;
- (BOOL)appsLaunchedSince:(id)a0 butNotPrewarmedSince:(id)a1 error:(id *)a2 replyHandler:(id /* block */)a3;
- (BOOL)registerAttribute:(id)a0 withType:(int)a1 dataProtectionClass:(id)a2 error:(id *)a3 replyHandler:(id /* block */)a4;
- (BOOL)idForAttribute:(id)a0 error:(id *)a1 replyHandler:(id /* block */)a2;
- (BOOL)idForAttribute:(id)a0 clientId:(long long)a1 error:(id *)a2 replyHandler:(id /* block */)a3;
- (BOOL)attributeId:(unsigned long long)a0 occurredWithValue:(id)a1 cost:(long long)a2 onDate:(id)a3 risingEdge:(BOOL)a4 fallingEdge:(BOOL)a5 type:(int)a6 error:(id *)a7 replyHandler:(id /* block */)a8;
- (BOOL)attributeNamesWithError:(id *)a0 replyHandler:(id /* block */)a1;
- (BOOL)poolNamesWithError:(id *)a0 replyHandler:(id /* block */)a1;
- (BOOL)deleteDataWithError:(id *)a0 replyHandler:(id /* block */)a1;
- (BOOL)attributeId:(unsigned long long)a0 associateToBudgetId:(unsigned long long)a1 error:(id *)a2 replyHandler:(id /* block */)a3;
- (BOOL)attributeId:(unsigned long long)a0 setCategory:(unsigned long long)a1 error:(id *)a2 replyHandler:(id /* block */)a3;
- (BOOL)attributeId:(unsigned long long)a0 admissionCheckOfValue:(id)a1 admissionCheckType:(int)a2 attributeType:(int)a3 options:(id)a4 error:(id *)a5 replyHandler:(id /* block */)a6;
- (BOOL)attributeId:(unsigned long long)a0 statistic:(int)a1 forHistoryWindow:(id)a2 error:(id *)a3 replyHandler:(id /* block */)a4;
- (BOOL)attributeId:(unsigned long long)a0 repeatedStatistic:(int)a1 forHistoryWindow:(id)a2 error:(id *)a3 replyHandler:(id /* block */)a4;
- (BOOL)attributeId:(unsigned long long)a0 repeatedStatistic:(int)a1 forHistoryWindow:(id)a2 deviceIdentifier:(id)a3 error:(id *)a4 replyHandler:(id /* block */)a5;
- (BOOL)attributeId:(unsigned long long)a0 meteredWithValue:(id)a1 costDictionary:(id)a2 onDate:(id)a3 risingEdge:(BOOL)a4 fallingEdge:(BOOL)a5 type:(int)a6 meterToken:(unsigned long long)a7 error:(id *)a8 replyHandler:(id /* block */)a9;
- (BOOL)attributeId:(unsigned long long)a0 historyOfValue:(id)a1 forWindow:(id)a2 filter:(long long)a3 maximumElements:(unsigned long long)a4 error:(id *)a5 replyHandler:(id /* block */)a6;
- (BOOL)resetAttributeId:(unsigned long long)a0 type:(int)a1 error:(id *)a2 replyHandler:(id /* block */)a3;
- (BOOL)getDevicesWithError:(id *)a0 replyHandler:(id /* block */)a1;
- (BOOL)getDeviceFromDescription:(id)a0 error:(id *)a1 replyHandler:(id /* block */)a2;
- (BOOL)readSystemDataFromDevice:(unsigned int)a0 error:(id *)a1 replyHandler:(id /* block */)a2;
- (BOOL)broadcastSystemDataWithError:(id *)a0 replyHandler:(id /* block */)a1;
- (BOOL)setAdmissionMask:(unsigned long long)a0 bitfield:(unsigned long long)a1 error:(id *)a2 replyHandler:(id /* block */)a3;
- (BOOL)resetAdmissionMask:(unsigned long long)a0 bitfield:(unsigned long long)a1 error:(id *)a2 replyHandler:(id /* block */)a3;
- (BOOL)requestSystemDataFromDevice:(unsigned int)a0 error:(id *)a1 replyHandler:(id /* block */)a2;
- (BOOL)requestForecastFromDevice:(unsigned int)a0 attributeId:(unsigned long long)a1 value:(id)a2 historyWindow:(id)a3 format:(long long)a4 error:(id *)a5 replyHandler:(id /* block */)a6;
- (BOOL)requestStatisticFromDevice:(unsigned int)a0 attributeId:(unsigned long long)a1 statistic:(int)a2 historyWindow:(id)a3 error:(id *)a4 replyHandler:(id /* block */)a5;
- (BOOL)attributeId:(unsigned long long)a0 admissionCheckOfValue:(id)a1 admissionCheckType:(int)a2 attributeType:(int)a3 options:(id)a4 cost:(long long)a5 onDate:(id)a6 risingEdge:(BOOL)a7 fallingEdge:(BOOL)a8 error:(id *)a9 replyHandler:(id /* block */)a10;
- (BOOL)setNonAppBundlId:(id)a0 error:(id *)a1 replyHandler:(id /* block */)a2;
- (BOOL)setActiveBundles:(id)a0 startTimestamps:(id)a1 endTimestamps:(id)a2 event:(unsigned long long)a3 error:(id *)a4 replyHandler:(id /* block */)a5;
- (BOOL)requestAdmissionLogFromDevice:(unsigned int)a0 error:(id *)a1 replyHandler:(id /* block */)a2;

@end
