@class CALayer;

@interface TSKTintLayer : CAReplicatorLayer

@property (retain, nonatomic) CALayer *contentsLayer;
@property struct CGColor { } *tintColor;

- (id)contents;
- (void)setNeedsDisplay;
- (void)dealloc;
- (void)layoutSublayers;
- (void)setContents:(id)a0;

@end
