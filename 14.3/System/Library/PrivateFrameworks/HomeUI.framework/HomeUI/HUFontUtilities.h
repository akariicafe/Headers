@interface HUFontUtilities : NSObject

+ (id)staticPreferredFontForTextStyle:(id)a0 traits:(unsigned int)a1;
+ (id)preferredFontForTextStyle:(id)a0 traits:(unsigned int)a1;
+ (id)fontDescriptorWithMonospacedDigitsForFontDescriptor:(id)a0;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })languageAwareOutsetsForString:(id)a0 withFont:(id)a1;
+ (id)_excessiveLineHeightCharacterSet;
+ (id)staticPreferredFontForTextStyle:(id)a0;

@end
