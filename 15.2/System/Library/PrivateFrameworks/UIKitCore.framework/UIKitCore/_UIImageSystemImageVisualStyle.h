@class UIImage, NSCache;

@interface _UIImageSystemImageVisualStyle : NSObject {
    UIImage *_closeImage;
    UIImage *_cameraImage;
    UIImage *_actionsImage;
    UIImage *_checkmarkImage;
    UIImage *_strokedCheckmarkImage;
    NSCache *__systemImageCache;
}

- (void).cxx_destruct;
- (id)init;
- (void)_contentSizeCategoryChanged;

@end
