@class UIImage, NSString;

@interface PLCameraPreviewImageWellChangeNotification : PLChangeNotification {
    UIImage *_image;
    NSString *_uuid;
}

@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) NSString *assetUUID;

+ (id)notification;

- (id)userInfo;
- (id)init;
- (void).cxx_destruct;
- (id)object;
- (id)description;
- (id)_init;
- (id)name;

@end
