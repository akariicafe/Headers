@class NSUUID, HMICamera;

@interface HMICameraVideoAnalyzerConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long serviceType;
@property unsigned long long startingMediaIntegritySequenceNumber;
@property BOOL useScheduler;
@property BOOL inMediaAnalysis;
@property BOOL faceClassificationEnabled;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } currentSessionDuration;
@property (retain) NSUUID *homeUUID;
@property (readonly) unsigned long long posterFrameGenerationInterval;
@property (readonly) unsigned long long posterFrameHeight;
@property (readonly) double maxFragmentAnalysisDuration;
@property (readonly) double maxFragmentDuration;
@property BOOL transcodeFragment;
@property (readonly) HMICamera *camera;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPosterFrameGenerationInterval:(unsigned long long)a0 posterFrameHeight:(unsigned long long)a1 maxFragmentAnalysisDuration:(double)a2 maxFragmentDuration:(double)a3 transcodeFragment:(BOOL)a4 camera:(id)a5;
- (unsigned long long)getAnalysisServiceTypePreference;
- (id)initWithPosterFrameGenerationInterval:(unsigned long long)a0 posterFrameHeight:(unsigned long long)a1 maxFragmentAnalysisDuration:(double)a2 maxFragmentDuration:(double)a3 transcodeFragment:(BOOL)a4;

@end
