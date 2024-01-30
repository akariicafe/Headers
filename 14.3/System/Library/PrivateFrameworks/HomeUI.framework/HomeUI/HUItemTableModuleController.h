@class HFItemModule, NSString;
@protocol HUItemTableModuleControllerHosting;

@interface HUItemTableModuleController : NSObject <HUItemTableTextEditingController>

@property (weak, nonatomic) id<HUItemTableModuleControllerHosting> host;
@property (readonly, nonatomic) HFItemModule *module;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)canSelectItem:(id)a0;
- (id)initWithModule:(id)a0;
- (id)textFieldForVisibleItem:(id)a0;
- (Class)cellClassForItem:(id)a0;
- (void)setupCell:(id)a0 forItem:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 animated:(BOOL)a2;
- (BOOL)shouldManageTextFieldForItem:(id)a0;
- (id)placeholderTextForTextField:(id)a0 item:(id)a1;
- (id)currentTextForTextField:(id)a0 item:(id)a1;
- (void)textDidChange:(id)a0 forTextField:(id)a1 item:(id)a2;
- (void)textFieldDidEndEditing:(id)a0 item:(id)a1;
- (unsigned long long)didSelectItem:(id)a0;
- (id)defaultTextForTextField:(id)a0 item:(id)a1;
- (void)textFieldDidBeginEditing:(id)a0 item:(id)a1;
- (BOOL)canSelectDisabledItem:(id)a0;
- (void)accessoryButtonTappedForItem:(id)a0;
- (long long)rowAnimationForOperationType:(unsigned long long)a0 item:(id)a1 suggestedAnimation:(long long)a2;
- (id)leadingSwipeActionsForItem:(id)a0;
- (id)trailingSwipeActionsForItem:(id)a0;

@end
