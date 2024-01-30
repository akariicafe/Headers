@class NSArray;

@interface NFLDynamicTypeValueScaler : NSObject

@property (readonly, nonatomic) NSArray *orderedSizeCategories;
@property (nonatomic) double XS;
@property (nonatomic) double S;
@property (nonatomic) double M;
@property (nonatomic) double L;
@property (nonatomic) double XL;
@property (nonatomic) double XXL;
@property (nonatomic) double XXXL;
@property (nonatomic) double AM;
@property (nonatomic) double AL;
@property (nonatomic) double AXL;
@property (nonatomic) double AXXL;
@property (nonatomic) double AXXXL;

+ (id)valueSpecifierWithXS:(double)a0 L:(double)a1 XXXL:(double)a2 AXXXL:(double)a3;
+ (id)valueSpecifierWithXSFactor:(double)a0 largeSize:(double)a1 XXXLFactor:(double)a2 AXXXLFactor:(double)a3;

- (id)init;
- (id)initWithWithXS:(double)a0 S:(double)a1 M:(double)a2 L:(double)a3 XL:(double)a4 XXL:(double)a5 XXXL:(double)a6 AM:(double)a7 AL:(double)a8 AXL:(double)a9 AXXL:(double)a10 AXXXL:(double)a11;
- (double)scaledValueForSizeCategory:(id)a0;
- (double)specifiedValueForContentSizeCategory:(id)a0;
- (void)_previousSpecifiedCategoryStartingAtCategory:(id)a0 outValue:(double *)a1 outIndex:(unsigned long long *)a2;
- (void)_nextSpecifiedCategoryStartingAtCategory:(id)a0 outValue:(double *)a1 outIndex:(unsigned long long *)a2;
- (double)scaledValueForCurrentPreferredSizeCategory;

@end
