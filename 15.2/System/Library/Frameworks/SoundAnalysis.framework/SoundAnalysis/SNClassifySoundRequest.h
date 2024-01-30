@class SNTimeDurationConstraint, NSString, NSArray, MLModel;

@interface SNClassifySoundRequest : NSObject <SNAnalyzerCreating, SNRequest> {
    MLModel *_model;
}

@property (retain) NSString *classifierIdentifier;
@property double overlapFactor;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } windowDuration;
@property (readonly) SNTimeDurationConstraint *windowDurationConstraint;
@property (readonly, copy) NSArray *knownClassifications;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)knownClassificationsForClassifierIdentifier:(id)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithMLModel:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)createAnalyzerWithError:(id *)a0;
- (BOOL)isEqualToClassifySoundRequest:(id)a0;
- (id)initWithClassifierIdentifier:(id)a0 error:(id *)a1;

@end
