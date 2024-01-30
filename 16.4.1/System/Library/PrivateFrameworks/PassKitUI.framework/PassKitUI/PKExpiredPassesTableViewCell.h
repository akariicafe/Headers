@class PKPassThumbnailView, NSString, UILabel, PKPass;

@interface PKExpiredPassesTableViewCell : UITableViewCell {
    struct configuration_t { BOOL small; } _configuration;
    BOOL _isAccessibilityCategory;
    double _minimumScaleFactor;
    PKPassThumbnailView *_thumbnailView;
    UILabel *_secondaryDetailTextLabel;
}

@property (retain, nonatomic) PKPass *pass;
@property (nonatomic) BOOL showImage;
@property (copy, nonatomic) NSString *primaryText;
@property (copy, nonatomic) NSString *detailText;
@property (copy, nonatomic) NSString *secondaryDetailText;

+ (double)height;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)a0;
- (void).cxx_destruct;

@end
