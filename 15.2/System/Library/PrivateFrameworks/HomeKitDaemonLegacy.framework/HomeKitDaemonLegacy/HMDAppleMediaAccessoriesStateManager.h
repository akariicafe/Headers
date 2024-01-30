@class HMDAppleMediaAccessoriesStateManagerMetricsDispatcher, NSString, NSUUID, HMDAppleMediaAccessoriesStateMessenger;
@protocol HMDAppleMediaAccessoriesStateManagerDataSource;

@interface HMDAppleMediaAccessoriesStateManager : HMFObject <HMDAppleMediaAccessoriesStateMessengerDelegate, HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSUUID *identifier;
@property (readonly) HMDAppleMediaAccessoriesStateMessenger *messenger;
@property (readonly) HMDAppleMediaAccessoriesStateManagerMetricsDispatcher *metricsDispatcher;
@property (weak) id<HMDAppleMediaAccessoriesStateManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void)run;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 messenger:(id)a1 metricsDispatcher:(id)a2;
- (void)runMultipleIdentifierCorrectionSequence;
- (void)correctStateForMatchingIdentifier:(id)a0 appleMediaAccessories:(id)a1;
- (void)_correctStateForMatchingIdentifier:(id)a0 appleMediaAccessories:(id)a1 sendList:(id)a2;
- (id)sendModelIdentifierRequestMessageForAppleMediaAccessory:(id)a0 accessoryIdentifier:(id)a1;
- (void)correctStateForMatchingAppleMediaAccessories:(id)a0 modelIdentifier:(id)a1;
- (id)remoteAppleMediaAccessoriesByIdentifier;
- (id)remoteAppleMediaAccessories;
- (id)dataSourceAppleMediaAccessories;
- (void)appleMediaAccessoriesStateMessenger:(id)a0 didReceiveModelIdentiferRequestMessage:(id)a1 withAccessoryIdentifier:(id)a2;

@end
