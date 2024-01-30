@class CellOutrankHandler, NSObject, NetworkAnalyticsStateRelay;
@protocol OS_dispatch_queue;

@interface WiFiViabilityMonitor : NSObject {
    unsigned int _prevWiFiViability;
    id _cellFallbackObserver;
    id _cellFallbackAdminObserver;
    NetworkAnalyticsStateRelay *_wifiRelay;
    CellOutrankHandler *_outrankRelay;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)initWithQueue:(id)a0;
- (id)getState;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (BOOL)_isCellFallbackAdminDisabled;
- (BOOL)_isCellOutrankStateMachineInOutrank;
- (long long)_currentRNFAdvice;
- (unsigned int)currentWiFiViabilityFlags;
- (void)possiblySignificantWiFiChange;

@end
