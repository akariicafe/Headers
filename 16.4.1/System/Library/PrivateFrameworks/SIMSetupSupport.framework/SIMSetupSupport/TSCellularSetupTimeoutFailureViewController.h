@class NSString, OBBoldTrayButton;
@protocol TSSIMSetupFlowDelegate;

@interface TSCellularSetupTimeoutFailureViewController : TSOBTableWelcomeController <TSSIMSetupDelegate, TSSetupFlowItem> {
    OBBoldTrayButton *_continueButton;
    id viewController;
}

@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
