@class NSString, CHSWidgetMetricsSpecification, NSDictionary, NSMutableSet, NSArray, BSServiceConnection, NSObject;
@protocol OS_dispatch_queue;

@interface CHSChronoServicesConnection : NSObject <CHSChronoWidgetServiceClientInterface, CHSChronoWidgetServiceServer>

@property (retain, nonatomic) NSMutableSet *queue_clients;
@property (retain, nonatomic, setter=_queue_setLastDescriptorsByExtensionIdentifier:) NSDictionary *queue_lastDescriptorsByExtensionIdentifier;
@property (retain, nonatomic) BSServiceConnection *queue_connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callOutQueue;
@property (retain, nonatomic) CHSWidgetMetricsSpecification *lastMetricsSpecification;
@property (copy, nonatomic) NSArray *lastConfiguredWidgetContainerDescriptors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (id)widgetEnvironmentDataForBundleIdentifier:(id)a0;
- (void)_queue_removeClient:(id)a0;
- (oneway void)expireLocationGracePeriods;
- (oneway void)setConfiguredWidgetContainerDescriptors:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_queue_invalidateConnection;
- (void)_queue_createConnection;
- (id)_init;
- (void)_queue_addClient:(id)a0;
- (oneway void)flushPowerlog;
- (void)reloadTimelineForAvocadoWithIdentifier:(id)a0 inBundleWithIdentifier:(id)a1 error:(id *)a2;
- (oneway void)setMetricsSpecification:(id)a0;
- (oneway void)avocadoDescriptorsDidChange:(id)a0;
- (id)_URLSessionDidCompleteForExtensionWithBundleIdentifier:(id)a0 info:(id)a1;
- (oneway void)applicationWithBundleIdentifierEnteredForeground:(id)a0;
- (id)_queue_remoteTarget;

@end
