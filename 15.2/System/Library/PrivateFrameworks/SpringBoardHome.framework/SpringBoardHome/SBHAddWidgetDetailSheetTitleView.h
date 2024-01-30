@class UILabel, UIImageView, SBHAddWidgetDetailSheetViewController;

@interface SBHAddWidgetDetailSheetTitleView : UIView <SBHAddWidgetSheetAppCollectionViewCellConfigurable> {
    SBHAddWidgetDetailSheetViewController *_delegate;
}

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) struct SBIconImageInfo { struct CGSize { double width; double height; } size; double scale; double continuousCornerRadius; } iconImageInfo;
@property (readonly, nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } contentInsets;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_contentSizeCategoryDidChange:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)dealloc;
- (id)_textLabelFont;
- (id)initWithIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0 contentInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (unsigned long long)_textLabelNumberOfLines;
- (void)setAddWidgetSheetAppCollectionViewCellTitle:(id)a0;
- (void)setAddWidgetSheetAppCollectionViewCellIconImage:(id)a0;

@end
