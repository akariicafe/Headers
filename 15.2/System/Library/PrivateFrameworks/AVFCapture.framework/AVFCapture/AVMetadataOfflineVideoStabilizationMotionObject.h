@class NSDictionary, AVMetadataOfflineVideoStabilizationMotionObjectInternal;

@interface AVMetadataOfflineVideoStabilizationMotionObject : AVMetadataObject <NSCopying> {
    AVMetadataOfflineVideoStabilizationMotionObjectInternal *_offlineVISMotionObjectInternal;
}

@property (readonly) NSDictionary *payload;

+ (id)offlineVideoStabilizationMotionObjectWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 motionDictionary:(id)a1 input:(id)a2;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 motionDictionary:(id)a1 input:(id)a2;

@end
