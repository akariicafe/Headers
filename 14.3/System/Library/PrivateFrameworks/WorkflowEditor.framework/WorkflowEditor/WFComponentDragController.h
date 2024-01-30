@class NSArray, WFAction, CKComponentHostingView, NSString;
@protocol NSObject;

@interface WFComponentDragController : WFDragController <CKComponentProvider, CKComponentHostingViewDelegate>

@property (readonly, weak, nonatomic) CKComponentHostingView *hostingView;
@property (readonly, nonatomic) long long sizeRangeFlexibility;
@property (readonly, copy, nonatomic) WFAction *action;
@property (readonly, copy, nonatomic) NSArray *actions;
@property (retain, nonatomic) id<NSObject> model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentForModel:(id)a0 context:(id)a1;

- (void)updateView;
- (void).cxx_destruct;
- (void)loadView;
- (void)componentHostingViewDidInvalidateSize:(id)a0;
- (void)animateFromModels:(id)a0 atPositions:(id)a1 inSourceView:(id)a2;
- (void)animateToModels:(id)a0 atPositions:(id)a1 inSourceView:(id)a2 withWidth:(double)a3 completion:(id /* block */)a4;

@end
