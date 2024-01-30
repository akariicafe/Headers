@class NSMutableDictionary, NSString, PLXPCListenerOperatorComposition, NSDate, NRDeviceMonitor;

@interface PLIdentityServicesAgent : PLAgent <NRDeviceMonitorDelegate>

@property (retain) PLXPCListenerOperatorComposition *localMessageHandler;
@property (retain) PLXPCListenerOperatorComposition *networkStatsHandler;
@property (retain) PLXPCListenerOperatorComposition *infraWiFiRequestHandler;
@property (retain) PLXPCListenerOperatorComposition *localLinkTypeHandler;
@property (retain) PLXPCListenerOperatorComposition *ipsecLinkTypeHandler;
@property (retain) PLXPCListenerOperatorComposition *cloudMessagingHandler;
@property (retain) PLXPCListenerOperatorComposition *idsLinkPreferenceRequestHandler;
@property (retain) NSMutableDictionary *previousStatsByPriority;
@property (retain) NSDate *initialEntryDate;
@property (retain) NSDate *lastLocalDeliveryLogDate;
@property (retain) NSMutableDictionary *lastEntryDatePerCategory;
@property (retain) NRDeviceMonitor *nrdm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitionIDSLocalMessage;
+ (id)entryEventPointDefinitions;
+ (id)entryDefinitionIDSMessageStats;
+ (void)load;
+ (id)entryEventIntervalDefinitions;
+ (id)entryDefinitionLocalInfraWiFiRequests;
+ (id)entryDefinitionLocalLink;
+ (id)entryEventPointDefinitionIDSLinkPreferenceRequest;
+ (id)entryDefinitionIDSSocketStats;
+ (id)entryDefinitionCloudMessaging;

- (void)initOperatorDependancies;
- (void)createIDSAccountingEventsWithEntries:(id)a0;
- (void)notifyLinkType:(unsigned long long)a0;
- (void)setCurrentLinkType;
- (void)logIDSLinkPreference:(id)a0;
- (void)logLocalInfraWiFiFrequests:(id)a0;
- (void)logIDSNetworkEntries:(id)a0;
- (void)createBTAccountingEvents:(id)a0;
- (void)deviceLinkTypeDidChange:(id)a0 linkType:(unsigned char)a1;
- (void)logLocalLinkType:(unsigned long long)a0;
- (void)logLocalMessageTopic:(id)a0;
- (void)logCloudMessaging:(id)a0;
- (void)initTaskOperatorDependancies;
- (id)init;
- (void).cxx_destruct;

@end
