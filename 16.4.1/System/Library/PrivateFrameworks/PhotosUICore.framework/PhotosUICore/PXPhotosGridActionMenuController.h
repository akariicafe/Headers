@class NSArray;

@interface PXPhotosGridActionMenuController : PXActionMenuController

@property (copy, nonatomic) NSArray *additionalActionTypes;

- (void).cxx_destruct;
- (id)_defaultActionTypes;
- (id)availableActionTypes;
- (id)initWithActionManagers:(id)a0;
- (id)initWithActionManagers:(id)a0 selectionManager:(id)a1;
- (BOOL)shouldAllowPerformanceOfActionType:(id)a0;

@end
