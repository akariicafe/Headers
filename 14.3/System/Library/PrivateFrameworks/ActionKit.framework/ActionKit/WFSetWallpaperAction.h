@interface WFSetWallpaperAction : WFAction

+ (id)userInterfaceProtocol;
+ (id)unableToGetImageError;

- (void)runAsynchronouslyWithInput:(id)a0;
- (void)setWallpaperWithImage:(id)a0;
- (void)getImageForAsset:(id)a0 completion:(id /* block */)a1;
- (double)preferredMaximumSize;
- (id)locationParameterValues;
- (id)readableLocationParameterValues;
- (long long)wallpaperLocationFromLocationParameter;
- (id)imageTooLargeError;
- (id)invalidLocationErrorWithProvidedLocation:(id)a0;
- (id)missingImageError;
- (id)setWallpaperFailedError;

@end
