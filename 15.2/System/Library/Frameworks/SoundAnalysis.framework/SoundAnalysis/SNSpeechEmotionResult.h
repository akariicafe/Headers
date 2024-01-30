@class NSString;

@interface SNSpeechEmotionResult : NSObject <NSCopying, NSSecureCoding, SRSampling, SNTimeRangeProvidingWritable, SNConfidenceProvidingWritable, SNResult, SNTimeRangeProviding, SNConfidenceProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property double mood;
@property double valence;
@property double arousal;
@property double dominance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (nonatomic) double confidence;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (id)binarySampleRepresentation;
- (BOOL)isEqualToSpeechEmotionResult:(id)a0;
- (id)initWithBinarySampleRepresentation:(id)a0;

@end
