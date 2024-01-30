@class NSString, WiFiP2PXPCConnection, NSMutableArray;

@interface WiFiP2PAWDLStateMonitor : NSObject <WiFiP2PAWDLStateMonitorXPCDelegate, WiFiP2PXPCConnectionDelegate> {
    WiFiP2PXPCConnection *_xpcConnection;
    NSMutableArray *_interestedUniqueIdentifiers;
}

@property (copy, nonatomic) id /* block */ stateUpdatedHandler;
@property (copy, nonatomic) id /* block */ statisticsUpdatedHandler;
@property (copy, nonatomic) id /* block */ lowLatencyStatisticsUpdatedHandler;
@property (copy, nonatomic) id /* block */ realtimeModeUpdatedHandler;
@property (copy, nonatomic) id /* block */ threadCoexistenceEventHandler;
@property (copy, nonatomic) id /* block */ softAPChannelChangedEventHandler;
@property (copy, nonatomic) id /* block */ channelSequenceUpdatedEventHandler;
@property (copy, nonatomic) id /* block */ serviceAvailabilityUpdatedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copySidecarStatistics;
- (void)threadCoexistenceEvent:(id)a0;
- (id)copyStatistics;
- (void)updatedStatistics;
- (void)startConnectionUsingProxy:(id)a0 completionHandler:(id /* block */)a1;
- (id)exportedInterface;
- (void)endMonitoring;
- (void)channelSequenceChangedEvent:(id)a0;
- (int)queryAverageRSSIForPeer:(id)a0;
- (void)availabilityUpdatedForService:(id)a0 error:(id)a1;
- (id)copyLowLatencyStatistics;
- (void)beginMonitoring;
- (id)copyActiveServiceUniqueIdentifiers;
- (void)registerAvailabilityUpdatesForService:(id)a0;
- (void)updatedAWDLState:(id)a0;
- (id)lowLatencyStatisticsDifferenceBetweenPrevious:(id)a0 current:(id)a1;
- (void)updatedLowLatencyStatistics;
- (void)softAPChannelChangedEvent:(BOOL)a0 channelNumber:(unsigned short)a1;
- (id)init;
- (void)updatedRealtimeMode:(BOOL)a0;
- (id)exportedObject;
- (id)queryPeerDatabase;
- (void).cxx_destruct;

@end
