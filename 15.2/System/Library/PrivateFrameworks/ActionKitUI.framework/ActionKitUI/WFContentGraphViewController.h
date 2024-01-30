@class CKForceLayoutAnimator, WFContentItem, WFContentCoercionNodeView;

@interface WFContentGraphViewController : UIViewController

@property (retain, nonatomic) CKForceLayoutAnimator *animator;
@property (retain, nonatomic) WFContentCoercionNodeView *rootNodeView;
@property (nonatomic) BOOL coercing;
@property (readonly, nonatomic) WFContentItem *contentItem;

- (void)done;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithContentItem:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)useSmallBubbles;
- (void)tapNode:(id)a0;
- (void)panNode:(id)a0;

@end
