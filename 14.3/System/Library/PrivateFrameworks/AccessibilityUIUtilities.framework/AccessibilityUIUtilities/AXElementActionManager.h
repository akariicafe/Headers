@class AXDragManager;

@interface AXElementActionManager : NSObject

@property (readonly, nonatomic) AXDragManager *dragManager;
@property (readonly, nonatomic) BOOL isDragActive;
@property (nonatomic) BOOL shouldIncludeMedusaActions;

- (BOOL)performAction:(id)a0;
- (void).cxx_destruct;
- (id)initWithDragServiceName:(id)a0;
- (BOOL)canShowActionsForElement:(id)a0;
- (id)actionsForElement:(id)a0;
- (id)initWithDragManager:(id)a0;

@end
