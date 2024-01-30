@interface TVRDeviceResolutionResult : INObjectResolutionResult

+ (BOOL)supportsSecureCoding;
+ (id)confirmationRequiredWithDeviceToConfirm:(id)a0;
+ (id)disambiguationWithDevicesToDisambiguate:(id)a0;
+ (id)successWithResolvedDevice:(id)a0;

@end
