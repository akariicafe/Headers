@interface NPKAudioPlayer : NSObject

+ (void)_playSoundsWithFallbackHapticIfNecessaryForSoundIdentifier:(unsigned int)a0;
+ (void)_playSoundsWithIdentifier:(unsigned int)a0;
+ (void)playAccessScanCompleteHaptic;
+ (void)playIdentityReaderConnectionCompleteHaptic;
+ (void)playIdentityReaderConnectionStartHaptic;
+ (void)playInAppPaymentFailureHaptic;
+ (void)playInAppPaymentSuccessHaptic;
+ (void)playProvisioningFailureHaptic;
+ (void)playProvisioningSuccessHaptic;
+ (void)playSessionStartFailureHaptic;
+ (void)playSessionTimeoutHaptic;
+ (void)playTerminalRequestedAuthenticationHaptic;
+ (void)playTransactionAuthenticationHaptic;
+ (void)playTransactionFailureHaptic;
+ (void)playTransactionSuccessHaptic;
+ (void)playWarsawHaptic;

@end
