@class NSArray, VNClassificationObservation;

@interface VNFaceAttributeCategory : NSObject <NSSecureCoding, NSCopying, VNRequestRevisionProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) VNClassificationObservation *label;
@property (copy, nonatomic) NSArray *allLabelsWithConfidences;
@property (readonly, nonatomic) unsigned long long requestRevision;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)_computeLabel;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRequestRevision:(unsigned long long)a0;

@end
