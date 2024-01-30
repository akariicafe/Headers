@class NSString;

@interface PUPhotoKitDestructiveActionsPerformer : PUPhotoKitActionPerformer <PUDeletePhotosActionControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performUserInteractionTask;
- (void)deletePhotosActionController:(id)a0 presentConfirmationViewController:(id)a1;
- (void)deletePhotosActionController:(id)a0 dismissConfirmationViewController:(id)a1;
- (long long)destructivePhotosAction;
- (BOOL)shouldConfirmDestructiveAction;

@end
