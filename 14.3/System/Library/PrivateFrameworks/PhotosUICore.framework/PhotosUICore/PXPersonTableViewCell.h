@class UIImageView, UIImage, NSString;

@interface PXPersonTableViewCell : UITableViewCell

@property (retain, nonatomic, setter=_setPersonIconImageView:) UIImageView *_personIconImageView;
@property (retain, nonatomic, setter=_setPersonMonogramImage:) UIImage *_personMonogramImage;
@property (retain, nonatomic) UIImage *personIcon;
@property (copy, nonatomic) NSString *personFirstName;
@property (copy, nonatomic) NSString *personLastName;
@property (nonatomic) BOOL useImageSize;

- (void).cxx_destruct;
- (void)_updatePersonIconImageView;
- (void)prepareForReuse;
- (void)layoutSubviews;

@end
