@class NSString, NSDate, TSCERegexMatcher, TSKFormat;

@interface TSCELogicalTest : NSObject {
    int _operation;
    struct TSCENumberValue { void /* function */ **_vptr$TSCEAbstractValue; struct TSUDecimal { struct { unsigned long long w[2]; } _decimal; } _decimal; struct TSCEFormat { TSKFormat *_tskFormat; unsigned int _formatType; unsigned char _formatState; struct TSCEDurationFormat { unsigned char useAutomaticUnits : 1; unsigned char durationUnitSmallest : 5; unsigned char durationUnitLargest : 5; unsigned char durationStyle : 2; } _durationFormat; struct TSCEBaseFormat { unsigned char base; unsigned char basePlaces; BOOL baseUseMinusSign; } _baseFormat; struct TSCEFractionFormat { char fractionAccuracy; } _fractionFormat; struct TSCENumberFormat { unsigned char decimalPlaces; unsigned char negativeStyle : 3; unsigned char showThousandsSeparator : 1; unsigned char useAccountingStyle : 1; unsigned short currencyCodeIndex; } _numberFormat; } _format; unsigned short _baseUnit; BOOL _isUnitlessZero; } _value;
}

@property (retain, nonatomic) TSCERegexMatcher *matcher;
@property (nonatomic) void *evaluationContext;
@property (retain, nonatomic) NSString *string;
@property (retain, nonatomic) NSDate *date;

+ (id)logicalTestWithCriterion:(struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[24]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[9]; } x0; unsigned char x1; })a0 functionSpec:(id)a1 evaluationContext:(void *)a2;

- (unsigned long long)cost;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id).cxx_construct;
- (BOOL)compare:(struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[24]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[9]; } x0; unsigned char x1; })a0 withContext:(void *)a1;
- (id)initWithCriterion:(struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[24]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[9]; } x0; unsigned char x1; })a0 functionSpec:(id)a1 evaluationContext:(void *)a2;
- (int)criteriaParser:(id)a0;

@end
