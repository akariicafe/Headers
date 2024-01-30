@class WFTriggerManager, WFTrigger;
@protocol WFTriggerConfigurationViewControllerDelegate;

@interface WFTriggerConfigurationViewController : UIViewController

@property (readonly, nonatomic) WFTriggerManager *triggerManager;
@property (readonly, nonatomic) unsigned long long mode;
@property (retain, nonatomic) WFTrigger *trigger;
@property (weak, nonatomic) id<WFTriggerConfigurationViewControllerDelegate> delegate;

- (void)finish;
- (void).cxx_destruct;
- (void)dismiss:(id)a0;
- (BOOL)isModalInPresentation;
- (void)viewDidLoad;
- (id)initWithTrigger:(id)a0 triggerManager:(id)a1 mode:(unsigned long long)a2;
- (void)updateNextButtonEnabledState;

@end
