@class NSNumber, NSString;

@interface HFPercentFormatter : NSNumberFormatter <NSCopying, HFUnitFormatter>

@property (copy, nonatomic) NSNumber *minimumValue;
@property (copy, nonatomic) NSNumber *maximumValue;
@property (readonly, nonatomic) NSString *unitDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_percentageFromValue:(id)a0 forMinimumValue:(id)a1 maximumValue:(id)a2;
+ (id)_valueFromPercentage:(id)a0 forMinimumValue:(id)a1 maximumValue:(id)a2;

- (id)stringForObjectValue:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)stringForObjectValue:(id)a0 withUnit:(BOOL)a1;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 range:(inout struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 error:(out id *)a3;
- (id)stringForNormalizedObjectValue:(id)a0;
- (id)initWithMinimumValue:(id)a0 maximumValue:(id)a1;
- (id)stringForRelativePercentValue:(id)a0;

@end
