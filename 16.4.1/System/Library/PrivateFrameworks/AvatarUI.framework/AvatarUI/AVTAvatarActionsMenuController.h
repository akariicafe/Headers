@class AVTAvatarEditorViewController, AVTAvatarRecordDataSource, AVTViewSessionProvider, AVTAvatarActionsProvider, NSString, AVTUIEnvironment, UIMenu;
@protocol AVTAvatarActionsControllerDelegate;

@interface AVTAvatarActionsMenuController : NSObject <AVTAvatarActionsModelDelegate, AVTAvatarEditorViewControllerDelegate, AVTAvatarActionsController>

@property (retain, nonatomic) AVTAvatarRecordDataSource *dataSource;
@property (retain, nonatomic) AVTAvatarActionsProvider *actionsModel;
@property (retain, nonatomic) UIMenu *actionsMenu;
@property (retain, nonatomic) AVTAvatarEditorViewController *editorViewController;
@property (readonly, nonatomic) AVTViewSessionProvider *avtViewSessionProvider;
@property (readonly, nonatomic) AVTUIEnvironment *environment;
@property (nonatomic) BOOL isCreatingAvatar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AVTAvatarActionsControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)avatarEditorViewController:(id)a0 didFinishWithAvatarRecord:(id)a1;
- (void)avatarEditorViewControllerDidCancel:(id)a0;
- (void)confirmShouldDeleteRecord:(id)a0 resultBlock:(id /* block */)a1;
- (id)initWithDataSource:(id)a0 avtViewProvider:(id)a1 environment:(id)a2;
- (void)performCreateForActionsModel:(id)a0;
- (void)performDeleteForActionsModel:(id)a0;
- (void)performDuplicateForActionsModel:(id)a0;
- (void)performEditForActionsModel:(id)a0;
- (void)presentEditor:(id)a0 forCreating:(BOOL)a1;
- (void)updateForChangedContentCategorySize;
- (void)updateWithActionsModel:(id)a0;

@end
