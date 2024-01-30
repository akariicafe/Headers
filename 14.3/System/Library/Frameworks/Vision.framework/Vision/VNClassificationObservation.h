@class NSString;
@protocol VNOperationPointsProviding;

@interface VNClassificationObservation : VNObservation {
    id<VNOperationPointsProviding> _operationPointsProvider;
}

@property (readonly, copy, nonatomic) NSString *identifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)operationPointsAndReturnError:(id *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)hasPrecisionRecallCurve;
- (id)initWithRequestRevision:(unsigned long long)a0 identifier:(id)a1 confidence:(float)a2;
- (id)initWithRequestRevision:(unsigned long long)a0 identifier:(id)a1 confidence:(float)a2 operationPointsProvider:(id)a3;
- (BOOL)hasMinimumRecall:(float)a0 forPrecision:(float)a1;
- (BOOL)hasMinimumPrecision:(float)a0 forRecall:(float)a1;
- (void)encodeWithCoder:(id)a0;

@end
