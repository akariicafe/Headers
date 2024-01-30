@class NSArray, NSOrderedSet, NSSet, UIAlertController, NSString;

@interface PXActionMenuController : NSObject <PXActionPerformerDelegate> {
    BOOL _actionsNeedsUpdate;
}

@property (readonly, nonatomic) NSArray *availableActionTypes;
@property (readonly, nonatomic) NSArray *actionManagers;
@property (copy, nonatomic) NSOrderedSet *defaultActivityTypeOrder;
@property (copy, nonatomic) NSSet *disabledActionTypes;
@property (copy, nonatomic) NSSet *excludedActionTypes;
@property (readonly, nonatomic) NSArray *alertActionTypes;
@property (readonly, nonatomic) NSArray *alertActions;
@property (readonly, nonatomic) NSArray *alertActionViewControllers;
@property (readonly, nonatomic) NSArray *activityActions;
@property (readonly, nonatomic) UIAlertController *alertController;
@property (readonly, nonatomic) NSArray *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)initWithActionManagers:(id)a0;
- (BOOL)shouldAllowPerformanceOfActionType:(id)a0;
- (void)_updateActionsIfNeeded;
- (void)invalidateActions;

@end
