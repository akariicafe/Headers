@class UINavigationController, NSString, TSSIMSetupFlow;
@protocol PSUILocalConvertModelDelegate;

@interface ConvertToESIMSpecifierCache : NSObject <TSSIMSetupDelegate>

@property (retain) TSSIMSetupFlow *flow;
@property (weak) UINavigationController *navigationController;
@property BOOL isViewControllerPopNeeded;
@property (retain) NSString *iccid;
@property (retain) id<PSUILocalConvertModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getLogger;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 isViewControllerPopNeeded:(BOOL)a1 odcFlow:(id)a2 delegate:(id)a3 iccid:(id)a4;
- (void)simSetupFlowCompleted:(unsigned long long)a0;

@end
