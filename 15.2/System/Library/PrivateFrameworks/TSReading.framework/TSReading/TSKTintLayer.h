@class CALayer;

@interface TSKTintLayer : CAReplicatorLayer

@property (retain, nonatomic) CALayer *contentsLayer;
@property struct CGColor { } *tintColor;

- (id)contents;
- (void)setContents:(id)a0;
- (void)layoutSublayers;
- (void)setNeedsDisplay;
- (void)dealloc;

@end
