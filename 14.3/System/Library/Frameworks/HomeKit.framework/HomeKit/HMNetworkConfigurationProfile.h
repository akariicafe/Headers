@class NSArray, NSString, HMAccessoryNetworkAccessViolation;
@protocol HMNetworkConfigurationProfileDelegate;

@interface HMNetworkConfigurationProfile : HMAccessoryProfile <_HMNetworkConfigurationProfileDelegate>

@property (readonly) long long targetProtectionMode;
@property (readonly) long long currentProtectionMode;
@property (readonly) NSArray *allowedHosts;
@property (readonly) HMAccessoryNetworkAccessViolation *accessViolation;
@property (readonly) BOOL supportsWiFiReconfiguration;
@property (readonly) long long credentialType;
@property (weak, nonatomic) id<HMNetworkConfigurationProfileDelegate> delegate;
@property (readonly, nonatomic, getter=isNetworkAccessRestricted) BOOL networkAccessRestricted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (void)networkConfigurationProfileDidUpdateProtectionMode:(id)a0;
- (void)networkConfigurationProfileDidUpdateNetworkAccessMode:(id)a0;
- (void)networkConfigurationProfileDidUpdateAllowedHosts:(id)a0;
- (void)networkConfigurationProfileDidUpdateAccessViolation:(id)a0;
- (void)networkConfigurationProfileDidUpdateWiFiReconfigurationSupport:(id)a0;
- (void)networkConfigurationProfileDidUpdateWiFiCredentialType:(id)a0;
- (void)previewAllowedHostsForAutoProtectionModeWithCompletionHandler:(id /* block */)a0;
- (id)initWithAccessoryIdentifier:(id)a0 targetProtection:(long long)a1 currentProtection:(long long)a2 networkAccessRestricted:(BOOL)a3 allowedHosts:(id)a4 accessViolation:(id)a5 supportsWiFiReconfiguration:(BOOL)a6 credentialType:(long long)a7;
- (void)reconfigureWiFiWithOptions:(id)a0 completionHandler:(id /* block */)a1;

@end
