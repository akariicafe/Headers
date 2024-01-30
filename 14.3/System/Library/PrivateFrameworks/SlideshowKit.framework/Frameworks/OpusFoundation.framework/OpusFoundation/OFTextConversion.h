@interface OFTextConversion : NSObject

+ (struct CGColorSpace { } *)newColorSpaceForDevice;
+ (id)styleForFontDisplayName:(id)a0 andFamilyName:(id)a1;
+ (id)weightForFontDisplayName:(id)a0 andFamilyName:(id)a1;
+ (id)stretchForFontDisplayName:(id)a0 andFamilyName:(id)a1;
+ (struct CGColor { } *)blackCGColor;
+ (id)stringFromCGColor:(struct CGColor { } *)a0;
+ (id)stringFromTextAlignment:(long long)a0;
+ (id)textFormatFromUnderlineStyle:(unsigned long long)a0;
+ (id)stringFromLigature:(long long)a0;
+ (id)textFormatWithCTAttributesForText:(id)a0 attributes:(id)a1 scaleFactor:(double)a2;
+ (id)textFormatWithNSAttributesForText:(id)a0 attributes:(id)a1 scaleFactor:(double)a2;
+ (struct CGColor { } *)CGColorFromString:(id)a0;
+ (long long)textAlignmentFromString:(id)a0;
+ (unsigned long long)underlineStyleFromTextFormat:(id)a0;
+ (long long)ligatureFromString:(id)a0;
+ (id)stringAttributesWithAttributedString:(id)a0 scaleFactor:(double)a1;
+ (id)attributedStringWithCTAttributesFromStringAttributes:(id)a0 scaleFactor:(double)a1;
+ (id)attributedStringWithNSAttributesFromStringAttributes:(id)a0 scaleFactor:(double)a1;

@end
