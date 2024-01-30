@interface OFTextConversion : NSObject

+ (struct CGColor { } *)CGColorFromString:(id)a0;
+ (id)attributedStringWithCTAttributesFromStringAttributes:(id)a0 scaleFactor:(double)a1;
+ (id)attributedStringWithNSAttributesFromStringAttributes:(id)a0 scaleFactor:(double)a1;
+ (struct CGColor { } *)blackCGColor;
+ (long long)ligatureFromString:(id)a0;
+ (struct CGColorSpace { } *)newColorSpaceForDevice;
+ (id)stretchForFontDisplayName:(id)a0 andFamilyName:(id)a1;
+ (id)stringAttributesWithAttributedString:(id)a0 scaleFactor:(double)a1;
+ (id)stringFromCGColor:(struct CGColor { } *)a0;
+ (id)stringFromLigature:(long long)a0;
+ (id)stringFromTextAlignment:(long long)a0;
+ (id)styleForFontDisplayName:(id)a0 andFamilyName:(id)a1;
+ (long long)textAlignmentFromString:(id)a0;
+ (id)textFormatFromUnderlineStyle:(unsigned long long)a0;
+ (id)textFormatWithCTAttributesForText:(id)a0 attributes:(id)a1 scaleFactor:(double)a2;
+ (id)textFormatWithNSAttributesForText:(id)a0 attributes:(id)a1 scaleFactor:(double)a2;
+ (unsigned long long)underlineStyleFromTextFormat:(id)a0;
+ (id)weightForFontDisplayName:(id)a0 andFamilyName:(id)a1;

@end
