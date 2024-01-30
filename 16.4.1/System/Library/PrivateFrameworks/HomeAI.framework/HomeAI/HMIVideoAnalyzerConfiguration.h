@class HMICamera, NSUUID, NSString;

@interface HMIVideoAnalyzerConfiguration : HMFObject <HMFLogging, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long decodeMode;
@property BOOL redactFrames;
@property long long packageClassifierMode;
@property BOOL allowReducedConfiguration;
@property BOOL enableTemporalEventFiltering;
@property BOOL saveAnalyzerResultsToDisk;
@property double analysisFPS;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } thumbnailInterval;
@property unsigned long long thumbnailHeight;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } timelapseInterval;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } timelapsePreferredFragmentDuration;
@property double maxFragmentAnalysisDuration;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } maxFragmentDuration;
@property BOOL transcode;
@property unsigned int transcodeCodecType;
@property (retain) HMICamera *camera;
@property double minFrameQuality;
@property double minFrameScale;
@property (retain) NSUUID *homeUUID;
@property BOOL passthroughAudio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (void)setTimelapseVideo:(BOOL)a0;
- (void)setTimelapseVideoPreferredFragmentDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)timelapseVideo;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })timelapseVideoPreferredFragmentDuration;

@end
