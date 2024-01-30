@class NSString, UIImageView, UIImage, UILabel;

@interface PXSharedLibraryRulesTableViewCell : UITableViewCell {
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_detailLabel;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *detail;
@property (retain, nonatomic) UIImage *image;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)_updateImageView;
- (void)_updateSubtitleLabel;
- (void)_updateTitleLabel;
- (void)_updateDetailLabel;

@end
