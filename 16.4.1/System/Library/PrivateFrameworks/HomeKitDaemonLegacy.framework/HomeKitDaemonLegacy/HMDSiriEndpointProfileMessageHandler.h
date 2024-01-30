@class NSUUID, NSString;
@protocol HMDSiriEndpointProfileMessageHandlerDataSource;

@interface HMDSiriEndpointProfileMessageHandler : NSObject <HMFLogging>

@property (readonly, copy) NSUUID *homeUUID;
@property (weak) id<HMDSiriEndpointProfileMessageHandlerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithHomeUUID:(id)a0;
- (id)dataSourceHubAccessories;
- (id)dataSourceSiriEndpointOnboardingManager;
- (id)deleteHistoryForAccessoryUUID:(id)a0 onHubAccessories:(id)a1;
- (id)deleteHistoryForAccessoryUUID:(id)a0 onHubAccessory:(id)a1;
- (void)handleSiriEndpointApplyOnboardingSelectionsRequestMessage:(id)a0;
- (void)handleSiriEndpointDeleteSiriHistoryRequestMessage:(id)a0;

@end
