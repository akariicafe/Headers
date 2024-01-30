@class UITextView, NSMutableDictionary, SLSheetTextComposeView, UILabel, UIView, NSMutableArray;

@interface SLSheetContentView : UIView {
    SLSheetTextComposeView *_textComposeView;
    NSMutableArray *_constraints;
    NSMutableDictionary *_intrinsicSizes;
    double _previewTopMargin;
    double _textViewTopMargin;
    UIView *_bottomSeparator;
    UIView *_autoCompletionModeSeparator;
    BOOL _autoCompletionMode;
    double _autoCompletionTextViewHeight;
}

@property (retain, nonatomic) UIView *previewView;
@property (readonly, nonatomic) UITextView *textView;
@property (readonly, nonatomic) UILabel *placeholderLabel;
@property (retain, nonatomic) UIView *accessoryView;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)_setupConstraints;
- (void)_setupView;
- (void)_setConstraints;
- (void)setIntrinsicSize:(struct CGSize { double x0; double x1; })a0 forVerticalSizeClass:(long long)a1;
- (void)endAutoCompletionMode;
- (void)preflightAutoCompletionModeWithApparentHeight:(double)a0;
- (void)beginAutoCompletionMode;
- (void)_resetAccessoryView;
- (void)resetPreview;
- (double)_previewMarginForContentSize:(struct CGSize { double x0; double x1; })a0;
- (double)_textTopMarginForContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)updatePreviewMargin;
- (void)updateTextViewMargin;
- (void)adjustComposeViewForPreview;

@end
