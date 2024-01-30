@class AnalyticsWorkspace, NSXPCConnection, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, ServiceInterface;

@interface NWNetworkOfInterestManager : NSObject {
    AnalyticsWorkspace *workspace;
    NSMutableSet *registryNOI;
    int notifyToken;
    BOOL closing;
}

@property (retain) NSXPCConnection *connection;
@property (retain) id<ServiceInterface> service;
@property (retain) NSObject<OS_dispatch_queue> *callerQueue;
@property (nonatomic) id delegate;

- (void)trackCustomNOI:(id)a0 options:(id)a1;
- (id)init;
- (void)estimatedDataTransferTimeOnNOI:(id)a0 withPayloadInfo:(id)a1 reply:(id /* block */)a2;
- (void).cxx_destruct;
- (void)errorPredictionsForNOI:(id)a0 reply:(id /* block */)a1;
- (void)foregroundNetworkActivityUnderwayOn:(id)a0 reply:(id /* block */)a1;
- (void)instantQualityForNOI:(id)a0 reply:(id /* block */)a1;
- (void)canUseOnAlternateNOI:(id)a0 appStates:(id)a1 reply:(id /* block */)a2;
- (void)dealloc;
- (void)_unloadState;
- (void)updatePredictionsForNOI:(id)a0 reply:(id /* block */)a1;
- (void)_commonTrackRequestFor:(long long)a0 isAny:(BOOL)a1 isBuiltin:(BOOL)a2 options:(id)a3 isCustom:(id)a4;
- (void)setQueue:(id)a0;
- (void)auditableLinkQualityForNOI:(id)a0 reply:(id /* block */)a1;
- (void)linkThroughputOnNOI:(id)a0 reply:(id /* block */)a1;
- (void)canUseOnAlternateNOI:(id)a0 apps:(id)a1 reply:(id /* block */)a2;
- (BOOL)_connect;
- (void)inquireNOIFor:(id)a0 orPredicate:(id)a1 requestedKeys:(id)a2 options:(id)a3 reply:(id /* block */)a4;
- (void)trackNOIAnyForInterfaceType:(long long)a0 options:(id)a1;
- (void)_commonFinalizeRequestFor:(id)a0 orPredicate:(id)a1 options:(id)a2 isStaged:(BOOL)a3;
- (void)trafficInvitesHourlyDistributionForNOI:(id)a0 reply:(id /* block */)a1;
- (void)interfaceTimelineForNOI:(id)a0 reply:(id /* block */)a1;
- (void)networkAttachmentInfoForScopedNOI:(id)a0 reply:(id /* block */)a1;
- (void)updateNOI:(id)a0 keyPath:(id)a1 change:(id)a2;
- (void)stopTrackingNOIs:(id)a0;
- (void)haveNOIs:(id)a0 tornDown:(BOOL)a1;
- (void)destroy;
- (void)trackAllBuiltinNOIsForInterfaceType:(long long)a0 options:(id)a1;
- (BOOL)isClosing;
- (void)trainingProgressForNOI:(id)a0 reply:(id /* block */)a1;
- (void)dayOfWeekPredictionGroupingForNOI:(id)a0 reply:(id /* block */)a1;

@end
