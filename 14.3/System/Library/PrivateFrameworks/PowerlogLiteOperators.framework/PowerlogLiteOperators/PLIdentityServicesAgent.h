@class PLXPCListenerOperatorComposition, NSMutableDictionary, NSDate;

@interface PLIdentityServicesAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *localMessageHandler;
@property (retain) PLXPCListenerOperatorComposition *networkStatsHandler;
@property (retain) PLXPCListenerOperatorComposition *infraWiFiRequestHandler;
@property (retain) PLXPCListenerOperatorComposition *localLinkTypeHandler;
@property (retain) PLXPCListenerOperatorComposition *ipsecLinkTypeHandler;
@property (retain) PLXPCListenerOperatorComposition *cloudMessagingHandler;
@property (retain) NSMutableDictionary *previousStatsByPriority;
@property (retain) NSDate *initialEntryDate;
@property (retain) NSDate *lastLocalDeliveryLogDate;
@property (retain) NSMutableDictionary *lastEntryDatePerCategory;
@property long long currentLinkType;

+ (void)load;
+ (id)entryDefinitionIDSMessageStats;
+ (id)entryDefinitionCloudMessaging;
+ (id)entryDefinitionLocalInfraWiFiRequests;
+ (id)entryDefinitionLocalLink;
+ (id)entryEventPointDefinitions;
+ (id)entryDefinitionIDSSocketStats;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitions;

- (id)init;
- (void).cxx_destruct;
- (void)createBTAccountingEvents:(id)a0;
- (void)createIDSAccountingEventsWithEntries:(id)a0;
- (void)notifyLinkType:(unsigned long long)a0;
- (void)logLocalMessageTopic:(id)a0;
- (void)logIDSNetworkEntries:(id)a0;
- (void)initTaskOperatorDependancies;
- (void)logLocalInfraWiFiFrequests:(id)a0;
- (void)logLocalLinkType:(unsigned long long)a0;
- (void)initOperatorDependancies;
- (void)logCloudMessaging:(id)a0;

@end
