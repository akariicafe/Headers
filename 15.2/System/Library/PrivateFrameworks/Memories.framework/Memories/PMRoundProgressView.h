@interface PMRoundProgressView : UIView

@property (nonatomic) double progress;
@property (readonly, nonatomic) double displayedProgress;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (id)initWithCoder:(id)a0;

@end
