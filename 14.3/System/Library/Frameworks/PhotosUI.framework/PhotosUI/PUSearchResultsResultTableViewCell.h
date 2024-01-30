@class UIImageView, UILabel;

@interface PUSearchResultsResultTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *resultImageView;
@property (retain, nonatomic) UILabel *resultTitleLabel;
@property (retain, nonatomic) UILabel *resultSubtitleLabel;
@property (retain, nonatomic) UILabel *resultAuxSubtitleLabel;
@property (nonatomic) unsigned long long imageCropStyle;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)_setupResultTitleLabel;
- (id)_setupResultAuxSubtitleLabel;
- (void)setAttributedTitle:(id)a0 subtitle:(id)a1 auxSubtitle:(id)a2;
- (id)_setupResultSubtitleLabel;
- (id)_setupResultImageView;
- (void)_updateCornerRadius;
- (void)_setupSubviews;
- (void)setImage:(id)a0;
- (void)_preferredContentSizeChanged:(id)a0;

@end
