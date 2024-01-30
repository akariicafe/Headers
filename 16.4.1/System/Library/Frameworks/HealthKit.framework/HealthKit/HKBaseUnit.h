@class NSString, _HKBaseDimension;

@interface HKBaseUnit : HKUnit <_HKFactor> {
    NSString *_unitString;
    NSString *_prefix;
    NSString *_root;
    BOOL _uniqued;
}

@property (readonly, nonatomic) double proportionalSize;
@property (readonly, nonatomic) _HKBaseDimension *dimension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)unitFromString:(id)a0;
+ (id)_uniquedRootUnitFromDefinition:(struct { char *x0; BOOL x1; char *x2; double x3; double x4; BOOL x5; })a0;
+ (id)_rootUnitWithDefinition:(struct { char *x0; BOOL x1; char *x2; double x3; double x4; BOOL x5; })a0;
+ (id)_uniquedRootUnit:(id)a0;
+ (id)_uniquedUnitWithPrefix:(id)a0 conversionConstant:(id)a1 rootUnit:(id)a2;
+ (id)_uniquedUnitWithPrefix:(id)a0 rootUnit:(id)a1;

- (id)awakeAfterUsingCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)unitString;
- (id)_computeBaseUnitReductionAndProportionalSize:(double *)a0 withCycleSet:(id)a1;
- (id)_baseUnits;
- (void).cxx_destruct;
- (id)_initWithUnitString:(id)a0 proportionalSize:(double)a1 scaleOffset:(double)a2;
- (id)_unitByPrefixing:(id)a0 withConversionConstant:(id)a1;

@end
