@class NSString;
@protocol VNOperationPointsProviding;

@interface VNClassificationObservation : VNObservation {
    id<VNOperationPointsProviding> _operationPointsProvider;
}

@property (readonly, copy, nonatomic) NSString *identifier;

+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)vn_cloneObject;
- (id)operationPointsAndReturnError:(id *)a0;
- (id)initWithRequestRevision:(unsigned long long)a0 identifier:(id)a1 confidence:(float)a2;
- (id)initWithRequestRevision:(unsigned long long)a0 identifier:(id)a1 confidence:(float)a2 operationPointsProvider:(id)a3;
- (id)initWithOriginatingRequestSpecifier:(id)a0 identifier:(id)a1 confidence:(float)a2;
- (id)initWithOriginatingRequestSpecifier:(id)a0 identifier:(id)a1 confidence:(float)a2 operationPointsProvider:(id)a3;
- (BOOL)hasPrecisionRecallCurve;
- (BOOL)hasMinimumRecall:(float)a0 forPrecision:(float)a1;
- (BOOL)hasMinimumPrecision:(float)a0 forRecall:(float)a1;

@end
