@interface IPAStraightenOperator : IPAGeometryOperator {
    double _zAngle;
}

+ (id)operatorWithAngleZ:(double)a0;
+ (id)operatorWithIdentifier:(id)a0 angleZ:(double)a1;

- (id)description;
- (id)transformForGeometry:(id)a0;

@end
