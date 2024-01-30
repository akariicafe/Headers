@class NSString;

@interface SNDetectionResult : NSObject <NSCopying, NSSecureCoding, SRSampling, SNTimeRangeProvidingWritable, SNConfidenceProvidingWritable, SNResult, SNTimeRangeProviding, SNConfidenceProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL detected;
@property (retain, nonatomic) NSString *detectorIdentifier;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (nonatomic) double confidence;

- (id)initWithIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (id)binarySampleRepresentation;
- (id)initWithBinarySampleRepresentation:(id)a0;
- (BOOL)isEqualToDetectionResult:(id)a0;

@end
