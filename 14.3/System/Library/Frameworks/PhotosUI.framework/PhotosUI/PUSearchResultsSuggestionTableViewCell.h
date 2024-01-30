@class UILabel;

@interface PUSearchResultsSuggestionTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *resultTitleLabel;
@property (retain, nonatomic) UILabel *resultAuxSubtitleLabel;

+ (id)_symbolConfigurationForFont:(id)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)_setupResultTitleLabel;
- (id)_setupResultAuxSubtitleLabel;
- (struct CGSize { double x0; double x1; })imageViewSize;
- (void)setAttributedTitle:(id)a0 subtitle:(id)a1 auxSubtitle:(id)a2;
- (void)setTitle:(id)a0 subtitle:(id)a1 auxSubtitle:(id)a2;
- (void)setAttributedTitle:(id)a0 resultCount:(unsigned long long)a1 categoryImage:(id)a2;
- (void)setTitle:(id)a0 resultCount:(unsigned long long)a1 categoryImage:(id)a2;
- (BOOL)hasAccessory;
- (BOOL)shouldUseAccessibilityLayout;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets;
- (void)_setupSubviews;
- (void)_preferredContentSizeChanged:(id)a0;

@end
