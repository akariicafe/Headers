@class NSString;

@interface TSCHChartSeriesDefaultNonStyle : NSObject <TSCHStyleActAlike>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)properties;
+ (id)_singletonAlloc;
+ (id)defaultValueForProperty:(int)a0;
+ (int)defaultIntValueForProperty:(int)a0;
+ (float)defaultFloatValueForProperty:(int)a0;
+ (id)boxedDefaultValueForProperty:(int)a0;
+ (id)defaultNonStyle;

- (id)valueForProperty:(int)a0;
- (id)properties;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)floatValueForProperty:(int)a0;
- (int)intValueForProperty:(int)a0;
- (BOOL)definesProperty:(int)a0;
- (id)defaultValueForProperty:(int)a0;
- (int)defaultIntValueForProperty:(int)a0;
- (float)defaultFloatValueForProperty:(int)a0;
- (id)boxedDefaultValueForProperty:(int)a0;
- (id)boxedValueForProperty:(int)a0;
- (BOOL)overridesProperty:(int)a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;

@end
