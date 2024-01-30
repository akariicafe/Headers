@class TSKFormat, NSDate;

@interface TSCESumAccumulator : NSObject

@property (nonatomic) NSDate *dateAccumulator;
@property (readonly, nonatomic) struct TSCENumberValue { void /* function */ **_vptr$TSCEAbstractValue; struct TSUDecimal { struct { unsigned long long w[2]; } _decimal; } _decimal; struct TSCEFormat { TSKFormat *_tskFormat; unsigned int _formatType; unsigned char _formatState; struct TSCEDurationFormat { unsigned char _useAutomaticUnits : 1; unsigned char _durationUnitSmallest : 6; unsigned char _durationUnitLargest : 6; unsigned char _durationStyle : 3; } _durationFormat; struct TSCEBaseFormat { unsigned char base; unsigned char basePlaces; BOOL baseUseMinusSign; } _baseFormat; struct TSCEFractionFormat { char fractionAccuracy; } _fractionFormat; struct TSCENumberFormat { unsigned char decimalPlaces; unsigned char negativeStyle : 3; unsigned char showThousandsSeparator : 1; unsigned char useAccountingStyle : 1; unsigned short currencyCodeIndex; } _numberFormat; } _format; unsigned short _baseUnit; BOOL _isUnitlessZero; } numberAccumulator;
@property (nonatomic) double secondsToAdd;
@property (nonatomic) BOOL mixedDurationsAndNumbers;
@property (nonatomic) BOOL foundANumber;

- (id).cxx_construct;
- (id)init;
- (void).cxx_destruct;
- (void)addValue:(const struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[24]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[9]; } x0; unsigned char x1; } *)a0 function:(id)a1 evaluationContext:(void *)a2;
- (struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[24]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[9]; } x0; unsigned char x1; })resultForFunction:(id)a0;

@end
