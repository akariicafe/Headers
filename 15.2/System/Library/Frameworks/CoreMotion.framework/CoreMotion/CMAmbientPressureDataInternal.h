@interface CMAmbientPressureDataInternal : NSObject {
    struct { float pressure; float temperature; } fPressure;
}

- (void)setAmbientPressure:(struct { float x0; float x1; })a0;
- (id)initWithPressure:(struct { float x0; float x1; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
