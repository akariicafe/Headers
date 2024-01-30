@class NSString, CNContact, UIImage, UIImageView, CNAvatarViewController;

@interface PKAvatarView : UIView {
    CNAvatarViewController *_avatarViewController;
    UIImageView *_placeholderImageView;
}

@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) NSString *placeholderName;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (nonatomic) double diameter;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;

@end
