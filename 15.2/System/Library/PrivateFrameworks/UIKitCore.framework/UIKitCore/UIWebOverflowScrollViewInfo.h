@class UIWebOverflowScrollView, CALayer, UIView;

@interface UIWebOverflowScrollViewInfo : NSObject {
    CALayer *_scrollViewLayer;
}

@property (retain, nonatomic) UIWebOverflowScrollView *scrollView;
@property (retain, nonatomic) UIView *oldSuperview;

- (id)initWithScrollView:(id)a0;
- (void)dealloc;

@end
