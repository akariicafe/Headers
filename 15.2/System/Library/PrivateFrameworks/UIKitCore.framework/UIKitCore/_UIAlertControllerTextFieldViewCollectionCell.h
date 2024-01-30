@class _UIAlertControllerTextFieldView, UITapGestureRecognizer;

@interface _UIAlertControllerTextFieldViewCollectionCell : UICollectionViewCell {
    _UIAlertControllerTextFieldView *_textField;
    UITapGestureRecognizer *_selectButtonGesture;
}

@property (readonly, nonatomic) _UIAlertControllerTextFieldView *textField;

- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTextField:(id)a0 horizontalMargin:(double)a1;
- (void)_selectButton:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)preferredFocusedView;

@end
