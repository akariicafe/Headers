@class NSString;
@protocol VNOperationPointsProviding;

@interface VNClassificationObservation : VNObservation {
    id<VNOperationPointsProviding> _operationPointsProvider;
}

@property (readonly, copy, nonatomic) NSString *identifier;

+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)hasMinimumPrecision:(float)a0 forRecall:(float)a1;
- (BOOL)hasMinimumRecall:(float)a0 forPrecision:(float)a1;
- (BOOL)hasPrecisionRecallCurve;
- (id)initWithOriginatingRequestSpecifier:(id)a0 identifier:(id)a1 confidence:(float)a2;
- (id)initWithOriginatingRequestSpecifier:(id)a0 identifier:(id)a1 confidence:(float)a2 operationPointsProvider:(id)a3;
- (id)initWithRequestRevision:(unsigned long long)a0 identifier:(id)a1 confidence:(float)a2;
- (id)initWithRequestRevision:(unsigned long long)a0 identifier:(id)a1 confidence:(float)a2 operationPointsProvider:(id)a3;
- (id)operationPointsAndReturnError:(id *)a0;
- (id)vn_cloneObject;

@end
