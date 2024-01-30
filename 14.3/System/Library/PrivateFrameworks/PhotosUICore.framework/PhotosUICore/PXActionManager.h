@class NSSet;
@protocol PXActionPerformerDelegate;

@interface PXActionManager : NSObject

@property (weak, nonatomic) id<PXActionPerformerDelegate> performerDelegate;
@property (copy, nonatomic) NSSet *allowedActionTypes;

+ (id /* block */)_unlockDeviceHandler;
+ (void)setEnsureUnlockedDeviceHandler:(id /* block */)a0;

- (id)alertActionForActionType:(id)a0;
- (void).cxx_destruct;
- (id)systemImageNameForActionType:(id)a0;
- (id)localizedTitleForActionType:(id)a0 useCase:(unsigned long long)a1;
- (id)barButtonItemForActionType:(id)a0;
- (id)activityForActionType:(id)a0;
- (id)actionPerformerForActionType:(id)a0;
- (BOOL)isActionTypeAllowed:(id)a0;
- (id)alertActionViewControllerForActionType:(id)a0;
- (id)previewActionForActionType:(id)a0 image:(id)a1;
- (BOOL)canPerformActionType:(id)a0;

@end
