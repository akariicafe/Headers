@interface IMCTSMSUtilities : NSObject

+ (BOOL)IMMMSEagerUploadDisabledInCarrierBundleForPhoneNumber:(id)a0 simID:(id)a1;
+ (int)IMMMSMaximumSlideCountForPhoneNumber:(id)a0 simID:(id)a1;
+ (BOOL)IMReadEnablePreviewTranscodingQualityCarrierValueForPhoneNumber:(id)a0 simID:(id)a1;
+ (int)IMMMSMaximumMessageByteCountForPhoneNumber:(id)a0 simID:(id)a1;
+ (BOOL)IMReadMMSUserOverrideForPhoneNumber:(id)a0 simID:(id)a1;
+ (BOOL)IMReadDisablePreviewTranscodingQualityOnWiFiCarrierValueForPhoneNumber:(id)a0 simID:(id)a1;
+ (BOOL)IMMMSRestrictedModeEnabledForPhoneNumber:(id)a0 simID:(id)a1;
+ (BOOL)IMShouldShowMMSEmailAddress:(id)a0 simID:(id)a1;
+ (BOOL)IMMMSSupportedAndConfiguredForPhoneNumber:(id)a0 simID:(id)a1;
+ (id)IMMMSEmailAddressToMatchForPhoneNumber:(id)a0 simID:(id)a1;
+ (double)IMMMSMaximumAudioDurationForPhoneNumber:(id)a0 simID:(id)a1;
+ (BOOL)IMMMSEnabledForPhoneNumber:(id)a0 simID:(id)a1;
+ (double)IMMMSMaximumVideoDurationForPhoneNumber:(id)a0 simID:(id)a1;
+ (BOOL)IMMessagesFilteringSettingForPreferedSubscription;
+ (unsigned long long)IMiMessageMaxTransferVideoFileSizeForWifiForPhoneNumber:(unsigned long long *)a0 cellSize:(unsigned long long *)a1 serverConfigurationBag:(id)a2 phoneNumber:(id)a3 simID:(id)a4;
+ (void)IMiMessageMaxTransferFileSizeForWifiForPhoneNumber:(unsigned long long *)a0 cellSize:(unsigned long long *)a1 serverConfigurationBag:(id)a2 phoneNumber:(id)a3 simID:(id)a4;
+ (id)IMPhoneNumbersEnabledForMultipleSubscriptionDevice;
+ (BOOL)IMMMSSupportsH264VideoForPhoneNumber:(id)a0 simID:(id)a1;
+ (int)IMMMSMaxImageDimensionForPhoneNumber:(id)a0 simID:(id)a1;
+ (BOOL)IMIsEagerUploadEnabledForPhoneNumber:(id)a0 simID:(id)a1;
+ (void)IMSynchronizeMMSCapabilityToWatch:(BOOL)a0;
+ (void)IMSynchronizePreferredSubscriptionMMSCapabilityToWatch;
+ (BOOL)IMMMSGroupTextOnlyMessagesSendAsMMSForPhoneNumber:(id)a0 simID:(id)a1;
+ (unsigned long long)IMiMessageMaxTransferAudioFileSizeForWifiForPhoneNumber:(unsigned long long *)a0 cellSize:(unsigned long long *)a1 serverConfigurationBag:(id)a2 phoneNumber:(id)a3 simID:(id)a4;
+ (unsigned long long)IMReadAttachmentPreviewTranscodingQualitySizeCarrierValueForPhoneNumber:(id)a0 simID:(id)a1;
+ (int)IMMMSMaxRecipientsForPhoneNumber:(id)a0 simID:(id)a1;
+ (BOOL)MMSRestrictedModeEnabledForPhoneNumber:(id)a0 simID:(id)a1 reset:(BOOL)a2;
+ (id)IMUniqueIdentifierForPhoneNumber:(id)a0 simID:(id)a1;
+ (double)IMMMSMaximumDurationWithPreset:(id)a0 phoneNumber:(id)a1 simID:(id)a2;

@end
