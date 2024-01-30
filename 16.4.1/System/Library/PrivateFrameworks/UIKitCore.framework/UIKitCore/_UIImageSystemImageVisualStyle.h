@class UIImage, NSCache;

@interface _UIImageSystemImageVisualStyle : NSObject {
    UIImage *_closeImage;
    UIImage *_cameraImage;
    UIImage *_actionsImage;
    UIImage *_checkmarkImage;
    UIImage *_strokedCheckmarkImage;
    NSCache *__systemImageCache;
}

- (id)init;
- (void)_contentSizeCategoryChanged;
- (void).cxx_destruct;

@end
