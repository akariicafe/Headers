@class UIView, NSString, UIImage, CNAvatarViewController, UILabel, UIImageView, CNContact, PXRoundImageView, UIColor;

@interface PXCMMComposeRecipientTableViewCell : UITableViewCell {
    UIView *_avatarView;
    UIView *_contactAvatarView;
    CNAvatarViewController *_contactAvatarViewController;
    PXRoundImageView *_customAvatarImageView;
    UILabel *_localizedNameLabel;
    UILabel *_transportLabel;
    UIImageView *_accessoryImageView;
}

@property (copy, nonatomic) NSString *localizedName;
@property (nonatomic) BOOL emphasizeLocalizedName;
@property (copy, nonatomic) NSString *transport;
@property (retain, nonatomic) UIImage *faceImage;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) CNContact *contact;
@property (nonatomic) double inset;
@property (nonatomic) struct CGSize { double width; double height; } faceImageViewSize;
@property (retain, nonatomic) UIView *popoverSourceView;
@property (nonatomic) int currentRequestID;
@property (nonatomic, getter=isChecked) BOOL checked;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_updateLayout;
- (void)_updateAvatarView;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)_updateLocalizedNameLabel;
- (void)_updateTransportLabel;
- (void)_updateAccessoryImageView;

@end
