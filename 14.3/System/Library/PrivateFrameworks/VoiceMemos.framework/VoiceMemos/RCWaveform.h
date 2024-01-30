@class NSArray;

@interface RCWaveform : NSObject <NSMutableCopying, NSCopying, NSSecureCoding> {
    unsigned long long _decodedVersion;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSArray *segments;
@property (readonly) NSArray *segmentsCopy;
@property (readonly) unsigned long long segmentCount;
@property (readonly, nonatomic) unsigned long long averagePowerLevelsRate;
@property (readonly, nonatomic) struct { double x0; double x1; } timeRange;

+ (void)initialize;
+ (id)waveformURLForAVURL:(id)a0;
+ (id)_mutableSegmentsByClippingToTimeRange:(struct { double x0; double x1; })a0 withSegments:(id)a1;
+ (id)waveformWithContentsOfURL:(id)a0 minimumRequiredVersion:(unsigned long long)a1;
+ (id)_mutableSegmentsIntersectingTimeRange:(struct { double x0; double x1; })a0 intersectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 withSegments:(id)a2;
+ (void)_mergeBoundarySegmentsInArray:(id)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfSegmentsIntersectingTimeRange:(struct { double x0; double x1; })a0 withSegments:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)segmentsByClippingToTimeRange:(struct { double x0; double x1; })a0;
- (id)segmentsIntersectingTimeRange:(struct { double x0; double x1; })a0;
- (id)initWithSegments:(id)a0;
- (BOOL)saveContentsToURL:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasUniformPowerLevel:(float)a0;
- (BOOL)isWaveformDataEqualToDataInWaveform:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
