@class NSSet;
@protocol PXActionPerformerDelegate;

@interface PXActionManager : NSObject

@property (weak, nonatomic) id<PXActionPerformerDelegate> performerDelegate;
@property (copy, nonatomic) NSSet *allowedActionTypes;

+ (void)setEnsureUnlockedDeviceHandler:(id /* block */)a0;
+ (id /* block */)_unlockDeviceHandler;

- (id)actionPerformerForActionType:(id)a0;
- (id)standardActionForActionType:(id)a0;
- (id)alertActionForActionType:(id)a0;
- (BOOL)supportsActionType:(id)a0;
- (id)activityForActionType:(id)a0;
- (id)barButtonItemForActionType:(id)a0;
- (id)localizedTitleForActionType:(id)a0 useCase:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)canPerformActionType:(id)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (id)actionKeyCommands;
- (id)contextMenu;
- (BOOL)isActionTypeAllowed:(id)a0;
- (id)previewActionForActionType:(id)a0 image:(id)a1;
- (BOOL)supportsContextMenu;
- (id)alertActionViewControllerForActionType:(id)a0;
- (id)menuElementForActionType:(id)a0 image:(id)a1 willStartActionHandler:(id /* block */)a2 didEndActionHandler:(id /* block */)a3;
- (id)systemImageNameForActionType:(id)a0;

@end
