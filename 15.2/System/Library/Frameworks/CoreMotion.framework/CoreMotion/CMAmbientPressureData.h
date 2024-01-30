@interface CMAmbientPressureData : CMLogItem <SRSampleDirectExporting> {
    id _internal;
}

@property (readonly, nonatomic) struct { double x0; double x1; } ambientPressure;

+ (BOOL)supportsSecureCoding;

- (long long)sr_writeUTF8RepresentationToOutputStream:(id)a0;
- (BOOL)sr_prefersUTF8StringRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPressure:(struct { float x0; float x1; })a0 andTimestamp:(double)a1;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
