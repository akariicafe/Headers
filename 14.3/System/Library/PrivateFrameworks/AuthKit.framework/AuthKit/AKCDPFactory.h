@interface AKCDPFactory : NSObject

+ (id)context;
+ (id)contextWithAuthResults:(id)a0;
+ (id)stateControllerWithContext:(id)a0;
+ (id)followUpRepairContext;
+ (BOOL)cdpAccountIsICDPEnabledForDSID:(id)a0;
+ (id)cdpStateUIController;
+ (id)accountRecoveryControllerWithPresentingViewController:(id)a0;
+ (id)cdpUIControllerWithPresentingViewController:(id)a0;
+ (id)followUpController;
+ (id)recoveryControllerWithContext:(id)a0;
+ (id)cdpIDMSRecordPRKKey;
+ (id)cdpIDMSRecordMIDKey;
+ (id)cdpErrorDomain;

@end
