@class NSArray, UIAlertController;
@protocol PUDeletePhotosActionControllerDelegate;

@interface PUDeletePhotosActionController : NSObject {
    id /* block */ _completionHandler;
    id /* block */ _willDeleteHandler;
}

@property (readonly, copy, nonatomic) NSArray *_assets;
@property (readonly, copy, nonatomic) NSArray *_plAssets;
@property (readonly, copy, nonatomic) NSArray *_plAdditionalAssetsToDelete;
@property (retain, nonatomic, setter=_setMainAlertController:) UIAlertController *_mainAlertController;
@property (retain, nonatomic, setter=_setOneTimeConfirmationAlertController:) UIAlertController *_oneTimeConfirmationAlertController;
@property (readonly, nonatomic) long long action;
@property (readonly, weak, nonatomic) id<PUDeletePhotosActionControllerDelegate> delegate;
@property (nonatomic) BOOL shouldSkipDeleteConfirmation;

- (void).cxx_destruct;
- (id)initWithAction:(long long)a0 assets:(id)a1 delegate:(id)a2;
- (void)performWithWillDeleteHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)ppt_performDeleteWithoutUserConfirmationWithCompletionHandler:(id /* block */)a0;
- (void)_handleFinalUserDecisionShouldDelete:(BOOL)a0;
- (void)_runDestructiveActionWithCompletion:(id /* block */)a0;
- (void)_ensureMainAlertController;
- (void)_ensureOneTimeConfirmationAlertController;
- (void)_showOnetimeConfirmation;
- (void)_handleMainAlertConfirmed:(BOOL)a0;
- (void)_handleOneTimeAlertConfirmed;
- (void)_getDeleteActionSheetTitle:(id *)a0 destructiveButtonTitle:(id *)a1 cancelButtonTitle:(id *)a2 isDestructiveBehavior:(BOOL *)a3 forAssets:(id)a4 additionalPhotoStreamAssets:(id)a5;

@end
