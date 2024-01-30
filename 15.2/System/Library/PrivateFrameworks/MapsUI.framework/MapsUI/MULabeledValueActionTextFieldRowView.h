@class UIColor, NSString, UITextView, UILayoutGuide, UIView;
@protocol MULabeledValueActionTextFieldRowViewDelegate, MULabelViewProtocol;

@interface MULabeledValueActionTextFieldRowView : MUPlaceSectionRowView <UITextViewDelegate> {
    UIView<MULabelViewProtocol> *_titleLabel;
    UITextView *_valueTextField;
    UILayoutGuide *_titleValueLayoutGuide;
}

@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) NSString *placeholderText;
@property (retain, nonatomic) UIColor *placeholderColor;
@property (weak, nonatomic) id<MULabeledValueActionTextFieldRowViewDelegate> delegate;
@property (nonatomic) unsigned long long maximumNumberOfLines;
@property (nonatomic) unsigned long long maximumNumberOfCharacters;
@property (readonly, nonatomic, getter=isEditing) BOOL editing;
@property (copy, nonatomic) NSString *currentTextFieldValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)textView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupConstraints;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (void)textViewDidBeginEditing:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)_setupSubviews;
- (void)textViewDidEndEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)setCurrentTextFieldValueIfNeeded:(id)a0;

@end
