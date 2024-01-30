@class UIImage, NSString;

@interface PLCameraPreviewImageWellChangeNotification : PLChangeNotification {
    UIImage *_image;
    NSString *_uuid;
}

@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) NSString *assetUUID;

+ (id)notification;

- (id)userInfo;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)_init;
- (id)name;
- (id)object;

@end
