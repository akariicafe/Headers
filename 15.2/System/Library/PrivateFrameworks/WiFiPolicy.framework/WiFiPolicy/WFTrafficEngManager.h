@class RPCompanionLinkClient, NSObject;
@protocol OS_dispatch_queue, WFTrafficEngDelegate;

@interface WFTrafficEngManager : NSObject {
    NSObject<OS_dispatch_queue> *_traffic_engr_queue;
    RPCompanionLinkClient *_discoveryClient;
    BOOL _configured;
}

@property (nonatomic) id<WFTrafficEngDelegate> trafficEngDelegate;

- (void)__invalidateSession;
- (void)__invalidateDiscovery;
- (void)__registerRequestHandler;
- (void)cleanup;
- (void)__requestCriticalAppInfo:(id)a0 completionBlock:(id /* block */)a1;
- (id)initWithTrafficEngDelegate:(id)a0;
- (void)__registerCallbacksAndActivate;
- (void)__sendEventToPeers;
- (void)__configureRapportSessionClient:(id)a0;
- (void).cxx_destruct;
- (BOOL)__configureRapportDiscoveryClient;
- (void)__sendPeriodicEvent:(id)a0;
- (void)__tearDownRapportDataSession;
- (id)__collectCriticalAppInfo;
- (void)__activateDiscovery;
- (void)dealloc;
- (void)__sendKeepAliveEvent:(id)a0 dictionary:(id)a1;

@end
