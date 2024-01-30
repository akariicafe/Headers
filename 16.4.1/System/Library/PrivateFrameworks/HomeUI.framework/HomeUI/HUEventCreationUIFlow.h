@class UINavigationController, NSString;

@interface HUEventCreationUIFlow : HUEventUIFlow <HUEventUIFlowPresentationController>

@property (retain, nonatomic) UINavigationController *navigationController;
@property (nonatomic) BOOL modalInPresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)presentationController;
- (void).cxx_destruct;
- (id)_emptyConfigurationInitialStep;
- (id)_initialStepForEventType:(unsigned long long)a0;
- (id)_summaryStepForEventType:(unsigned long long)a0;
- (id)_viewControllerForStep:(id)a0;
- (BOOL)characteristicServicePickerViewControllerAllowChangingCharacteristic:(id)a0;
- (id)initWithTriggerBuilder:(id)a0 eventBuilderItem:(id)a1;
- (void)setupNavigationController;
- (void)transitionToViewController:(id)a0;

@end
