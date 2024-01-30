@class HFNamingComponents, NSString, HUNameItemModule;

@interface HUNameItemModuleController : HUItemTableModuleController <HUNameAndIconEditorCellDelegate, HUIconPickerViewControllerDelegate>

@property (retain, nonatomic) HUNameItemModule *nameModule;
@property (readonly, nonatomic) BOOL supportsCustomIconEditing;
@property (retain, nonatomic) HFNamingComponents *namingComponent;
@property (nonatomic) BOOL nameFieldHasClearButton;
@property (nonatomic) BOOL showIcon;
@property (nonatomic) BOOL shouldUseAccessoryName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)prepareForCommit;
- (void)_setBuilderName:(id)a0;
- (id)_builderName;
- (void)_cleanupTextFieldSetBuilderName;
- (void)nameAndIconEditorCellDidTapIcon:(id)a0;
- (void)iconPickerDidCancel:(id)a0;
- (void)iconPicker:(id)a0 didPickIconDescriptor:(id)a1;
- (id)initWithModule:(id)a0 host:(id)a1;
- (Class)cellClassForItem:(id)a0;
- (void)setupCell:(id)a0 forItem:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 animated:(BOOL)a2;
- (BOOL)shouldManageTextFieldForItem:(id)a0;
- (id)placeholderTextForTextField:(id)a0 item:(id)a1;
- (id)currentTextForTextField:(id)a0 item:(id)a1;
- (void)textDidChange:(id)a0 forTextField:(id)a1 item:(id)a2;
- (void)textFieldDidEndEditing:(id)a0 item:(id)a1;
- (void)cancelNameEdit;

@end
