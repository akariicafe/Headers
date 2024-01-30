@class Logger, NSString, TSSIMSetupFlow, PSListController;

@interface PSUIConvertToESIMSpecifier : PSSpecifier <TSSIMSetupDelegate> {
    Logger *_logger;
    TSSIMSetupFlow *_flow;
    NSString *_phoneNumber;
    NSString *_carrierName;
    PSListController *_hostController;
    BOOL _isViewControllerPopNeeded;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getLogger;
- (void).cxx_destruct;
- (void)dealloc;
- (void)convertToeSIMCellPressed:(id)a0;
- (void)_showWifiAlert;
- (void)_convertToeSIM;
- (void)simSetupFlowCompleted:(unsigned long long)a0;
- (id)initWithPhoneNumber:(id)a0 carrierName:(id)a1 hostController:(id)a2 isViewControllerPopNeeded:(BOOL)a3;

@end
