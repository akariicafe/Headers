@class UIStackView, NSString, UIImageView, MTVisualStylingProvider, UILabel, UIView, NSLayoutConstraint;

@interface SBHAddWidgetSheetAppCollectionViewCell : UICollectionViewCell <SBHAddWidgetSheetAppCollectionViewCellConfigurable> {
    BOOL _isFocused;
}

@property (retain, nonatomic) UILabel *detailTextLabel;
@property (retain, nonatomic) UIStackView *horizontalStackView;
@property (retain, nonatomic) UIStackView *verticalStackView;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) NSLayoutConstraint *iconHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *iconWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *leadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *trailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *topConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *separatorLeadingConstraint;
@property (nonatomic) BOOL textLabelHasVisualStyling;
@property (nonatomic) BOOL imageViewHasVisualStyling;
@property (nonatomic) unsigned long long addWidgetSheetStyle;
@property (nonatomic, getter=isSeparatorVisible) BOOL separatorVisible;
@property (nonatomic, getter=isSeparatorAlignedToLabels) BOOL separatorAlignedToLabels;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } contentInsets;
@property (nonatomic) double contentHorizontalSpacing;
@property (nonatomic) struct SBIconImageInfo { struct CGSize { double width; double height; } size; double scale; double continuousCornerRadius; } iconImageInfo;
@property (copy, nonatomic) NSString *detailText;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) BOOL imageViewRequiresVisualStyling;
@property (weak, nonatomic) MTVisualStylingProvider *visualStylingProvider;

- (void)_contentSizeCategoryDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;
- (void)dealloc;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (id)_textLabelFont;
- (id)_detailTextLabelFont;
- (unsigned long long)_textLabelNumberOfLines;
- (void)setAddWidgetSheetAppCollectionViewCellTitle:(id)a0;
- (void)setAddWidgetSheetAppCollectionViewCellIconImage:(id)a0;
- (void)_updateSeparatorLeadingConstraint;
- (void)_updateAppearanceForFocus;
- (void)_updateTableViewStyle;
- (void)_updateVisualStylingForTextLabel;
- (void)_updateVisualStylingForImageView;
- (long long)_uiHIFontStyle;

@end
