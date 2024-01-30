@class HFCharacteristicTriggerBuilder, HUCharacteristicTriggerServicePickerContentViewController;
@protocol HUTriggerEditorDelegate;

@interface HUCharacteristicTriggerServicePickerViewController : HUInstructionsTableViewController

@property (readonly, nonatomic) HUCharacteristicTriggerServicePickerContentViewController *servicePickerContentViewController;
@property (readonly, nonatomic) HFCharacteristicTriggerBuilder *characteristicTriggerBuilder;
@property (readonly, nonatomic) unsigned long long mode;
@property (readonly, nonatomic) unsigned long long source;
@property (weak, nonatomic) id<HUTriggerEditorDelegate> delegate;
@property (copy, nonatomic) id /* block */ filter;

+ (BOOL)adoptsDefaultGridLayoutMargins;
+ (BOOL)canPickServicesFromSource:(unsigned long long)a0 home:(id)a1;
+ (unsigned long long)sourceForCharacteristicTriggerBuilder:(id)a0;

- (void)viewDidLoad;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;
- (id)initWithCharacteristicTriggerBuilder:(id)a0 mode:(unsigned long long)a1 source:(unsigned long long)a2 delegate:(id)a3;
- (id)initWithInstructionsItem:(id)a0 contentViewController:(id)a1;

@end
