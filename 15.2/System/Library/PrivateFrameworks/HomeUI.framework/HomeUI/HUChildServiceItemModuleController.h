@class NSMapTable, HFItemBuilder, HUChildServiceEditorItemModule, NSString;
@protocol HUChildServiceModuleControllerDelegate, HFServiceLikeBuilder;

@interface HUChildServiceItemModuleController : HUItemTableModuleController <HUEditableCheckmarkDelegate>

@property (retain, nonatomic) HUChildServiceEditorItemModule *childServiceItemModule;
@property (retain, nonatomic) HFItemBuilder<HFServiceLikeBuilder> *activelyEditingNameServiceBuilder;
@property (retain, nonatomic) NSMapTable *identifyButtonMap;
@property (readonly, nonatomic) BOOL allConfigurationDisabled;
@property (weak, nonatomic) id<HUChildServiceModuleControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canSelectItem:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)didSelectItem:(id)a0;
- (id)initWithModule:(id)a0;
- (Class)cellClassForItem:(id)a0;
- (void)setupCell:(id)a0 forItem:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 animated:(BOOL)a2;
- (BOOL)shouldManageTextFieldForItem:(id)a0;
- (id)placeholderTextForTextField:(id)a0 item:(id)a1;
- (void)textDidChange:(id)a0 forTextField:(id)a1 item:(id)a2;
- (void)textFieldDidEndEditing:(id)a0 item:(id)a1;
- (id)defaultTextForTextField:(id)a0 item:(id)a1;
- (void)textFieldDidBeginEditing:(id)a0 item:(id)a1;
- (id)initWithModule:(id)a0 delegate:(id)a1;
- (BOOL)canSelectDisabledItem:(id)a0;
- (void)checkmarkTappedInCell:(id)a0 forItem:(id)a1;
- (void)updateAllConfigurationDisabled;
- (void)_identifyButtonPressed:(id)a0 forEvent:(id)a1;

@end
