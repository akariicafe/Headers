@class CALayer;

@interface UIWebOverflowContentView : UIView

@property (retain, nonatomic) CALayer *webLayer;

- (id)superview;
- (void)dealloc;
- (void)replaceLayer:(id)a0;
- (void)willBeRemoved;
- (void)fixUpViewAfterInsertion;
- (void)_setCachedSubviews:(id)a0;
- (id)initWithLayer:(id)a0;

@end
