@interface MFPath : NSObject <NSCopying>

- (int)begin;
- (int)end;
- (BOOL)isOpen;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)fill:(id)a0;
- (int)flatten;
- (int)widen:(id)a0;
- (int)abort;
- (struct CGPoint { double x0; double x1; })currentPoint;
- (int)state;
- (int)stroke:(id)a0;
- (int)closeFigure;

@end
