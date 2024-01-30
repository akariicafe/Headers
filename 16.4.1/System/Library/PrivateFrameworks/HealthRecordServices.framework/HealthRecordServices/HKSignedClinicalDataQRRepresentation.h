@class NSNumber, NSArray;

@interface HKSignedClinicalDataQRRepresentation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long sourceType;
@property (readonly, copy, nonatomic) NSNumber *expectedNumberOfSegments;
@property (readonly, copy, nonatomic) NSArray *alreadyScannedSegments;
@property (readonly, nonatomic) BOOL hasAllExpectedSegments;

+ (id)representationForEUDCCPayloadData:(id)a0 error:(id *)a1;
+ (id)representationForJWSPayload:(id)a0 error:(id *)a1;
+ (id)representationForJWSPayloadData:(id)a0 error:(id *)a1;
+ (id)representationForRawContent:(id)a0 sourceType:(long long)a1 error:(id *)a2;
+ (id)representationWithQRSegment:(id)a0;
+ (id)representationWithSMARTHealthCardQRSegmentData:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithSourceType:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)orderedSegmentsWithError:(id *)a0;
- (id)representationByAddingQRSegment:(id)a0 error:(id *)a1;

@end
