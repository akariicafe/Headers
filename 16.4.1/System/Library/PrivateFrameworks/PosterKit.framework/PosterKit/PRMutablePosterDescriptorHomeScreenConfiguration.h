@class NSArray;

@interface PRMutablePosterDescriptorHomeScreenConfiguration : PRPosterDescriptorHomeScreenConfiguration

@property (nonatomic) BOOL allowsModifyingLegibilityBlur;
@property (nonatomic) unsigned long long preferredStyle;
@property (copy, nonatomic) NSArray *preferredSolidColors;
@property (copy, nonatomic) NSArray *preferredGradientColors;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;

@end
