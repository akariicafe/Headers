@class NSUUID;

@interface WFSetWallpaperAction : WFAction

@property (retain, nonatomic) NSUUID *createdPosterConfigurationUUID;

+ (id)userInterfaceProtocol;
+ (id)invalidPosterError;
+ (id)unableToGetImageError;

- (void)cancel;
- (void).cxx_destruct;
- (BOOL)showPreview;
- (id)contentDestinationWithError:(id *)a0;
- (BOOL)inputPassthrough;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (BOOL)perspectiveZoom;
- (id)readableLocationParameterValues;
- (void)runLegacySetWallpaperWithInput:(id)a0;
- (BOOL)supportsPosters;
- (void)buildWallpaperConfigurationFromCollection:(id)a0 completionHandler:(id /* block */)a1;
- (double)currentParallaxFactor;
- (void)deletePosterWithUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)finishAndSetCurrentPosterIfNecessary:(id)a0 isNewPoster:(BOOL)a1;
- (id)imageTooLargeError;
- (id)invalidLocationError;
- (id)invalidLocationErrorWithProvidedLocation:(id)a0;
- (id)locationParameterValues;
- (double)maximumSizeInPixels;
- (id)missingImageError;
- (id)noPosterHomeError;
- (void)preparePosterWithCompletionHandler:(id /* block */)a0;
- (long long)sbf_wallpaperLocationFromLocationParameter;
- (void)setLegacyWallpaperWithImage:(id)a0;
- (id)setWallpaperFailedError;
- (long long)wf_wallpaperLocationFromLocationParameter;

@end
