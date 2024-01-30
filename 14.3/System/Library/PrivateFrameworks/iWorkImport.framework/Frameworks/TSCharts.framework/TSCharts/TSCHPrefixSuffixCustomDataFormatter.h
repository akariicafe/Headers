@class NSString;

@interface TSCHPrefixSuffixCustomDataFormatter : TSCHCustomDataFormatter {
    NSString *mPrefixString;
    NSString *mSuffixString;
}

+ (id)dataFormatterWithCustomFormat:(id)a0 customFormatListKey:(id)a1 formatType:(unsigned int)a2 prefixString:(id)a3 suffixString:(id)a4;

- (void)dealloc;
- (id)convertToPersistableStyleObject;
- (id)chartFormattedStringForValue:(id)a0 locale:(id)a1;
- (id)convertToSupportedClientFormatObjectWithLocale:(id)a0;
- (id)initWithCustomFormat:(id)a0 customFormatListKey:(id)a1 formatType:(unsigned int)a2 prefixString:(id)a3 suffixString:(id)a4;
- (id)p_formattedStringWithBodyString:(id)a0;

@end
