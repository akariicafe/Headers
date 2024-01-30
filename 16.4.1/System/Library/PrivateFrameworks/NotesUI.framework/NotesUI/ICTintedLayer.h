@class UIColor;

@interface ICTintedLayer : CALayer

@property (retain, nonatomic) id originalContents;
@property (retain, nonatomic) UIColor *tintColor;

- (void)updateContents;
- (void).cxx_destruct;
- (void)setContents:(id)a0;

@end
