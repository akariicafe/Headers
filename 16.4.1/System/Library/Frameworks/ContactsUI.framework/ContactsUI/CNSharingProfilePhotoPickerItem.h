@class UIImage, CNSharingProfileAvatarItem, NSString;

@interface CNSharingProfilePhotoPickerItem : NSObject

@property (retain, nonatomic) UIImage *cachedPreviewImage;
@property (retain, nonatomic) CNSharingProfileAvatarItem *avatarItem;
@property (retain, nonatomic) NSString *symbolImageName;

- (void).cxx_destruct;
- (id)compositeImageWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)originalImageWithSize:(struct CGSize { double x0; double x1; })a0;

@end
