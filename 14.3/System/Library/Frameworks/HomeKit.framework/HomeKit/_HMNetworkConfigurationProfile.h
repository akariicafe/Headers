@class NSArray, HMAccessoryNetworkAccessViolation;
@protocol _HMNetworkConfigurationProfileDelegate;

@interface _HMNetworkConfigurationProfile : _HMAccessoryProfile

@property (readonly) long long targetProtectionMode;
@property (readonly) long long currentProtectionMode;
@property (readonly, getter=isNetworkAccessRestricted) BOOL networkAccessRestricted;
@property (readonly) NSArray *allowedHosts;
@property (readonly) HMAccessoryNetworkAccessViolation *accessViolation;
@property (readonly) BOOL supportsWiFiReconfiguration;
@property (readonly) long long credentialType;
@property (weak, nonatomic) id<_HMNetworkConfigurationProfileDelegate> delegate;

- (void)setCredentialType:(long long)a0;
- (void).cxx_destruct;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)_handleHostsUpdated:(id)a0;
- (void)_handleAccessViolationUpdated:(id)a0;
- (void)_handleWiFiReconfigurationUpdated:(id)a0;
- (void)setCurrentProtectionMode:(long long)a0;
- (void)setTargetProtectionMode:(long long)a0;
- (void)_notifyDelegateOfUpdatedProtectionMode;
- (void)setNetworkAccessRestricted:(BOOL)a0;
- (void)_notifyDelegateOfNetworkAccessModeChanged;
- (void)setAllowedHosts:(id)a0;
- (void)_notifyDelegateOfUpdatedAllowedHosts;
- (void)setAccessViolation:(id)a0;
- (void)_notifyDelegateOfUpdatedAccessViolation;
- (void)setSupportsWiFiReconfiguration:(BOOL)a0;
- (void)_notifyDelegateOfUpdatedWiFiReconfigurationSupport;
- (void)_notifyDelegateOfUpdatedWiFiCredentialType;
- (void)_registerNotificationHandlers;
- (void)previewAllowedHostsForAutoProtectionModeWithCompletionHandler:(id /* block */)a0;
- (id)initWithAccessoryIdentifier:(id)a0 targetProtection:(long long)a1 currentProtection:(long long)a2 networkAccessRestricted:(BOOL)a3 allowedHosts:(id)a4 accessViolation:(id)a5 supportsWiFiReconfiguration:(BOOL)a6 credentialType:(long long)a7;
- (void)reconfigureWiFiWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (id)messageDestination;

@end
