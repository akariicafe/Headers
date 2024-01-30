@class NSDictionary, NSArray;

@interface TSWPItemNumbering : NSObject {
    NSDictionary *_defaultPageNumberFormats;
    NSArray *_validFormatNames;
    NSDictionary *_formatTypeInfo;
}

+ (id)instance;
+ (id)stringFromNumber:(unsigned long long)a0 forFormatName:(id)a1;
+ (id)displayNameForPageNumberFormat:(id)a0;
+ (id)allPageNumberFormats;
+ (id)defaultPageNumberFormatForLocale:(id)a0;
+ (id)localizedStringForPageNumberFormatNWithLocale:(id)a0;
+ (id)localizedStringForPageNumberFormatNofNWithLocale:(id)a0;
+ (id)localizedStringForPageNumberFormatPageNWithLocale:(id)a0;
+ (id)localizedStringForPageNumberFormatPageNofNWithLocale:(id)a0;
+ (id)pageNumberFormatNameForType:(int)a0;
+ (int)pageNumberFormatTypeForName:(id)a0;
+ (id)pageNumberFormatsForDocLocale:(id)a0;
+ (id)stringFromNumber:(unsigned long long)a0 forPageNumberFormatType:(int)a1;

- (id)init;
- (void).cxx_destruct;
- (id)p_additiveTypeFormatForNumber:(unsigned long long)a0 limitsAndSymbols:(id)a1;
- (id)p_allPageNumberFormats;
- (id)p_defaultPageNumberFormatForLocale:(id)a0;
- (id)p_displayNameForPageNumberFormat:(id)a0;
- (id)p_formatInfoForFormatName:(id)a0;
- (id)p_numericTypeFormatForNumber:(unsigned long long)a0 digitChars:(id)a1;
- (id)p_pageNumberFormatNameForType:(int)a0;
- (int)p_pageNumberFormatTypeForName:(id)a0;
- (id)p_pageNumberFormatsForDocLocale:(id)a0;
- (id)p_stringFromNumber:(unsigned long long)a0 forFormatName:(id)a1;
- (id)p_stringFromNumber:(unsigned long long)a0 forPageNumberFormatType:(int)a1;
- (id)p_symbolicTypeFormatForNumber:(unsigned long long)a0 symbols:(id)a1;

@end
