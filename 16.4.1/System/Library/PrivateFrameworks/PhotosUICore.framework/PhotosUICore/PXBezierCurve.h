@interface PXBezierCurve : NSObject {
    void /* unknown type, empty encoding */ _startP;
    void /* unknown type, empty encoding */ _ctrlP1;
    void /* unknown type, empty encoding */ _ctrlP2;
    void /* unknown type, empty encoding */ _endP;
}

- (id)initWithStartingPoint:(struct { double x0; double x1; double x2; })a0 controlPoint1:(struct { double x0; double x1; double x2; })a1 controlPoint2:(struct { double x0; double x1; double x2; })a2 endPoint:(struct { double x0; double x1; double x2; })a3;
- (struct { double x0; double x1; double x2; })positionOnCurveAtFraction:(double)a0;

@end
