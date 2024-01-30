@class UIColor;

@interface ICTintedLayer : CALayer

@property (retain, nonatomic) id originalContents;
@property (retain, nonatomic) UIColor *tintColor;

- (void)setContents:(id)a0;
- (void)updateContents;
- (void).cxx_destruct;

@end
