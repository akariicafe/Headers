@class WFModuleModel, NSArray, WFAction;

@interface WFModuleDragController : WFComponentDragController

@property (retain, nonatomic) WFModuleModel *model;
@property (readonly, nonatomic) WFAction *sourceAction;
@property (copy, nonatomic) NSArray *actions;

+ (id)componentForModel:(id)a0 context:(id)a1;

- (void).cxx_destruct;
- (void)reset;
- (void)loadView;
- (void)componentHostingViewDidInvalidateSize:(id)a0;
- (id)initWithGestureRecognizer:(id)a0 sourceAction:(id)a1;
- (long long)sizeRangeFlexibility;
- (void)updateCurrentViewControllers;

@end
