@class NSLayoutConstraint, _MKRightImageButton;

@interface MKPlaceInfoSuggestAnEditRowView : MKPlaceSectionRowView {
    _MKRightImageButton *_suggestAnEditButton;
    NSLayoutConstraint *_topToTitleVerticalConstraint;
    NSLayoutConstraint *_titleToBottomVerticalConstraint;
}

@property (copy, nonatomic) id /* block */ selectionBlock;

- (void)_updateFonts;
- (void)_suggestAnEditButtonPressed;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupSubviews;
- (void)_contentSizeDidChange;
- (void)_updateConstraints;

@end
