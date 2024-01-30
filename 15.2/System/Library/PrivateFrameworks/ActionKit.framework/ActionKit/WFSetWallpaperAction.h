@interface WFSetWallpaperAction : WFAction

+ (id)userInterfaceProtocol;
+ (id)unableToGetImageError;

- (BOOL)showPreview;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)contentDestinationWithError:(id *)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (BOOL)perspectiveZoom;
- (double)currentParallaxFactor;
- (void)setWallpaperWithImage:(id)a0;
- (id)defaultWallpaperOptions;
- (double)maximumSizeInPixels;
- (id)locationParameterValues;
- (id)readableLocationParameterValues;
- (long long)wallpaperLocationFromLocationParameter;
- (id)imageTooLargeError;
- (id)invalidLocationErrorWithProvidedLocation:(id)a0;
- (id)missingImageError;
- (id)setWallpaperFailedError;

@end
