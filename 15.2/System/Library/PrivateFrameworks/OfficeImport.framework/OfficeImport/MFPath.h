@interface MFPath : NSObject <NSCopying>

- (int)abort;
- (int)end;
- (BOOL)isOpen;
- (int)flatten;
- (int)begin;
- (int)fill:(id)a0;
- (int)state;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGPoint { double x0; double x1; })currentPoint;
- (int)widen:(id)a0;
- (int)stroke:(id)a0;
- (int)closeFigure;

@end
