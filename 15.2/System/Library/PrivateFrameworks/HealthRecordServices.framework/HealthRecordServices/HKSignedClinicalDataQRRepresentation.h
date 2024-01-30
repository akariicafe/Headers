@class NSNumber, NSArray;

@interface HKSignedClinicalDataQRRepresentation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *expectedNumberOfSegments;
@property (readonly, copy, nonatomic) NSArray *alreadyScannedSegments;
@property (readonly, nonatomic) BOOL hasAllExpectedSegments;

+ (id)representationWithQRSegment:(id)a0;
+ (id)representationWithQRSegmentData:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)orderedSegmentsWithError:(id *)a0;
- (id)representationByAddingQRSegment:(id)a0 error:(id *)a1;

@end
