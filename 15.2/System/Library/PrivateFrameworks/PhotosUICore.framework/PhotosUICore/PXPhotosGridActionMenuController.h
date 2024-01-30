@class NSArray;

@interface PXPhotosGridActionMenuController : PXActionMenuController

@property (copy, nonatomic) NSArray *additionalActionTypes;

- (void).cxx_destruct;
- (id)initWithActionManagers:(id)a0;
- (id)initWithActionManagers:(id)a0 selectionManager:(id)a1;
- (id)_defaultActionTypes;
- (id)availableActionTypes;
- (BOOL)shouldAllowPerformanceOfActionType:(id)a0;

@end
