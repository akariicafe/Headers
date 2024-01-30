@class NSString, UnitInfo;

@interface CalculateUnit : NSObject

@property (retain, nonatomic) UnitInfo *unitInfo;
@property (retain, nonatomic) CalculateUnit *nextSmallest;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) int exponent;
@property (readonly, nonatomic) unsigned long long unitType;
@property (readonly, nonatomic) BOOL formatNextSmallest;

+ (id)unitWithID:(int)a0 unitsInfo:(id)a1 exponent:(int)a2;

- (BOOL)isEqual:(id)a0;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)compactNameForLocalization:(id)a0;
- (BOOL)isDenominator;
- (BOOL)isNumerator;
- (id)localizedNameForValue:(double)a0 localization:(id)a1 retainingFormat:(BOOL)a2;

@end
