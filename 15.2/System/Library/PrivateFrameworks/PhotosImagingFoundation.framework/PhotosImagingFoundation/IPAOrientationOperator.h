@interface IPAOrientationOperator : IPAGeometryOperator {
    long long _orientation;
}

+ (id)operatorWithOrientation:(long long)a0;
+ (id)operatorWithIdentifier:(id)a0 orientation:(long long)a1;

- (id)description;
- (id)transformForGeometry:(id)a0;

@end
