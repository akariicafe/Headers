@class CALayer;

@interface UIWebOverflowContentView : UIView

@property (retain, nonatomic) CALayer *webLayer;

- (id)initWithLayer:(id)a0;
- (void)dealloc;
- (void)_setCachedSubviews:(id)a0;
- (void)fixUpViewAfterInsertion;
- (void)replaceLayer:(id)a0;
- (id)superview;
- (void)willBeRemoved;

@end
