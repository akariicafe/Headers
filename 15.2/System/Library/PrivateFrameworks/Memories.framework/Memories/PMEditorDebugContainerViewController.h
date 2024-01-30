@class VEKProduction, MiroBlueprint, PMDebugPickerViewController;
@protocol PMPlayerControlling;

@interface PMEditorDebugContainerViewController : UIViewController

@property (retain, nonatomic) PMDebugPickerViewController *moodPartPicker;
@property (weak, nonatomic) id<PMPlayerControlling> playerController;
@property (retain, nonatomic) MiroBlueprint *blueprint;
@property (weak, nonatomic) VEKProduction *production;
@property (nonatomic) unsigned long long pickerMode;

- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)prepareForSegue:(id)a0 sender:(id)a1;
- (void).cxx_destruct;

@end
