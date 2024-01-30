@interface TLKFontUtilities : NSObject

+ (id)cachedFontForTextStyle:(id)a0 isShort:(BOOL)a1 isBold:(BOOL)a2 useCustomWeight:(BOOL)a3 customFontWeight:(double)a4;
+ (id)cachedFontForKey:(id)a0 creatorBlock:(id /* block */)a1;
+ (id)shortTitle1Font;
+ (id)preferredFontDescriptorWithTextStyle:(id)a0 addingSymbolicTraits:(unsigned int)a1;
+ (id)subheadFont;
+ (id)preferredFontWithTextStyle:(id)a0 isShort:(BOOL)a1 isBold:(BOOL)a2;
+ (id)shortBodyFont;
+ (id)subheadBoldFont;
+ (id)shortFootnoteFont;
+ (id)footnoteFont;
+ (id)cachedFontForTextStyle:(id)a0 isShort:(BOOL)a1 isBold:(BOOL)a2;
+ (id)preferredFontForTextStyle:(id)a0 maximumContentSizeCategory:(id)a1;
+ (id)preferredFontWithTextStyle:(id)a0 isShort:(BOOL)a1 isBold:(BOOL)a2 useCustomWeight:(BOOL)a3 customFontWeight:(double)a4;
+ (id)cachedFontForTextStyle:(id)a0;
+ (id)cachedFontForTextStyle:(id)a0 isShort:(BOOL)a1 fontWeight:(double)a2;
+ (id)thinFontOfSize:(double)a0 grade:(unsigned long long)a1;
+ (id)boldBodyFont;
+ (id)captionFont;
+ (id)preferredFontForTextStyle:(id)a0;
+ (id)shortSubheadBoldFont;
+ (id)shortSubheadFont;
+ (id)attributedStringForRichText:(id)a0 appearance:(id)a1 prominence:(unsigned long long)a2 alignment:(long long)a3 font:(id)a4 isButton:(BOOL)a5;
+ (id)shortTitle2Font;
+ (id)attributedStringForRichText:(id)a0 appearance:(id)a1 prominence:(unsigned long long)a2 alignment:(long long)a3 coloredRanges:(id)a4 nonColoredRanges:(id)a5 rangesForNonTemplateImageAttachments:(id)a6 rangesForTemplateImageAttachments:(id)a7 font:(id)a8 isButton:(BOOL)a9;
+ (id)calloutFont;
+ (BOOL)formattedTextItemIsColoredImage:(id)a0;
+ (id)attributedStringForFormattedText:(id)a0 appearance:(id)a1 prominence:(unsigned long long)a2 alignment:(long long)a3 font:(id)a4 isButton:(BOOL)a5;

@end
