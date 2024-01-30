@class RPCompanionLinkClient, NSObject;
@protocol OS_dispatch_queue, WFTrafficEngDelegate;

@interface WFTrafficEngManager : NSObject {
    NSObject<OS_dispatch_queue> *_traffic_engr_queue;
    RPCompanionLinkClient *_discoveryClient;
    BOOL _configured;
}

@property (nonatomic) id<WFTrafficEngDelegate> trafficEngDelegate;

- (void)cleanup;
- (void)__activateDiscovery;
- (void)__tearDownRapportDataSession;
- (void)__sendEventToPeers;
- (BOOL)__configureRapportDiscoveryClient;
- (void)__registerRequestHandler;
- (void)__sendPeriodicEvent:(id)a0;
- (id)__collectCriticalAppInfo;
- (void)__invalidateDiscovery;
- (void)dealloc;
- (void)__configureRapportSessionClient:(id)a0;
- (void)__sendKeepAliveEvent:(id)a0 dictionary:(id)a1;
- (void)__requestCriticalAppInfo:(id)a0 completionBlock:(id /* block */)a1;
- (void)__registerCallbacksAndActivate;
- (void).cxx_destruct;
- (id)initWithTrafficEngDelegate:(id)a0;
- (void)__invalidateSession;

@end
