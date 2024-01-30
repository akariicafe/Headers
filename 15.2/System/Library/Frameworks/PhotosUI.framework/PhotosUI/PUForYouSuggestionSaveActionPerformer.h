@interface PUForYouSuggestionSaveActionPerformer : PUForYouSuggestionActionPerformer

@property (readonly, nonatomic) BOOL isReverting;

- (id)initWithAsset:(id)a0;
- (void)performWithCompletionHandler:(id /* block */)a0;
- (void)_dismissPresentedViewController:(id)a0;
- (id)initWithAsset:(id)a0 isReverting:(BOOL)a1;
- (void)_performLoopingVideoSaveWithCompletionHandler:(id /* block */)a0;
- (void)_performLivePhotoSaveWithCompletionHandler:(id /* block */)a0;
- (void)_performImageSaveWithCompletionHandler:(id /* block */)a0;
- (void)_updateSuggestionState;
- (void)_handleSuccess:(BOOL)a0;
- (void)_displayFailureAlert;

@end
