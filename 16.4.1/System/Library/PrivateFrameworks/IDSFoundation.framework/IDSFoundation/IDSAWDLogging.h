@class NSObject, AWDServerConnection;
@protocol OS_dispatch_queue;

@interface IDSAWDLogging : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) AWDServerConnection *AWDServerConnection;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)IDSQuickRelayEventType:(id)a0 eventSubType:(id)a1 duration:(id)a2 resultCode:(id)a3 providerType:(id)a4 transportType:(id)a5 interfaceType:(id)a6 skeEnabled:(id)a7 isInitiator:(id)a8 protocolVersion:(id)a9 retryCount:(id)a10 serviceName:(id)a11 subServiceName:(id)a12 participantCount:(id)a13;
- (void)_submitAWDMetric:(id)a0 withContainer:(id)a1;
- (void)IDSCoreAnalyticsQuickRelayEventType:(id)a0 eventSubType:(id)a1 duration:(id)a2 resultCode:(id)a3 providerType:(id)a4 transportType:(id)a5 interfaceType:(id)a6 skeEnabled:(id)a7 isInitiator:(id)a8 protocolVersion:(id)a9 retryCount:(id)a10 serviceName:(id)a11 subServiceName:(id)a12 participantCount:(id)a13;
- (id)_metricContainerForMetricType:(unsigned int)a0;
- (BOOL)_shouldSubmit;
- (void)submitMetric:(id)a0 withIdentifier:(unsigned int)a1;

@end
