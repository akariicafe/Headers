@interface TSUMutableNumberFormat : TSUNumberFormat

- (void)setBase:(unsigned char)a0;
- (void)setNilValueForKey:(id)a0;
- (void)setCurrencyCode:(id)a0;
- (void)setPrefixString:(id)a0;
- (void)p_copyIVarsFromNumberFormat:(id)a0;
- (void)setBasePlaces:(unsigned short)a0;
- (void)setDecimalPlaces:(unsigned short)a0;
- (void)setFractionAccuracy:(char)a0;
- (void)setNegativeStyle:(unsigned char)a0;
- (void)setShowThousandsSeparator:(BOOL)a0;
- (void)setSuffixString:(id)a0;
- (void)setUseAccountingStyle:(BOOL)a0;
- (void)setCustomFormatKey:(id)a0;

@end
