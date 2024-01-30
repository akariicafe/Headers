@class MXMSampleTag, MXMInstrument;

@interface MXMClockMetric : MXMMetric {
    MXMSampleTag *_tag;
}

@property (class, readonly, nonatomic) MXMClockMetric *allTime;
@property (class, readonly, nonatomic) MXMClockMetric *absoluteTime;
@property (class, readonly, nonatomic) MXMClockMetric *continuousTime;

@property (readonly, nonatomic) MXMInstrument *instrument;

+ (BOOL)supportsSecureCoding;

- (id)_unit;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTag:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (BOOL)_shouldConstructProbe;
- (BOOL)harvestData:(id *)a0 error:(id *)a1;
- (id)_unitWithTag:(id)a0;

@end
