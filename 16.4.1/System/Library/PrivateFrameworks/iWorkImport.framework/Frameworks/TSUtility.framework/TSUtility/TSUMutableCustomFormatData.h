@class NSString, NSArray, NSIndexSet;

@interface TSUMutableCustomFormatData : TSUCustomFormatData

@property (copy, nonatomic) NSString *formatString;
@property (copy, nonatomic) NSArray *interstitialStrings;
@property (copy, nonatomic) NSIndexSet *interstitialStringInsertionIndexes;
@property (nonatomic) double scaleFactor;
@property (nonatomic) char fractionAccuracy;
@property (nonatomic) unsigned char minimumIntegerWidth;
@property (nonatomic) unsigned char decimalWidth;
@property (nonatomic) unsigned char numberOfNonSpaceIntegerPlaceholderDigits;
@property (nonatomic) unsigned char numberOfNonSpaceDecimalPlaceholderDigits;
@property (nonatomic) unsigned char indexFromRightOfLastDigitPlaceholder;
@property (nonatomic) unsigned char numberOfHashDecimalPlaceholders;
@property (nonatomic) unsigned char totalNumberOfDecimalPlaceholdersInFormat;
@property (nonatomic) unsigned short currencyCodeIndex;
@property (nonatomic) BOOL showThousandsSeparator;
@property (nonatomic) BOOL useAccountingStyle;
@property (nonatomic) BOOL requiresFractionReplacement;
@property (nonatomic) BOOL isConditional;
@property (nonatomic) BOOL formatContainsIntegerToken;
@property (nonatomic) BOOL isComplexFormat;

+ (id)customFormatData;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
