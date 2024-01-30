@class UIScrollView;

@interface UIAccessibilityAutoscrollManager : NSObject

@property (nonatomic, getter=isAutoscrolling) BOOL autoscrolling;
@property (nonatomic) unsigned long long scrollDirection;
@property (nonatomic) double autoscrollSpeed;
@property (retain, nonatomic) UIScrollView *scrollView;

+ (id)sharedInstance;

- (void)scrollToTop;
- (void).cxx_destruct;
- (id)init;
- (void)pause;
- (void)_autoscroll;
- (unsigned long long)availableAutoscrollDirections;
- (void)autoscrollInDirection:(unsigned long long)a0;
- (void)incrementAutoscrollSpeed;
- (void)decrementAutoscrollSpeed;
- (void)scrollToBottom;

@end
