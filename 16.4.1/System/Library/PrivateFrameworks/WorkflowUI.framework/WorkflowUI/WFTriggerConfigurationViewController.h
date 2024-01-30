@class NSString, WFTrigger;
@protocol WFTriggerConfigurationViewControllerDelegate;

@interface WFTriggerConfigurationViewController : UIViewController <WFTriggerConfigurationClass>

@property (readonly, nonatomic) unsigned long long mode;
@property (retain, nonatomic) WFTrigger *trigger;
@property (weak, nonatomic) id<WFTriggerConfigurationViewControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL shouldEnableNextButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewControllerClassForTriggerClass:(Class)a0;

- (void)finish;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)isModalInPresentation;
- (void)dismiss:(id)a0;
- (id)initWithTrigger:(id)a0 mode:(unsigned long long)a1;
- (void)updateNextButtonEnabledState;

@end
