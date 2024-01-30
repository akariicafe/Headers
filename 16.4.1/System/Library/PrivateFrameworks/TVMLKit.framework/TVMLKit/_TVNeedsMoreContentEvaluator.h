@class UIScrollView, IKViewElement;

@interface _TVNeedsMoreContentEvaluator : NSObject

@property (nonatomic) long long state;
@property (nonatomic) double threshold;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) long long axis;
@property (retain, nonatomic) IKViewElement *viewElement;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)evaluateForState:(long long)a0;
- (id)initWithScrollView:(id)a0 axis:(long long)a1;

@end
