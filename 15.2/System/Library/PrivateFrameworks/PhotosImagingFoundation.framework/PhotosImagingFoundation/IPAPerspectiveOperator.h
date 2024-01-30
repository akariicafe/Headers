@interface IPAPerspectiveOperator : IPAGeometryOperator {
    double _xAngle;
    double _yAngle;
    double _dx;
    double _dy;
}

+ (id)operatorWithAngleX:(double)a0 Y:(double)a1 dx:(double)a2 dy:(double)a3;
+ (id)operatorWithIdentifier:(id)a0 angleX:(double)a1 Y:(double)a2 dx:(double)a3 dy:(double)a4;

- (id)description;
- (id)transformForGeometry:(id)a0;

@end
