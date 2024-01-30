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

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupConstraints;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_setConstraints;
- (void)_setupView;
- (double)_previewMarginForContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)_resetAccessoryView;
- (double)_textTopMarginForContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)adjustComposeViewForPreview;
- (void)beginAutoCompletionMode;
- (void)endAutoCompletionMode;
- (void)preflightAutoCompletionModeWithApparentHeight:(double)a0;
- (void)resetPreview;
- (void)setIntrinsicSize:(struct CGSize { double x0; double x1; })a0 forVerticalSizeClass:(long long)a1;
- (void)updatePreviewMargin;
- (void)updateTextViewMargin;

@end
