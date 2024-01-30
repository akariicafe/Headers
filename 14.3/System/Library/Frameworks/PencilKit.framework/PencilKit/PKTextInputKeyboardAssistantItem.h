@class PKPaletteFloatingKeyboardController, NSString;
@protocol PKTextInputKeyboardAssistantItemDelegate;

@interface PKTextInputKeyboardAssistantItem : UIBarButtonItem <PKPaletteFloatingKeyboardControllerDelegate>

@property (retain, nonatomic) PKPaletteFloatingKeyboardController *floatingKeyboardController;
@property (weak, nonatomic) id<PKTextInputKeyboardAssistantItemDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)floatingKeyboardController:(id)a0 didChangeKeyboardType:(long long)a1;
- (void)floatingKeyboardControllerWillHide:(id)a0;
- (id)responderForFloatingKeyboardController:(id)a0;
- (void)floatingKeyboardControllerWillShow:(id)a0;
- (void)didAction:(id)a0;
- (id)_currentInteraction;

@end
