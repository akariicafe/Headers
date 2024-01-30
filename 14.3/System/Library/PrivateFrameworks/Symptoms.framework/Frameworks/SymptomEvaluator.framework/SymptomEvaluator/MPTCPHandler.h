@class NSString, NetworkAnalyticsStateRelay, NSObject;
@protocol OS_dispatch_source;

@interface MPTCPHandler : NSObject <ConfigurableObjectProtocol> {
    int _kernelWifiAdvice;
    int _kernelCellAdvice;
    NetworkAnalyticsStateRelay *cellRelay;
    NetworkAnalyticsStateRelay *wifiRelay;
    id relayReadyObserver;
    id rnfWiFiObserver;
}

@property int sockfd;
@property (retain) NSObject<OS_dispatch_source> *socksrc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)a0;

- (void)sendReply:(id)a0;
- (int)read:(id)a0 returnedValues:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)setupSockFD;
- (int)configureInstance:(id)a0;
- (void)_setMPTCPAdvisoryWiFi:(long long)a0 Cell:(int)a1;
- (void)dealloc;
- (void)_setMPTCPAdvisoryWiFi:(long long)a0;
- (void)_setMPTCPAdvisoryCell:(int)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_performUpdate;
- (void)handleSrcEvent;
- (void)rnfWiFiEvent:(id)a0 withInfo:(id)a1;

@end
