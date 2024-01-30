@class NSString;

@interface TSCHMutableNumberFormat : TSCHNumberFormat <TSCHCustomFormatUpdateSupport>

@property (nonatomic) unsigned int formatType;
@property (nonatomic) unsigned int decimalPlaces;
@property (copy, nonatomic) NSString *currencyCode;
@property (nonatomic) BOOL useAccountingStyle;
@property (nonatomic) int negativeStyle;
@property (nonatomic) BOOL showThousandsSeparator;
@property (nonatomic) int fractionAccuracy;
@property (copy, nonatomic) NSString *prefixString;
@property (copy, nonatomic) NSString *suffixString;
@property (nonatomic) unsigned int base;
@property (nonatomic) unsigned int basePlaces;
@property (nonatomic) BOOL baseUseMinusSign;

- (void)setBase:(unsigned int)a0;
- (void)setValueType:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setCurrencyCode:(id)a0;
- (void)setPrefixString:(id)a0;
- (void)setDecimalPlaces:(unsigned int)a0;
- (void)setSuffixString:(id)a0;
- (void)setNegativeStyle:(int)a0;
- (void)setShowThousandsSeparator:(BOOL)a0;
- (void)setFractionAccuracy:(int)a0;
- (void)setUseAccountingStyle:(BOOL)a0;
- (void)setBasePlaces:(unsigned int)a0;
- (void)setFormatType:(unsigned int)a0;
- (void)remapCustomFormatKeysWithOldToNewKeyMap:(id)a0;
- (void)updateAfterPasteForDocumentRoot:(id)a0 pasteboardCustomFormatList:(id)a1;
- (void)upgradePreU2_0CustomFormatsForDocumentRoot:(id)a0;
- (id)p_formatTypeAffectedPropertyKeys;
- (void)p_setFractionAccuracy:(int)a0;
- (void)setBaseUseMinusSign:(BOOL)a0;

@end
