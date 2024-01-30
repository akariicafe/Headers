@class WFModuleModel, NSString, WFAction, NSHashTable, NSArray;

@interface WFActionDragController : WFComponentDragController <CKComponentHostingViewDelegate> {
    struct CGSize { double width; double height; } _initialSize;
    struct CGPoint { double x; double y; } _initialLocation;
    NSArray *_actions;
}

@property (retain, nonatomic) WFAction *sourceAction;
@property (copy, nonatomic) id /* block */ actionGenerator;
@property (retain, nonatomic) NSHashTable *viewControllers;
@property (retain, nonatomic) WFModuleModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentForModel:(id)a0 context:(id)a1;

- (void)updateView;
- (id)actions;
- (void).cxx_destruct;
- (void)reset;
- (void)loadView;
- (id)initWithGestureRecognizer:(id)a0;
- (void)componentHostingViewDidInvalidateSize:(id)a0;
- (id)initWithGestureRecognizer:(id)a0 sourceAction:(id)a1;
- (id)initWithGestureRecognizer:(id)a0 actionGenerator:(id /* block */)a1;
- (long long)sizeRangeFlexibility;
- (void)updateCurrentViewControllers;

@end
