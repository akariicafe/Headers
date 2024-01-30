@class MXMMetric, MXMProbe;

@interface MXMProxyMetric : MXMMetric

@property (readonly, retain) MXMMetric *_underlyingMetric;
@property (readonly, copy) MXMProbe *_remoteProbe;
@property (readonly, copy) MXMMetric *metric;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMetric:(id)a0;
- (unsigned long long)_sampleMode;
- (void)willStop;
- (void)willStartAtEstimatedTime:(unsigned long long)a0;
- (BOOL)_shouldConstructProbe;
- (id)_constructProbe;
- (BOOL)prepareWithOptions:(id)a0 error:(id *)a1;
- (void)didStartAtTime:(unsigned long long)a0 startDate:(id)a1;
- (void)didStartAtContinuousTime:(unsigned long long)a0 absoluteTime:(unsigned long long)a1 startDate:(id)a2;
- (void)didStopAtTime:(unsigned long long)a0 stopDate:(id)a1;
- (void)didStopAtContinuousTime:(unsigned long long)a0 absoluteTime:(unsigned long long)a1 stopDate:(id)a2;
- (BOOL)_shouldAlwaysWrapInProxy;
- (BOOL)_shouldNeverWrapInProxy;

@end
