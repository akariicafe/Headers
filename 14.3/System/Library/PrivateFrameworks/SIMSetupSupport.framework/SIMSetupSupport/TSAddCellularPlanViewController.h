@class NSString;
@protocol TSSIMSetupFlowDelegate;

@interface TSAddCellularPlanViewController : OBWelcomeController <UINavigationControllerDelegate, TSSetupFlowItem> {
    BOOL _allowDismiss;
}

@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_cancelButtonTapped;
- (void)_doneButtonTapped;
- (void)viewDidLoad;
- (id)initWithType:(unsigned long long)a0 allowDismiss:(BOOL)a1;

@end
