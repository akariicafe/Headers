@class NSArray, NSDictionary;

@interface VN1vLyVSh30UQ26TGBoV8MHv : VNObservation {
    NSDictionary *_adjustments;
}

@property (readonly, copy) NSArray *adjustmentKeys;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)vn_cloneObject;
- (id)initWithOriginatingRequestSpecifier:(id)a0 adjustments:(id)a1;
- (BOOL)hasAdjustmentForKey:(id)a0;
- (id)adjustmentValuesForKey:(id)a0;

@end
