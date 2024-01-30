@class NSObject, NetworkAnalyticsStateRelay;
@protocol OS_dispatch_queue;

@interface WiFiViabilityMonitor : NSObject {
    unsigned int _prevWiFiViability;
    id _cellFallbackObserver;
    id _cellFallbackAdminObserver;
    NetworkAnalyticsStateRelay *_wifiRelay;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)initWithQueue:(id)a0;
- (id)getState;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)_isCellFallbackAdminDisabled;
- (long long)_currentRNFAdvice;
- (unsigned int)currentWiFiViabilityFlags;
- (void)possiblySignificantWiFiChange;

@end
