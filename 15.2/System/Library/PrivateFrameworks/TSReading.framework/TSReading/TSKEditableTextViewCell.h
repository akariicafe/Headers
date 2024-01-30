@class NSString, UIView, TSKPlaceholderTextView;
@protocol UITextViewDelegate;

@interface TSKEditableTextViewCell : UITableViewCell <UITextViewDelegate> {
    TSKPlaceholderTextView *mTextView;
    UIView *mInputView;
    BOOL mNumberHasDecimal;
    id<UITextViewDelegate> mSavedDelegate;
}

@property (retain, nonatomic) NSString *string;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)endEditing;
- (void)deleteBackward;
- (void)beginEditing;
- (BOOL)isNegative;
- (void)textFieldDidEndEditing:(id)a0;
- (void)setInputView:(id)a0;
- (void)tintColorDidChange;
- (void)dealloc;
- (void)setPlaceholder:(id)a0;
- (BOOL)textViewShouldBeginEditing:(id)a0;
- (void)setTextDelegate:(id)a0;
- (void)p_parseText:(id)a0;
- (void)p_insertString:(id)a0;
- (void)setTextTag:(long long)a0;
- (void)parseText;
- (void)insertNumber:(long long)a0;
- (void)insertDecimalSeparator;
- (void)toggleNegative;

@end
