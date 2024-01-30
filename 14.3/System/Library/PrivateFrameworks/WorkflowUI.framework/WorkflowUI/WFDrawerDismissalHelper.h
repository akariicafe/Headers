@class UIScrollView, WFDrawerDismissalPanMediator, NSHashTable;
@protocol WFDrawerDismissalHelperDelegate;

@interface WFDrawerDismissalHelper : NSObject

@property (readonly, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) NSHashTable *activeGestureRecognizers;
@property (retain, nonatomic) WFDrawerDismissalPanMediator *panMediator;
@property (nonatomic) BOOL didDismiss;
@property (nonatomic) double dismissalRectTopEdge;
@property (nonatomic) double currentInsideness;
@property (weak, nonatomic) id<WFDrawerDismissalHelperDelegate> delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (void)handlePanGesture:(id)a0;
- (id)initWithScrollView:(id)a0;
- (void)panGestureRecognizerDidBegin:(id)a0;
- (void)panGestureRecognizerDidEnd:(id)a0;
- (void)panGestureDidChange:(id)a0;
- (double)insidenessForGestureRecognizer:(id)a0;
- (void)dismissCardWithVelocity:(double)a0;
- (void)dismissCardWithPanGestureRecognizer:(id)a0;

@end
