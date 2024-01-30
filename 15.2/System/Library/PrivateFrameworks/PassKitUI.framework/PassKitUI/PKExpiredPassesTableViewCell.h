@class PKPass, NSString, UILabel;

@interface PKExpiredPassesTableViewCell : UITableViewCell {
    BOOL _isSmall;
    BOOL _isZoomedMode;
    BOOL _isAccessibilityCategory;
    double _minimumScaleFactor;
    UILabel *_secondaryDetailTextLabel;
}

@property (retain, nonatomic) PKPass *pass;
@property (nonatomic) BOOL showImage;
@property (copy, nonatomic) NSString *primaryText;
@property (copy, nonatomic) NSString *detailText;
@property (copy, nonatomic) NSString *secondaryDetailText;

+ (double)height;
+ (struct CGSize { double x0; double x1; })imageSize;
+ (BOOL)needsFullPassImage;
+ (BOOL)isSmallPhone;
+ (BOOL)isZoomedMode;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setImage:(id)a0 forPass:(id)a1;
- (id)initWithReuseIdentifier:(id)a0 showImage:(BOOL)a1;

@end
