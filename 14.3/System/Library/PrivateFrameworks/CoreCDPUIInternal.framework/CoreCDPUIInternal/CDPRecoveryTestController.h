@class NSArray, UINavigationController, CDPDBackupInfoRecoveryFlowController;

@interface CDPRecoveryTestController : NSObject {
    CDPDBackupInfoRecoveryFlowController *_recoveryController;
    NSArray *_mockDevices;
    UINavigationController *_navController;
}

- (void).cxx_destruct;
- (void)setUp;
- (id)initWithDevices:(id)a0 andNavigationController:(id)a1;
- (void)beginIDMSRecoveryFlowWithSecretFailure;
- (void)beginIDMSRecoveryFlow;
- (id)dummyRecoveryInfo;

@end
