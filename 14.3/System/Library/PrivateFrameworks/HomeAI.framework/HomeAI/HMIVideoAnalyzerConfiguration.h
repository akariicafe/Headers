@class HMICamera, NSString;

@interface HMIVideoAnalyzerConfiguration : HMFObject <HMFLogging, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property struct { long long value; int timescale; unsigned int flags; long long epoch; } thumbnailInterval;
@property unsigned long long thumbnailHeight;
@property double maxFragmentAnalysisDuration;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } maxFragmentDuration;
@property BOOL transcode;
@property BOOL recognizeFaces;
@property (retain) HMICamera *camera;
@property double minFrameQuality;
@property double minFrameScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
