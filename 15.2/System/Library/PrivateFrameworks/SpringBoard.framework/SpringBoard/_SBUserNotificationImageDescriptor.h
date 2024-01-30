@class UIImage, NSString;

@interface _SBUserNotificationImageDescriptor : NSObject {
    NSString *_imagePath;
    NSString *_catalogPath;
    NSString *_catalogKey;
    UIImage *_lazy_image;
}

@property (readonly, nonatomic) UIImage *image;

- (void).cxx_destruct;
- (id)initWithImagePath:(id)a0;
- (id)initWithImageCatalogPath:(id)a0 catalogKey:(id)a1;

@end
