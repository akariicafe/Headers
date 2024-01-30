@class VNFaceObservation;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface VNPersonsModelPrediction : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) VNFaceObservation *faceObservation;
@property (readonly, copy, nonatomic) id<NSObject, NSCopying, NSSecureCoding> predictedPersonUniqueIdentifier;
@property (readonly, nonatomic) float confidence;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithFaceObservation:(id)a0 predictedPersonUniqueIdentifier:(id)a1 confidence:(float)a2;

@end
