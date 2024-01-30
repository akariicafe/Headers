@interface NPKAudioPlayer : NSObject

+ (void)_playSoundsWithIdentifier:(unsigned int)a0;
+ (void)_playSoundsWithFallbackHapticIfNecessaryForSoundIdentifier:(unsigned int)a0;
+ (void)playProvisioningSuccessHaptic;
+ (void)playProvisioningFailureHaptic;
+ (void)playTransactionSuccessHaptic;
+ (void)playTransactionFailureHaptic;
+ (void)playAccessScanCompleteHaptic;
+ (void)playSessionStartFailureHaptic;
+ (void)playSessionTimeoutHaptic;
+ (void)playWarsawHaptic;
+ (void)playInAppPaymentSuccessHaptic;
+ (void)playInAppPaymentFailureHaptic;
+ (void)playTransactionAuthenticationHaptic;
+ (void)playIdentityReaderConnectionStartHaptic;
+ (void)playIdentityReaderConnectionCompleteHaptic;

@end
