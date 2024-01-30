@class NSArray, NSString;

@interface SNDirectionOfArrivalResult : NSObject <NSCopying, NSSecureCoding, SNTimeRangeProvidingWritable, SNTimeRangeProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) float azimuth;
@property (retain, nonatomic) NSArray *spatialSpectrum;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToDirectionOfArrivalResult:(id)a0;

@end
