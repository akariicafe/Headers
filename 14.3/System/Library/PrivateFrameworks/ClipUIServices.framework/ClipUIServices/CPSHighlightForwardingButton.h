@protocol CPSHighlightable;

@interface CPSHighlightForwardingButton : UIButton

@property (weak, nonatomic) id<CPSHighlightable> highlightForwardingTarget;

- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0;

@end
