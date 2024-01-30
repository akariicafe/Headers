@class NSUUID, HMDAssistantSettingsConnection, NSString;
@protocol HMDAppleMediaAccessoryLocalMessageHandlerDataSource;

@interface HMDAppleMediaAccessoryLocalMessageHandler : NSObject <HMFLogging>

@property (readonly, copy) NSUUID *identifier;
@property (readonly) HMDAssistantSettingsConnection *assistantSettingsConnection;
@property (weak) id<HMDAppleMediaAccessoryLocalMessageHandlerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (id)dataSourceAccessoryWithUUID:(id)a0;
- (void)handleSiriEndpointDeleteSiriHistoryMessage:(id)a0;
- (id)initWithIdentifier:(id)a0 assistantSettingsConnection:(id)a1;

@end
