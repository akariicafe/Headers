@interface AKCDPFactory : NSObject

+ (id)recoveryControllerWithContext:(id)a0;
+ (BOOL)cdpAccountIsICDPEnabledForDSID:(id)a0;
+ (BOOL)isWebAccessEnabled;
+ (BOOL)cdpAccountIsOTEnabledForAltDSID:(id)a0;
+ (id)followUpController;
+ (id)cdpErrorDomain;
+ (id)walrusStatusLiveValue;
+ (unsigned long long)walrusStatus;
+ (id)followUpRepairContext;
+ (BOOL)isWalrusEnabled;
+ (id)cdpIDMSRecordPRKKey;
+ (BOOL)isEligibleToArmDeviceForPCSAuth;
+ (id)context;
+ (id)cdpUIControllerWithPresentingViewController:(id)a0;
+ (id)webAccessChangeControllerForTargetStatus:(unsigned long long)a0;
+ (id)cdpStateUIController;
+ (id)cdpIDMSRecordMIDKey;
+ (id)stateControllerWithContext:(id)a0;
+ (id)webAccessStatusLiveValue;
+ (id)contextWithAuthResults:(id)a0;
+ (unsigned long long)webAccessStatus;
+ (id)accountRecoveryControllerWithPresentingViewController:(id)a0;

@end
