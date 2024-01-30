@class CPUIMediaButton, UIImageView, UIImage, UILabel, NSString;

@interface CPUIListSectionHeaderView : CPSTableViewHeaderFooterView

@property (retain, nonatomic) UIImageView *artworkImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) CPUIMediaButton *mediaButton;
@property (nonatomic) BOOL showsButton;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)artworkImage;
- (id)initWithReuseIdentifier:(id)a0;
- (void)setTemplateImage:(id)a0;
- (void)configureButton:(id /* block */)a0;

@end
