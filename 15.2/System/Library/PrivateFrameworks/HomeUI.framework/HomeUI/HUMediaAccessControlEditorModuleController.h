@class NSString, HFMediaAccessControlEditorItemModule;
@protocol HUMediaAccessControlEditorModuleControllerDelegate;

@interface HUMediaAccessControlEditorModuleController : HUItemTableModuleController <UITextFieldDelegate, HUSwitchCellDelegate>

@property (readonly, weak, nonatomic) HFMediaAccessControlEditorItemModule *module;
@property (weak, nonatomic) id<HUMediaAccessControlEditorModuleControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (unsigned long long)didSelectItem:(id)a0;
- (id)updateAccessControlDescriptor:(id)a0;
- (id)initWithModule:(id)a0;
- (Class)cellClassForItem:(id)a0;
- (void)setupCell:(id)a0 forItem:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 animated:(BOOL)a2;
- (void)switchCell:(id)a0 didTurnOn:(BOOL)a1;

@end
