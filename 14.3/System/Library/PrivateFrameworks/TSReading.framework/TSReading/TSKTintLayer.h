@class CALayer;

@interface TSKTintLayer : CAReplicatorLayer

@property (retain, nonatomic) CALayer *contentsLayer;
@property struct CGColor { } *tintColor;

- (void)layoutSublayers;
- (id)contents;
- (void)dealloc;
- (void)setNeedsDisplay;
- (void)setContents:(id)a0;

@end
