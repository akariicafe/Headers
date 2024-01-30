@interface SiriCoreWiFiManagerClient : NSObject {
    int _type;
    struct __WiFiManagerClient { } *_primitiveWiFiManagerClient;
    long long _rssi;
    long long _snr;
}

- (id)init;
- (void)dealloc;
- (BOOL)isWifiEnabled;
- (void)releaseWiFiAssertion;
- (void)acquireWiFiAssertion:(long long)a0;
- (struct __WiFiManagerClient { } *)_primitiveWiFiManagerClient;
- (void)_setWiFiManagerClientType:(int)a0;
- (BOOL)hasAssociatedNetworkWithRSSI:(long long *)a0 andSNR:(long long *)a1 andPhyMode:(id *)a2 andChannelInfo:(id *)a3 isCaptive:(BOOL *)a4;
- (void)registerOneShotEnabledHandler:(id /* block */)a0;

@end
