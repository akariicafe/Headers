@class NSArray, NSString;

@interface CPSharedConversationServerBag : NSObject <CPConversationServerBag>

@property (readonly, nonatomic) unsigned long long activeParticipantPruningTimeout;
@property (readonly, nonatomic) unsigned long long sessionCleanupTimeout;
@property (readonly, nonatomic) unsigned long long AVCBlobRecoveryGracePeriod;
@property (readonly, nonatomic) unsigned long long AVCBlobRecoveryTimeout;
@property (readonly, nonatomic) unsigned long long rebroadcastTimeThreshold;
@property (readonly, nonatomic) unsigned long long activeParticipantRefreshDelay;
@property (readonly, nonatomic) unsigned long long maxActiveParticipantFetchRetries;
@property (readonly, nonatomic) unsigned long long backgroundAppPolicyHandleExpiryDays;
@property (readonly, nonatomic) unsigned long long qrPluginMaxConnectionAttempts;
@property (readonly, nonatomic) unsigned long long qrPluginConnectionRetryIntervalMillis;
@property (readonly, nonatomic) unsigned long long qrPluginMaxRpcStreamAttempts;
@property (readonly, nonatomic) unsigned long long qrPluginRpcStreamRetryIntervalMillis;
@property (readonly, nonatomic) unsigned long long unreliableMessengerEstablishChannelMaxAttempts;
@property (readonly, nonatomic) unsigned long long unreliableMessengerEstablishChannelRetryIntervalMillis;
@property (readonly, nonatomic) unsigned long long unreliableMessengerEgressMessagePayloadMaxSizeBytes;
@property (readonly, nonatomic) unsigned long long unreliableMessengerChannelStreamMaxQueueSize;
@property (readonly, nonatomic) unsigned long long unreliableMessengerChannelStreamMaxTries;
@property (readonly, nonatomic) unsigned long long unreliableMessengerChannelStreamRetryIntervalMillis;
@property (readonly, nonatomic) unsigned long long timeBetweenMacOSSharePlayNotificationsSeconds;
@property (readonly, nonatomic) NSArray *blockedActivitySessionBundleIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)stableBundleIdentifierForLocalBundleIdentifier:(id)a0;

@end
