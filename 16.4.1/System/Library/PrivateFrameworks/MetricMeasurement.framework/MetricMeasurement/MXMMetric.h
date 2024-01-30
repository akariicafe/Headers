@class MXMSampleFilter, NSString, MXMProbe, MXMMutableSampleData, MXMInstrument;

@interface MXMMetric : NSObject <MXMProbeDelegate, MXMInstrumental, NSSecureCoding> {
    MXMProbe *_probe;
    NSString *_identifier;
    NSString *_version;
    NSString *_build;
    MXMMutableSampleData *_data;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long _sampleMode;
@property (readonly, nonatomic) BOOL _shouldConstructProbe;
@property (readonly, nonatomic) BOOL _shouldAlwaysWrapInProxy;
@property (readonly, nonatomic) BOOL _shouldNeverWrapInProxy;
@property (readonly, nonatomic) MXMInstrument *instrument;
@property (readonly, nonatomic) NSString *identifier;
@property (retain, nonatomic) MXMSampleFilter *filter;
@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) NSString *build;
@property (nonatomic) unsigned long long preferredSampleMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (void).cxx_destruct;
- (void)willStop;
- (id)_constructProbe;
- (id)_getProbe;
- (BOOL)_shouldWrapInProxy;
- (void)didStartAtContinuousTime:(unsigned long long)a0 absoluteTime:(unsigned long long)a1 startDate:(id)a2;
- (void)didStartAtTime:(unsigned long long)a0 startDate:(id)a1;
- (void)didStopAtContinuousTime:(unsigned long long)a0 absoluteTime:(unsigned long long)a1 stopDate:(id)a2;
- (void)didStopAtTime:(unsigned long long)a0 stopDate:(id)a1;
- (BOOL)harvestData:(id *)a0 error:(id *)a1;
- (id)initWithIdentifier:(id)a0 filter:(id)a1;
- (BOOL)prepareWithOptions:(id)a0 error:(id *)a1;
- (void)probeDidUpdate:(id)a0 data:(id)a1 stop:(BOOL *)a2;
- (void)willStartAtEstimatedTime:(unsigned long long)a0;

@end
