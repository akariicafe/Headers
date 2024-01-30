@class NSArray, NSOrderedSet, NSSet, UIAlertController;

@interface PXActionMenuController : NSObject {
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

- (id)init;
- (void).cxx_destruct;
- (void)_updateActionsIfNeeded;
- (id)initWithActionManagers:(id)a0;
- (void)invalidateActions;
- (BOOL)shouldAllowPerformanceOfActionType:(id)a0;

@end
