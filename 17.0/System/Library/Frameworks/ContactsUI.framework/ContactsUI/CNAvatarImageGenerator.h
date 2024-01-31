@interface CNAvatarImageGenerator : NSObject

+ (id)croppedAndCenteredAvatarImageForImage:(id)a0 scaleMultiplier:(double)a1;
+ (id)imageDataFromMetadata:(id)a0;
+ (void)imageDataFromMetadata:(id)a0 size:(struct CGSize { double x0; double x1; })a1 completionHandler:(id /* block */)a2;

@end
