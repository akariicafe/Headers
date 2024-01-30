@class UIView, NSString, _UIContentViewEditingConfiguration, UILongPressGestureRecognizer, _UIContentViewLabelConfiguration, UITextField, _UIPassthroughScrollInteraction, UILabel;

@interface _UIContentViewEditingController : NSObject <UITextFieldDelegate, UIGestureRecognizerDelegate, _UIPassthroughScrollInteractionDelegate> {
    UILongPressGestureRecognizer *_longPressRecognizer;
    _UIPassthroughScrollInteraction *_passthroughInteraction;
    BOOL _hasEdits;
}

@property (retain, nonatomic) UITextField *textInputView;
@property (readonly, weak, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UILabel *editableLabel;
@property (readonly, nonatomic) _UIContentViewEditingConfiguration *editingConfiguration;
@property (readonly, nonatomic) _UIContentViewLabelConfiguration *labelConfiguration;
@property (readonly, nonatomic, getter=isDisplayingEditedText) BOOL displayingEditedText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)passthroughScrollInteractionDidRecognize:(id)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void).cxx_destruct;
- (void)longPressRecognizerChanged:(id)a0;
- (BOOL)passthroughScrollInteraction:(id)a0 shouldInteractAtLocation:(struct CGPoint { double x0; double x1; })a1 withEvent:(id)a2;
- (BOOL)makeTextInputFirstResponder;
- (id)initWithContentView:(id)a0 editableLabel:(id)a1;
- (void)textFieldDidEndEditing:(id)a0;
- (void)updateLabelConfiguration:(id)a0 editingConfiguration:(id)a1;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)dealloc;
- (BOOL)textFieldShouldEndEditing:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;

@end
