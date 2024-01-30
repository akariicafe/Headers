@protocol HACCContentModuleDelegate;

@interface HACCMenuModuleViewController : CCUIMenuModuleViewController

@property (weak, nonatomic) id<HACCContentModuleDelegate> delegate;

- (void).cxx_destruct;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)_canShowWhileLocked;

@end
