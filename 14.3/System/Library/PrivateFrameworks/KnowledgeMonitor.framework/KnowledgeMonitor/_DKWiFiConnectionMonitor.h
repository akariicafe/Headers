@class NSString, NWPathEvaluator;

@interface _DKWiFiConnectionMonitor : _DKMonitor <_DKHistoricalDeletingMonitor>

@property (retain, nonatomic) NWPathEvaluator *pathEvaluator;
@property (copy, nonatomic) NSString *currentWirelessSSID;
@property (nonatomic) struct __WiFiManagerClient { } *wifiManager;
@property (copy, nonatomic) id /* block */ historicalDeletingHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_eventWithSSID:(id)a0 date:(id)a1;

@end
