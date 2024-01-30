@interface TLKFontUtilities : NSObject

+ (id)preferredFontForTextStyle:(id)a0 maximumContentSizeCategory:(id)a1;
+ (id)cachedFontForTextStyle:(id)a0 isShort:(BOOL)a1 isBold:(BOOL)a2;
+ (id)shortSubheadBoldFont;
+ (id)preferredFontWithTextStyle:(id)a0 isShort:(BOOL)a1 isBold:(BOOL)a2 useCustomWeight:(BOOL)a3 customFontWeight:(double)a4;
+ (id)shortTitle2Font;
+ (id)subheadBoldFont;
+ (id)boldBodyFont;
+ (id)cachedFontForKey:(id)a0 creatorBlock:(id /* block */)a1;
+ (id)attributedStringForFormattedText:(id)a0 appearance:(id)a1 prominence:(unsigned long long)a2 alignment:(long long)a3 font:(id)a4 isButton:(BOOL)a5;
+ (id)cachedFontForTextStyle:(id)a0 isShort:(BOOL)a1 fontWeight:(double)a2;
+ (id)shortTitle1Font;
+ (id)attributedStringForRichText:(id)a0 appearance:(id)a1 prominence:(unsigned long long)a2 alignment:(long long)a3 font:(id)a4 isButton:(BOOL)a5;
+ (id)shortBodyFont;
+ (id)cachedFontForTextStyle:(id)a0 isShort:(BOOL)a1 isBold:(BOOL)a2 useCustomWeight:(BOOL)a3 customFontWeight:(double)a4;
+ (id)shortSubheadFont;
+ (id)preferredFontWithTextStyle:(id)a0 isShort:(BOOL)a1 isBold:(BOOL)a2;
+ (id)footnoteFont;
+ (id)preferredFontForTextStyle:(id)a0;
+ (id)captionFont;
+ (id)shortFootnoteFont;
+ (id)calloutFont;
+ (id)subheadFont;
+ (id)thinFontOfSize:(double)a0 grade:(unsigned long long)a1;
+ (id)attributedStringForRichText:(id)a0 appearance:(id)a1 prominence:(unsigned long long)a2 alignment:(long long)a3 coloredRanges:(id)a4 nonColoredRanges:(id)a5 rangesForNonTemplateImageAttachments:(id)a6 font:(id)a7 isButton:(BOOL)a8;
+ (id)preferredFontDescriptorWithTextStyle:(id)a0 addingSymbolicTraits:(unsigned int)a1;

@end
