@interface AKCDPFactory : NSObject

+ (id)cdpStateUIController;
+ (id)cdpIDMSRecordPRKKey;
+ (id)stateControllerWithContext:(id)a0;
+ (id)context;
+ (BOOL)cdpAccountIsICDPEnabledForDSID:(id)a0;
+ (id)cdpIDMSRecordMIDKey;
+ (id)cdpErrorDomain;
+ (id)contextWithAuthResults:(id)a0;
+ (id)followUpController;
+ (id)followUpRepairContext;
+ (id)cdpUIControllerWithPresentingViewController:(id)a0;
+ (id)recoveryControllerWithContext:(id)a0;
+ (id)accountRecoveryControllerWithPresentingViewController:(id)a0;

@end
