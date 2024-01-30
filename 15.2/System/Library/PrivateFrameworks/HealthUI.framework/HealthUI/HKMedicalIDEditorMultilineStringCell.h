@class UILabel, UITextView, NSString;
@protocol HKMedicalIDEditorCellHeightChangeDelegate;

@interface HKMedicalIDEditorMultilineStringCell : HKMedicalIDEditorCell <UITextViewDelegate, HKMultilineCellHeightEstimatable> {
    UILabel *_labelLabel;
    double _lastSeenTextViewContentHeight;
    UILabel *_placeholderLabel;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } textViewExtraMargins;
@property (readonly, nonatomic) UITextView *textView;
@property (readonly, nonatomic) UILabel *placeholderLabel;
@property (retain, nonatomic) NSString *stringValue;
@property (retain, nonatomic) NSString *placeholder;
@property (weak, nonatomic) id<HKMedicalIDEditorCellHeightChangeDelegate> heightChangeDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)showsLabelAndValue;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)_contentSizeCategoryDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)label;
- (void).cxx_destruct;
- (void)textViewDidChangeSelection:(id)a0;
- (void)commitEditing;
- (void)textViewDidBeginEditing:(id)a0;
- (void)dealloc;
- (void)setLabel:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (void)_labelTapped:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_cursorRectForTextView:(id)a0;
- (double)estimatedHeightWithWidth:(double)a0;

@end
