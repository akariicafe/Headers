@interface CMAttitudeInternal : NSObject {
    struct { double w; double x; double y; double z; } fQuaternion;
}

- (id)initWithQuaternion:(struct { double x0; double x1; double x2; double x3; })a0;
- (void)setQuaternion:(struct { double x0; double x1; double x2; double x3; })a0;
- (BOOL)isEqual:(id)a0;

@end
