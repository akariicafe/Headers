@class NSAttributedString;

@interface _MKLegendString : CALayer {
    struct __CTLine { } *_line;
}

@property (retain, nonatomic) NSAttributedString *string;
@property (readonly, nonatomic) double baselineDistanceFromBottom;

- (void)drawInContext:(struct CGContext { } *)a0;
- (void)sizeToFit;
- (id)actionForKey:(id)a0;
- (void)dealloc;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void).cxx_destruct;

@end
