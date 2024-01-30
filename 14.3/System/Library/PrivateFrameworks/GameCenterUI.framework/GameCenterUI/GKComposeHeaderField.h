@class GKLabel;

@interface GKComposeHeaderField : GKBaseComposeHeaderField

@property (retain, nonatomic) GKLabel *valueLabel;

- (void)dealloc;
- (void)setMaxLineCount:(unsigned long long)a0;
- (id)valueText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })valueFrame;
- (void)setValueText:(id)a0;

@end
