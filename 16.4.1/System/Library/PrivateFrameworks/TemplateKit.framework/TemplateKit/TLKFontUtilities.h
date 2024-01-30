@interface TLKFontUtilities : NSObject

+ (id)subheadFont;
+ (id)preferredFontWithTextStyle:(id)a0 isShort:(BOOL)a1 isBold:(BOOL)a2;
+ (id)cachedFontForTextStyle:(id)a0 isShort:(BOOL)a1 fontWeight:(double)a2;
+ (id)cachedFontForTextStyle:(id)a0 isShort:(BOOL)a1 isBold:(BOOL)a2 useCustomWeight:(BOOL)a3 customFontWeight:(double)a4;
+ (id)preferredMonospacedFontForTextStyle:(id)a0;
+ (id)cachedFontForTextStyle:(id)a0;
+ (id)attributedStringForRichText:(id)a0 appearance:(id)a1 prominence:(unsigned long long)a2 alignment:(long long)a3 font:(id)a4 isButton:(BOOL)a5 scale:(double)a6 isDark:(BOOL)a7;
+ (id)shortBodyFont;
+ (id)attributedStringForRichText:(id)a0 appearance:(id)a1 prominence:(unsigned long long)a2 alignment:(long long)a3 coloredRanges:(id)a4 nonColoredRanges:(id)a5 rangesForNonTemplateImageAttachments:(id)a6 rangesForTemplateImageAttachments:(id)a7 font:(id)a8 isButton:(BOOL)a9 scale:(double)a10 isDark:(BOOL)a11;
+ (BOOL)formattedTextItemIsColoredImage:(id)a0;
+ (id)thinFontOfSize:(double)a0 grade:(unsigned long long)a1;
+ (id)cachedFontForTextStyle:(id)a0 isShort:(BOOL)a1 isBold:(BOOL)a2;
+ (id)shortTitle1Font;
+ (id)subheadBoldFont;
+ (id)preferredFontForTextStyle:(id)a0;
+ (id)preferredFontWithTextStyle:(id)a0 isShort:(BOOL)a1 isBold:(BOOL)a2 useCustomWeight:(BOOL)a3 customFontWeight:(double)a4 isMonoSpaced:(BOOL)a5;
+ (id)attributedStringForFormattedText:(id)a0 appearance:(id)a1 prominence:(unsigned long long)a2 alignment:(long long)a3 font:(id)a4 isButton:(BOOL)a5 scale:(double)a6 isDark:(BOOL)a7;
+ (id)cachedFontForKey:(id)a0 creatorBlock:(id /* block */)a1;
+ (id)calloutFont;
+ (id)shortTitle2Font;
+ (id)shortFootnoteFont;
+ (id)shortSubheadBoldFont;
+ (id)preferredFontDescriptorWithTextStyle:(id)a0 addingSymbolicTraits:(unsigned int)a1;
+ (id)footnoteFont;
+ (id)updateAttributedStringUnderlineStyle:(id)a0 isUnderlineVisible:(BOOL)a1;
+ (id)boldBodyFont;
+ (id)clearTextAttachmentForTextAttachment:(id)a0;
+ (id)preferredFontForTextStyle:(id)a0 maximumContentSizeCategory:(id)a1;
+ (id)textAttachmentForImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1 cornerRoundingStyle:(unsigned long long)a2 appearance:(id)a3;
+ (id)shortSubheadFont;
+ (id)captionFont;

@end
