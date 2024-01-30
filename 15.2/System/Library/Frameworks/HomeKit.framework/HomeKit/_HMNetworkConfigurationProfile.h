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

- (id)messageTargetUUID;
- (id)messageReceiveQueue;
- (void)setCredentialType:(long long)a0;
- (void).cxx_destruct;
- (id)messageDestination;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (void)_registerNotificationHandlers;
- (id)initWithAccessoryIdentifier:(id)a0 targetProtection:(long long)a1 currentProtection:(long long)a2 networkAccessRestricted:(BOOL)a3 allowedHosts:(id)a4 accessViolation:(id)a5 supportsWiFiReconfiguration:(BOOL)a6 credentialType:(long long)a7;
- (void)setAllowedHosts:(id)a0;
- (void)setAccessViolation:(id)a0;
- (void)setCurrentProtectionMode:(long long)a0;
- (void)setNetworkAccessRestricted:(BOOL)a0;
- (void)setTargetProtectionMode:(long long)a0;
- (void)setSupportsWiFiReconfiguration:(BOOL)a0;
- (void)reconfigureWiFiWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)previewAllowedHostsForAutoProtectionModeWithCompletionHandler:(id /* block */)a0;
- (void)_notifyDelegateOfUpdatedProtectionMode;
- (void)_notifyDelegateOfNetworkAccessModeChanged;
- (void)_notifyDelegateOfUpdatedAllowedHosts;
- (void)_notifyDelegateOfUpdatedAccessViolation;
- (void)_notifyDelegateOfUpdatedWiFiReconfigurationSupport;
- (void)_notifyDelegateOfUpdatedWiFiCredentialType;
- (void)_handleHostsUpdated:(id)a0;
- (void)_handleAccessViolationUpdated:(id)a0;
- (void)_handleWiFiReconfigurationUpdated:(id)a0;

@end
