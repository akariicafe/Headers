@class NSString;
@protocol HUPresenceUserPickerItemModuleControllerDelegate;

@interface HUPresenceUserPickerItemModuleController : HUItemTableModuleController <UITextViewDelegate>

@property (weak, nonatomic) id<HUPresenceUserPickerItemModuleControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void).cxx_destruct;
- (BOOL)canSelectItem:(id)a0;
- (Class)cellClassForItem:(id)a0;
- (void)updateCell:(id)a0 forItem:(id)a1 animated:(BOOL)a2;
- (unsigned long long)didSelectItem:(id)a0;
- (BOOL)canSelectDisabledItem:(id)a0;
- (void)accessoryButtonTappedForItem:(id)a0;
- (id)_showAlertForConfirmationPrompt:(id)a0;

@end
