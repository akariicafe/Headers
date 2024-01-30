@class NSArray, NSString, NSObject;
@protocol OS_os_log, WFWidgetGridViewDelegate;

@interface WFWidgetGridView : UIView <WFWidgetCellDelegate>

@property (retain, nonatomic) NSArray *workflows;
@property (nonatomic) struct CGSize { double width; double height; } lastKnownSize;
@property (readonly, nonatomic) long long family;
@property (readonly, nonatomic) double cornerRadius;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSString *lastKnownContentSizeCategory;
@property (weak, nonatomic) id<WFWidgetGridViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)widgetCellDidTransitionToState:(long long)a0;
- (id)cellAtIndex:(unsigned long long)a0;
- (BOOL)cellExistsAtIndex:(unsigned long long)a0;
- (id)cellForWorkflowWithIdentifier:(id)a0;
- (void)disableAllCellsExceptCell:(id)a0;
- (void)enableAllCells;
- (id)initWithFamily:(long long)a0 cornerRadius:(double)a1 log:(id)a2;
- (void)layoutWithWorkflows:(id)a0;
- (void)widgetCellWasTapped:(id)a0;
- (id)workflowIdentifiersForVisibleCells;

@end
