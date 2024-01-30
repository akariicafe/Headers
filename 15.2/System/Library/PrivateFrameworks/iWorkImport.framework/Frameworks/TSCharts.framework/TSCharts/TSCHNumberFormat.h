@class NSString, TSKFormat, NSUUID;

@interface TSCHNumberFormat : NSObject <NSCopying, NSMutableCopying, TSCHDataFormatter, TSCHCustomFormatSupport, TSCHDataFormatterPersistableStyleObject, TSCHDataFormatterSupportedClientFormatObject, TSCHFormatTypeSupport>

@property (class, readonly, nonatomic) unsigned int defaultDecimalPlaces;
@property (class, readonly, nonatomic) char defaultFractionAccuracy;
@property (class, readonly, nonatomic) unsigned char defaultNegativeNumberStyle;
@property (class, readonly, nonatomic) BOOL defaultShowThousandsSeparator;
@property (class, readonly, nonatomic) unsigned int defaultBase;
@property (class, readonly, nonatomic) unsigned int defaultBasePlaces;
@property (class, readonly, nonatomic) BOOL defaultBaseUseMinusSign;

@property (copy, nonatomic) TSKFormat *format;
@property (copy, nonatomic) NSString *prefixString;
@property (copy, nonatomic) NSString *suffixString;
@property (readonly, nonatomic) unsigned int decimalPlaces;
@property (readonly, copy, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) BOOL useAccountingStyle;
@property (readonly, nonatomic) unsigned char negativeStyle;
@property (readonly, nonatomic) BOOL showThousandsSeparator;
@property (readonly, nonatomic) char fractionAccuracy;
@property (readonly, nonatomic) double scaleFactor;
@property (readonly, nonatomic) unsigned int base;
@property (readonly, nonatomic) unsigned int basePlaces;
@property (readonly, nonatomic) BOOL baseUseMinusSign;
@property (readonly, nonatomic) BOOL supportsNumericProperties;
@property (readonly, nonatomic) BOOL isDecimal;
@property (readonly, nonatomic) BOOL isCurrency;
@property (readonly, nonatomic) BOOL isPercentage;
@property (readonly, nonatomic) BOOL isScientific;
@property (readonly, nonatomic) BOOL isFraction;
@property (readonly, nonatomic) BOOL isBase;
@property (readonly, nonatomic) long long numberOfDecimalPlaces;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isCustom;
@property (readonly, copy, nonatomic) NSUUID *customFormatListKey;
@property (readonly, nonatomic) unsigned int formatType;

+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;
+ (id)numberFormatWithFormatType:(unsigned int)a0 decimalPlaces:(unsigned int)a1 showThousandsSeparator:(BOOL)a2;
+ (id)defaultDecimalNumberFormat;
+ (BOOL)supportsFormatType:(unsigned int)a0;
+ (id)numberFormatWithTSKFormat:(id)a0 prefixString:(id)a1 suffixString:(id)a2;
+ (id)defaultDecimalNumberFormatWithPrefixString:(id)a0 suffixString:(id)a1;
+ (int)labelFormatTypeFromTSUFormatType:(unsigned int)a0;
+ (id)defaultCurrencyCode;
+ (BOOL)supportsNumericPropertiesForFormatType:(unsigned int)a0;
+ (id)customFormatForKey:(id)a0 documentRoot:(id)a1 fromPasteboardCustomFormatList:(id)a2;
+ (id)automaticDecimalPlaces;
+ (id)defaultNumberFormatWithFormatType:(unsigned int)a0 locale:(id)a1;

- (int)valueType;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isDate;
- (id)customFormatKey;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (BOOL)isCompatibleWithDataFormatter:(id)a0;
- (id)dataFormatterForDocumentRoot:(id)a0 pasteboardCustomFormatList:(id)a1;
- (id)customFormat;
- (BOOL)isDuration;
- (id)numberFormatByResettingToDefaultNegativeStyleIfAvailable;
- (id)chartFormattedStringForValue:(id)a0 locale:(id)a1;
- (id)chartFormattedInspectorStringForValue:(id)a0 locale:(id)a1;
- (id)convertToPersistableStyleObject;
- (id)convertToSupportedClientFormatObjectWithLocale:(id)a0;
- (id)upgradedNumberFormatFromPreUFFOrUnity1_0;
- (id)initWithTSKFormat:(id)a0 prefixString:(id)a1 suffixString:(id)a2;
- (id)initWithNullableTSKFormat:(id)a0 prefixString:(id)a1 suffixString:(id)a2;
- (unsigned int)decimalPlacesForNumberFormatter;
- (unsigned char)negativeStyleForNumberFormatter;
- (id)p_formattedBodyStringForDouble:(double)a0 locale:(id)a1;
- (id)p_formatTypeDescription;
- (BOOL)supportsAutoMinMax;

@end
