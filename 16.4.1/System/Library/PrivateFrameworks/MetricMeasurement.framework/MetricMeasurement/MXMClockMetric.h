@class MXMSampleTag, MXMInstrument;

@interface MXMClockMetric : MXMMetric {
    MXMSampleTag *_tag;
}

@property (class, readonly, nonatomic) MXMClockMetric *allTime;
@property (class, readonly, nonatomic) MXMClockMetric *absoluteTime;
@property (class, readonly, nonatomic) MXMClockMetric *continuousTime;

@property (readonly, nonatomic) MXMInstrument *instrument;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (void).cxx_destruct;
- (id)_unit;
- (id)initWithTag:(id)a0;
- (BOOL)_shouldConstructProbe;
- (id)_unitWithTag:(id)a0;
- (BOOL)harvestData:(id *)a0 error:(id *)a1;

@end
