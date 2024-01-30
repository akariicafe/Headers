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

- (void)setPlaceholder:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)textFieldDidEndEditing:(id)a0;
- (void)setInputView:(id)a0;
- (BOOL)isNegative;
- (void)tintColorDidChange;
- (void)dealloc;
- (void)layoutSubviews;
- (void)deleteBackward;
- (void)beginEditing;
- (void)endEditing;
- (BOOL)textViewShouldBeginEditing:(id)a0;
- (void)setTextDelegate:(id)a0;
- (void)p_insertString:(id)a0;
- (void)insertDecimalSeparator;
- (void)insertNumber:(long long)a0;
- (void)p_parseText:(id)a0;
- (void)parseText;
- (void)setTextTag:(long long)a0;
- (void)toggleNegative;

@end
