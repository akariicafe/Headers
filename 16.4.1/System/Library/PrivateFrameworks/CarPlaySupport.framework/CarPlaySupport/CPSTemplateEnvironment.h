@class CARSessionStatus, NSString, NSXPCConnection, CARObserverHashTable, NSSet;
@protocol CPTemplateProviding;

@interface CPSTemplateEnvironment : NSObject <CPUINowPlayingObserving>

@property (retain, nonatomic) CARObserverHashTable *environmentObservers;
@property (readonly, weak, nonatomic) NSXPCConnection *connection;
@property (readonly, weak, nonatomic) id<CPTemplateProviding> templateProvider;
@property (readonly, nonatomic) CARSessionStatus *sessionStatus;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) BOOL isNowPlayingApp;
@property (readonly, nonatomic) BOOL hasAnyTemplateEntitlement;
@property (readonly, nonatomic) BOOL hasNavigationEntitlement;
@property (readonly, nonatomic) BOOL hasAudioEntitlement;
@property (readonly, nonatomic) BOOL hasCommunicationEntitlement;
@property (readonly, nonatomic) BOOL hasChargingEntitlement;
@property (readonly, nonatomic) BOOL hasParkingEntitlement;
@property (readonly, nonatomic) BOOL hasQuickOrderingEntitlement;
@property (readonly, nonatomic) BOOL hasPublicSafetyEntitlement;
@property (readonly, nonatomic) BOOL hasFuelingEntitlement;
@property (readonly, nonatomic) BOOL hasDrivingTaskEntitlement;
@property (readonly, nonatomic) BOOL supportsInstrumentCluster;
@property (readonly, nonatomic) NSSet *allowedTemplateClasses;
@property (readonly, nonatomic) unsigned long long maximumTabs;
@property (readonly, nonatomic) unsigned long long maximumClientHierarchyDepth;
@property (readonly, nonatomic) BOOL isUserApplication;
@property (readonly, nonatomic) BOOL rightHandDrive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)nowPlayingManager:(id)a0 didUpdateSnapshot:(id)a1;
- (void)addTemplateEnvironmentDelegate:(id)a0;
- (BOOL)_applicationRecord:(id)a0 supportsIntentWithIdentifier:(id)a1 error:(id *)a2;
- (BOOL)_applicationRecord:(id)a0 supportsIntentWithIdentifierInExtensions:(id)a1 error:(id *)a2;
- (BOOL)applicationSupportsIntentWithIdentifier:(id)a0 error:(id *)a1;
- (id)initWithConnection:(id)a0 templateProvider:(id)a1;

@end
