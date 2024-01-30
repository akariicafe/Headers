@interface MFPath : NSObject <NSCopying>

- (int)begin;
- (int)state;
- (BOOL)isOpen;
- (int)end;
- (int)abort;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGPoint { double x0; double x1; })currentPoint;
- (int)flatten;
- (int)stroke:(id)a0;
- (int)closeFigure;
- (int)fill:(id)a0;
- (int)widen:(id)a0;

@end
