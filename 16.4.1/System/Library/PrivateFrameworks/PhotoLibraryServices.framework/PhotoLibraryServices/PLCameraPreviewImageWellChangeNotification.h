@class UIImage, NSString;

@interface PLCameraPreviewImageWellChangeNotification : PLChangeNotification {
    UIImage *_image;
    NSString *_uuid;
}

@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) NSString *assetUUID;

+ (id)notification;

- (id)object;
- (id)_init;
- (id)userInfo;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)name;

@end
