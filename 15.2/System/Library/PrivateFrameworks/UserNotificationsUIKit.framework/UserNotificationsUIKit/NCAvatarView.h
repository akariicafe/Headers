@class UIImageView, NCNotificationRequest, NSObject, MTMaterialView;
@protocol OS_dispatch_queue;

@interface NCAvatarView : UIView <NSCopying> {
    long long _userInterfaceStyle;
    UIImageView *_imageView;
    MTMaterialView *_backgroundMaterialView;
    NSObject<OS_dispatch_queue> *_avatarImageGenerationQueue;
}

@property (readonly, weak, nonatomic) NCNotificationRequest *notificationRequest;
@property (nonatomic, getter=isMaterialBacked) BOOL materialBacked;

+ (BOOL)isAvatarPossibleWithNotificationRequest:(id)a0;

- (void)layoutSubviews;
- (void)_configureBackgroundMaterialViewIfNecessary;
- (id)initWithNotificationRequest:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithNotificationRequest:(id)a0 compatibleWithInitialTraitCollection:(id)a1;
- (void)_configureImageViewIfNecessary;
- (void)_updateAvatarImageIfNecessary;
- (BOOL)_isGeneratingAvatarImage;
- (id)_systemImageNamed:(id)a0 traitCollection:(id)a1;
- (void)_loadImage:(id)a0 formatted:(BOOL)a1 animated:(BOOL)a2;
- (id)_avatarImageGenerationQueue;
- (void)_invalidateAvatarImageGenerationQueue;

@end
