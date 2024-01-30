@class UIColor, NSString, NUIContainerStackView, UILabel, CNComposeRecipient;

@interface CNComposeTableViewCell : NUITableViewContainerCell <NUIContainerViewDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIColor *labelColor;
@property (retain, nonatomic) NUIContainerStackView *labelViewStack;
@property (retain, nonatomic) CNComposeRecipient *recipient;
@property (readonly, nonatomic) BOOL supportsAvatarView;
@property (nonatomic) double trailingButtonMidlineInsetFromLayoutMargin;
@property (readonly, nonatomic) double trailingButtonWidth;
@property (readonly, nonatomic) BOOL canExpandRecipient;
@property (readonly, nonatomic) BOOL canCollapseRecipient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;
+ (void)requireIntrinsicSizeForView:(id)a0;
+ (Class)containerViewClass;
+ (double)additionalSeparatorInset;
+ (id)axCappedSymbolConfigurationIsBold:(BOOL)a0;
+ (id)axCappedFontWithTextStyle:(id)a0 bold:(BOOL)a1;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutMarginsDidChange;
- (void).cxx_destruct;
- (void)containerViewDidLayoutArrangedSubviews:(id)a0;
- (struct CGSize { double x0; double x1; })containerView:(id)a0 systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a1 forArrangedSubview:(id)a2;
- (id)titleTextStyle;
- (void)labelsChangedWidth:(double)a0;
- (id)labelWithTextStyle:(id)a0;
- (double)leadingInsetsFromCurrentMargins:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a0;

@end
