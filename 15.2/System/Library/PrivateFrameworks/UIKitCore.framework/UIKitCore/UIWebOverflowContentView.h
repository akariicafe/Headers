@class CALayer;

@interface UIWebOverflowContentView : UIView

@property (retain, nonatomic) CALayer *webLayer;

- (id)superview;
- (id)initWithLayer:(id)a0;
- (void)replaceLayer:(id)a0;
- (void)willBeRemoved;
- (void)fixUpViewAfterInsertion;
- (void)_setCachedSubviews:(id)a0;
- (void)dealloc;

@end
