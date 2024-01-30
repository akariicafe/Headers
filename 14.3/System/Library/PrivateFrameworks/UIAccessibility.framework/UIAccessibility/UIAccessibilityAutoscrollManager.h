@class UIScrollView;

@interface UIAccessibilityAutoscrollManager : NSObject

@property (nonatomic, getter=isAutoscrolling) BOOL autoscrolling;
@property (nonatomic) unsigned long long scrollDirection;
@property (nonatomic) double autoscrollSpeed;
@property (retain, nonatomic) UIScrollView *scrollView;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)autoscrollInDirection:(unsigned long long)a0;
- (unsigned long long)availableAutoscrollDirections;
- (void)incrementAutoscrollSpeed;
- (void)decrementAutoscrollSpeed;
- (void)pause;
- (void)scrollToBottom;
- (void)scrollToTop;
- (void)_autoscroll;

@end
