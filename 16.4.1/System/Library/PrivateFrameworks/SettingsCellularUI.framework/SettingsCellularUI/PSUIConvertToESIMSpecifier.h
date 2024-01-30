@class TSSIMSetupFlow, NSString, UINavigationController, PSListController;

@interface PSUIConvertToESIMSpecifier : PSSpecifier <TSSIMSetupDelegate, PSUILocalConvertModelDelegate> {
    TSSIMSetupFlow *_flow;
    NSString *_phoneNumber;
    NSString *_carrierName;
    PSListController *_hostController;
    UINavigationController *_navigationController;
    BOOL _isViewControllerPopNeeded;
    NSString *_iccid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getLogger;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_convertToeSIM;
- (void)_showWifiAlert;
- (void)convertToeSIMCellPressed:(id)a0;
- (id)initWithPhoneNumber:(id)a0 carrierName:(id)a1 hostController:(id)a2 isViewControllerPopNeeded:(BOOL)a3 iccid:(id)a4;
- (void)odcCanceled:(id)a0;
- (void)odcFailed:(id)a0;
- (void)odcSuccess:(id)a0 isViewControllerPopNeeded:(BOOL)a1;
- (void)simSetupFlowCompleted:(unsigned long long)a0;

@end
