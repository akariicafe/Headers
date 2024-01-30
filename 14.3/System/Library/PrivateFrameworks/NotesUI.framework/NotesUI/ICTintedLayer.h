@class UIColor;

@interface ICTintedLayer : CALayer

@property (retain, nonatomic) id originalContents;
@property (retain, nonatomic) UIColor *tintColor;

- (void).cxx_destruct;
- (void)setContents:(id)a0;
- (void)updateContents;

@end
