@class UIStackView, NSString, UIImageView, UILabel, UIView, NSLayoutConstraint;

@interface SBHAddWidgetSheetAppCollectionViewCell : UICollectionViewCell

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
@property (nonatomic) BOOL shouldUseTableViewStyle;
@property (nonatomic, getter=isSeparatorVisible) BOOL separatorVisible;
@property (nonatomic, getter=isSeparatorAlignedToLabels) BOOL separatorAlignedToLabels;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } contentInsets;
@property (nonatomic) double contentHorizontalSpacing;
@property (nonatomic) struct SBIconImageInfo { struct CGSize { double width; double height; } size; double scale; double continuousCornerRadius; } iconImageInfo;
@property (copy, nonatomic) NSString *detailText;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *imageView;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateSeparatorLeadingConstraint;
- (void)_updateTableViewStyle;

@end
