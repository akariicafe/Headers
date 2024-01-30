@class UIImage, CNSharingProfileAvatarItem, NSString;

@interface CNSharingProfilePhotoPickerItem : NSObject

@property (retain, nonatomic) UIImage *cachedPreviewImage;
@property (retain, nonatomic) CNSharingProfileAvatarItem *avatarItem;
@property (retain, nonatomic) NSString *symbolImageName;

- (id)originalImageWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)compositeImageWithSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
