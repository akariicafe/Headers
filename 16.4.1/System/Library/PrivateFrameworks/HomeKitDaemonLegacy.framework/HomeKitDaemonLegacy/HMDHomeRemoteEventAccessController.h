@class HMDAccessorySettingsEventHelper;
@protocol HMDHomeRemoteEventAccessControllerDataSource;

@interface HMDHomeRemoteEventAccessController : NSObject <HMDRemoteEventAccessControlProvider>

@property (readonly, weak, nonatomic) id<HMDHomeRemoteEventAccessControllerDataSource> dataSource;
@property (readonly, nonatomic) HMDAccessorySettingsEventHelper *settingsHelper;

- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (BOOL)isAppleMediaAccessoryUUID:(id)a0 error:(id *)a1;
- (BOOL)isMediaSystemUUID:(id)a0 error:(id *)a1;
- (BOOL)isSiriEndpointAccessoryUUID:(id)a0 error:(id *)a1;
- (BOOL)remoteEventAllowForMediaSystemSettingEventTopic:(id)a0 deviceType:(unsigned long long)a1 userType:(unsigned long long)a2;
- (BOOL)remoteEventAllowedForAccessoryEventTopic:(id)a0 parsedEventTopic:(id)a1 deviceType:(unsigned long long)a2 userType:(unsigned long long)a3;
- (BOOL)remoteEventAllowedForAccessoryInfoWithTopicSuffix:(id)a0 deviceType:(unsigned long long)a1 userType:(unsigned long long)a2;
- (BOOL)remoteEventAllowedForHomeEventTopic:(id)a0 parsedEventTopic:(id)a1 deviceType:(unsigned long long)a2 userType:(unsigned long long)a3;
- (BOOL)remoteEventAllowedForTopic:(id)a0 deviceType:(unsigned long long)a1 userType:(unsigned long long)a2;

@end
