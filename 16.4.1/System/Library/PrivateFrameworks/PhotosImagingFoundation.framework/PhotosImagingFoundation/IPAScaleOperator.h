@interface IPAScaleOperator : IPAGeometryOperator {
    double _xScale;
    double _yScale;
}

+ (id)operatorWithIdentifier:(id)a0 scaleX:(double)a1 Y:(double)a2;
+ (id)operatorWithScaleX:(double)a0 Y:(double)a1;

- (id)description;
- (id)transformForGeometry:(id)a0;

@end
