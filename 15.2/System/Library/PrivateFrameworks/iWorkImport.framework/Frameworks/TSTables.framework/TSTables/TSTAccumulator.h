@class NSDate, TSULocale, TSKFormat;

@interface TSTAccumulator : NSObject <NSCopying> {
    struct TSCEValue { union { struct { struct { unsigned long long w[2]; } _decimal; unsigned char _formatFake[24]; unsigned short _baseUnit; BOOL _isUnitlessZero; } DONT_USE_fakeTSCENumberValueStandIn; unsigned long long _buff[9]; } ; unsigned char _type; } _minValue;
    struct TSCEValue { union { struct { struct { unsigned long long w[2]; } _decimal; unsigned char _formatFake[24]; unsigned short _baseUnit; BOOL _isUnitlessZero; } DONT_USE_fakeTSCENumberValueStandIn; unsigned long long _buff[9]; } ; unsigned char _type; } _maxValue;
    struct TSCENumberValue { void /* function */ **_vptr$TSCEAbstractValue; struct TSUDecimal { struct { unsigned long long w[2]; } _decimal; } _decimal; struct TSCEFormat { TSKFormat *_tskFormat; unsigned int _formatType; unsigned char _formatState; struct TSCEDurationFormat { unsigned char useAutomaticUnits : 1; unsigned char durationUnitSmallest : 5; unsigned char durationUnitLargest : 5; unsigned char durationStyle : 2; } _durationFormat; struct TSCEBaseFormat { unsigned char base; unsigned char basePlaces; BOOL baseUseMinusSign; } _baseFormat; struct TSCEFractionFormat { char fractionAccuracy; } _fractionFormat; struct TSCENumberFormat { unsigned char decimalPlaces; unsigned char negativeStyle : 3; unsigned char showThousandsSeparator : 1; unsigned char useAccountingStyle : 1; unsigned short currencyCodeIndex; } _numberFormat; } _format; unsigned short _baseUnit; BOOL _isUnitlessZero; } _productValue;
    struct TSCENumberValue { void /* function */ **_vptr$TSCEAbstractValue; struct TSUDecimal { struct { unsigned long long w[2]; } _decimal; } _decimal; struct TSCEFormat { TSKFormat *_tskFormat; unsigned int _formatType; unsigned char _formatState; struct TSCEDurationFormat { unsigned char useAutomaticUnits : 1; unsigned char durationUnitSmallest : 5; unsigned char durationUnitLargest : 5; unsigned char durationStyle : 2; } _durationFormat; struct TSCEBaseFormat { unsigned char base; unsigned char basePlaces; BOOL baseUseMinusSign; } _baseFormat; struct TSCEFractionFormat { char fractionAccuracy; } _fractionFormat; struct TSCENumberFormat { unsigned char decimalPlaces; unsigned char negativeStyle : 3; unsigned char showThousandsSeparator : 1; unsigned char useAccountingStyle : 1; unsigned short currencyCodeIndex; } _numberFormat; } _format; unsigned short _baseUnit; BOOL _isUnitlessZero; } _numberTotalValue;
    struct TSCEDateValue { void /* function */ **_vptr$TSCEAbstractValue; NSDate *mDate; struct TSCEFormat { TSKFormat *_tskFormat; unsigned int _formatType; unsigned char _formatState; struct TSCEDurationFormat { unsigned char useAutomaticUnits : 1; unsigned char durationUnitSmallest : 5; unsigned char durationUnitLargest : 5; unsigned char durationStyle : 2; } _durationFormat; struct TSCEBaseFormat { unsigned char base; unsigned char basePlaces; BOOL baseUseMinusSign; } _baseFormat; struct TSCEFractionFormat { char fractionAccuracy; } _fractionFormat; struct TSCENumberFormat { unsigned char decimalPlaces; unsigned char negativeStyle : 3; unsigned char showThousandsSeparator : 1; unsigned char useAccountingStyle : 1; unsigned short currencyCodeIndex; } _numberFormat; } mFormat; } _firstDateSeen;
    double _totalSecsSinceReferenceDate;
    double _secondsToAdd;
}

@property (readonly, nonatomic) unsigned long long countA;
@property (readonly, nonatomic) unsigned long long countOfNumberDateDurationOrBool;
@property (readonly, nonatomic) unsigned long long countRows;
@property (readonly, nonatomic) unsigned int boolCount;
@property (readonly, nonatomic) unsigned int boolTrueCount;
@property (readonly, nonatomic) unsigned int numberCount;
@property (readonly, nonatomic) unsigned int dateCount;
@property (readonly, nonatomic) unsigned int durationCount;
@property (readonly, nonatomic) unsigned int stringCount;
@property (readonly, nonatomic) unsigned int errorCount;
@property (readonly, nonatomic) unsigned int noContentCount;
@property (readonly, nonatomic) struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[24]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[9]; } x0; unsigned char x1; } totalValue;
@property (readonly, nonatomic) struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[24]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[9]; } x0; unsigned char x1; } countAValue;
@property (readonly, nonatomic) struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[24]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[9]; } x0; unsigned char x1; } avgAValue;
@property (readonly, nonatomic) struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[24]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[9]; } x0; unsigned char x1; } minValue;
@property (readonly, nonatomic) struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[24]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[9]; } x0; unsigned char x1; } maxValue;
@property (readonly, nonatomic) struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[24]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[9]; } x0; unsigned char x1; } productValue;
@property (readonly, nonatomic) struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[24]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[9]; } x0; unsigned char x1; } countValue;
@property (readonly, nonatomic) struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[24]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[9]; } x0; unsigned char x1; } avgValue;
@property (readonly, nonatomic) struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[24]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[9]; } x0; unsigned char x1; } countRowsValue;
@property (readonly, nonatomic) struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[24]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[9]; } x0; unsigned char x1; } rangeValue;
@property (retain, nonatomic) TSULocale *locale;
@property (nonatomic) BOOL isCircularReference;

- (id)initWithLocale:(id)a0;
- (void)clear;
- (void)accumulate:(id)a0;
- (void)accumulateValue:(const struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[24]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[9]; } x0; unsigned char x1; } *)a0;
- (void).cxx_destruct;
- (id)initWithArchive:(const void *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (void)saveToArchive:(void *)a0;
- (struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[24]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[9]; } x0; unsigned char x1; })p_averageValueWithA:(BOOL)a0;
- (struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[24]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[9]; } x0; unsigned char x1; })countBlankValue;
- (struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[24]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[9]; } x0; unsigned char x1; })valueForType:(unsigned char)a0;

@end
