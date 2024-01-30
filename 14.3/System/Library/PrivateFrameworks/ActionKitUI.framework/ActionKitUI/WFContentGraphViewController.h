@class CKForceLayoutAnimator, WFContentItem, WFContentCoercionNodeView;

@interface WFContentGraphViewController : UIViewController

@property (retain, nonatomic) CKForceLayoutAnimator *animator;
@property (retain, nonatomic) WFContentCoercionNodeView *rootNodeView;
@property (nonatomic) BOOL coercing;
@property (readonly, nonatomic) WFContentItem *contentItem;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithContentItem:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)done;
- (BOOL)useSmallBubbles;
- (void)tapNode:(id)a0;
- (void)panNode:(id)a0;

@end
