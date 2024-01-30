@class HMFMessageDispatcher, NSUUID, HMAccessorySettingsMetricsDispatcher, NSString, NSArray;

@interface HMAccessorySettingsMessenger : NSObject <HMFLogging, HMFObject>

@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) HMAccessorySettingsMetricsDispatcher *metricsDispatcher;
@property (readonly, copy) NSUUID *messageTargetUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)shortDescription;
+ (id)logCategory;
+ (id)messageTargetUUIDWithHomeUUID:(id)a0;

- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithMessageDispatcher:(id)a0 messageTargetUUID:(id)a1 metricsDispatcher:(id)a2;
- (void)sendFetchAccessorySettingsRequestWithAccessoryUUID:(id)a0 keyPaths:(id)a1 completionHandler:(id /* block */)a2;
- (void)sendUpdateAccessorySettingRequestWithAccessoryUUID:(id)a0 keyPath:(id)a1 settingValue:(id)a2 completionHandler:(id /* block */)a3;
- (void)submitMetricEventWithMessage:(id)a0 error:(id)a1;

@end
