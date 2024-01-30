@class AVTAvatarEditorViewController, NSArray, AVTAvatarRecordDataSource, AVTAvatarActionsProvider, AVTViewSessionProvider, AVTUIEnvironment, NSString;
@protocol AVTAvatarActionsControllerDelegate;

@interface AVTAvatarInlineActionsController : NSObject <AVTAvatarActionsModelDelegate, AVTAvatarEditorViewControllerDelegate, AVTAvatarActionsController>

@property (retain, nonatomic) NSArray *inlineActionButtons;
@property (nonatomic) BOOL buttonsDisabled;
@property (retain, nonatomic) AVTAvatarRecordDataSource *dataSource;
@property (retain, nonatomic) AVTAvatarActionsProvider *actionsModel;
@property (retain, nonatomic) AVTAvatarEditorViewController *editorViewController;
@property (readonly, nonatomic) AVTViewSessionProvider *avtViewSessionProvider;
@property (readonly, nonatomic) AVTUIEnvironment *environment;
@property (nonatomic) BOOL isCreatingAvatar;
@property (nonatomic) BOOL shouldHideUserInfoView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AVTAvatarActionsControllerDelegate> delegate;

+ (id)buttonForAction:(id)a0;

- (void).cxx_destruct;
- (void)avatarEditorViewController:(id)a0 didFinishWithAvatarRecord:(id)a1;
- (void)avatarEditorViewControllerDidCancel:(id)a0;
- (void)confirmShouldDeleteRecord:(id)a0 sender:(id)a1 resultBlock:(id /* block */)a2;
- (id)initWithDataSource:(id)a0 avtViewProvider:(id)a1 environment:(id)a2;
- (void)performCreateForActionsModel:(id)a0;
- (void)performDeleteForActionsModel:(id)a0;
- (void)performDuplicateForActionsModel:(id)a0;
- (void)performEdit;
- (void)performEditForActionsModel:(id)a0;
- (void)presentEditor:(id)a0 forCreating:(BOOL)a1;
- (void)updateForChangedContentCategorySize;
- (void)updateWithActionsModel:(id)a0;

@end
