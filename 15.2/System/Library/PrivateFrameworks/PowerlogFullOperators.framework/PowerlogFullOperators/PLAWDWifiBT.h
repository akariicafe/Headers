@class PLEntryNotificationOperatorComposition;

@interface PLAWDWifiBT : PLAWDAuxMetrics

@property (retain) PLEntryNotificationOperatorComposition *wifiEventCallback;
@property (retain) PLEntryNotificationOperatorComposition *btEventCallback;
@property (retain) PLEntryNotificationOperatorComposition *btPowerCallback;
@property (retain) PLEntryNotificationOperatorComposition *wifiRailCallback;
@property (retain) PLEntryNotificationOperatorComposition *btRailCallback;
@property BOOL isWiFiStart;
@property BOOL isWiFiRailStart;
@property BOOL isBTStart;
@property BOOL isBTRailStart;
@property long long wifiSubmitCnt;
@property long long btSubmitCnt;

+ (id)entryAggregateDefinitions;
+ (id)getSharedObjWithOperator:(id)a0;
+ (id)entryAggregateDefinitionAwdWifi;
+ (id)entryAggregateDefinitionAwdBT;

- (void).cxx_destruct;
- (void)startMetricCollection:(id)a0;
- (void)stopMetricCollection:(id)a0;
- (BOOL)submitDataToAWDServer:(id)a0 withAwdConn:(id)a1;
- (void)startWifiMetricCollection;
- (void)startBtMetricCollection;
- (BOOL)submitWiFiDataToAWDServer:(id)a0 withAwdConn:(id)a1;
- (BOOL)submitBtDataToAWDServer:(id)a0 withAwdConn:(id)a1;
- (void)resetWifiTable;
- (void)handleWifiCallback:(id)a0;
- (void)addEntryToWiFiTable:(id)a0 withValue:(double)a1 andBand:(id)a2;
- (void)resetBTTable;
- (void)handleBTCallback:(id)a0;
- (void)handleBTPowerCallback:(id)a0;
- (void)addEntryToBTTable:(id)a0 withValue:(double)a1;
- (void)handleWifiRailCallback:(id)a0;
- (void)handleBTRailCallback:(id)a0;

@end
