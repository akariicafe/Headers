@class UIFont, NSString, HKSource, UIImageView, UILabel;

@interface WDDataTableViewCell : UITableViewCell {
    UIImageView *_imageView;
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
}

@property (retain, nonatomic) UIFont *bodyFont;
@property (retain, nonatomic) HKSource *source;
@property (retain, nonatomic) NSString *displayValue;
@property (retain, nonatomic) NSString *dateString;
@property (nonatomic) BOOL displayValueAdjustsFontSizeToFitWidth;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)textLabel;
- (void)_contentSizeCategoryDidChange:(id)a0;
- (id)imageView;
- (void)dealloc;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)detailTextLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })detailTextLabelFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textLabelFrame;

@end
