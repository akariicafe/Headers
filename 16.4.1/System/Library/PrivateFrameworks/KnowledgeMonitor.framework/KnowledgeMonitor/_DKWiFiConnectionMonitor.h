@class NSString, NWPathEvaluator, BMPruner, BMSource;

@interface _DKWiFiConnectionMonitor : _DKMonitor <_DKHistoricalDeletingMonitor> {
    BMSource *_source;
}

@property (retain, nonatomic) NWPathEvaluator *pathEvaluator;
@property (copy, nonatomic) NSString *currentWirelessSSID;
@property (nonatomic) struct __WiFiManagerClient { } *wifiManager;
@property (retain, nonatomic) BMPruner *pruner;
@property (copy, nonatomic) id /* block */ historicalDeletingHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_BMEventWithSSID:(id)a0 starting:(BOOL)a1;
+ (id)_eventWithSSID:(id)a0 date:(id)a1;

@end
