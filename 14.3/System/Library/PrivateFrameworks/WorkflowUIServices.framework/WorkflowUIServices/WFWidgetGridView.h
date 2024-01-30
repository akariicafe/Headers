@class NSString, NSMutableArray, NSObject;
@protocol OS_os_log, WFWidgetGridViewDelegate;

@interface WFWidgetGridView : UIView <WFWidgetCellDelegate>

@property (readonly, nonatomic) unsigned long long sizeClass;
@property (readonly, nonatomic) double cornerRadius;
@property (readonly, nonatomic) NSMutableArray *cells;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (weak, nonatomic) id<WFWidgetGridViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)cellAtIndex:(unsigned long long)a0;
- (void)widgetCellWasTapped:(id)a0;
- (void)widgetCellDidTransitionToState:(long long)a0;
- (id)initWithSizeClass:(unsigned long long)a0 cornerRadius:(double)a1 log:(id)a2;
- (void)disableAllCellsExceptCell:(id)a0;
- (void)enableAllCells;
- (id)cellForWorkflowWithIdentifier:(id)a0;
- (id)workflowIdentifiersForVisibleCells;
- (void)layoutWithWorkflows:(id)a0;
- (void)addCell:(id)a0;
- (BOOL)cellExistsAtIndex:(unsigned long long)a0;
- (id)currentSizeClassString;

@end
