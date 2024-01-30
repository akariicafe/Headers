@interface IntentDeviceResolutionResult : INObjectResolutionResult

+ (BOOL)supportsSecureCoding;
+ (id)confirmationRequiredWithIntentDeviceToConfirm:(id)a0;
+ (id)disambiguationWithIntentDevicesToDisambiguate:(id)a0;
+ (id)successWithResolvedIntentDevice:(id)a0;

@end
