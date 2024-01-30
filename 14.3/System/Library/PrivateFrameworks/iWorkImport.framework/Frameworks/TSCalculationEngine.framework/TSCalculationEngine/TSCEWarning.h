@class NSDictionary;

@interface TSCEWarning : NSObject

@property (retain, nonatomic) NSDictionary *metadata;
@property (nonatomic) BOOL ignored;

+ (BOOL)setHasVisibleWarnings:(id)a0;
+ (void)reportNonNumericCellWarningInContext:(struct TSCEWarningReportingContext { BOOL x0; BOOL x1; id x2; } *)a0 reference:(id)a1;
+ (void)reportMonthOutOfRangeWarningInContext:(struct TSCEWarningReportingContext { BOOL x0; BOOL x1; id x2; } *)a0;
+ (void)reportDayOutOfRangeWarningInContext:(struct TSCEWarningReportingContext { BOOL x0; BOOL x1; id x2; } *)a0;
+ (void)reportBoolToNumberConversionWarningInContext:(struct TSCEWarningReportingContext { BOOL x0; BOOL x1; id x2; } *)a0;
+ (void)reportMismatchedSizesWarningInContext:(struct TSCEWarningReportingContext { BOOL x0; BOOL x1; id x2; } *)a0;
+ (void)reportLossOfUnitsWarningInContext:(struct TSCEWarningReportingContext { BOOL x0; BOOL x1; id x2; } *)a0;
+ (void)reportAutomaticUnitConversionWarningInContext:(struct TSCEWarningReportingContext { BOOL x0; BOOL x1; id x2; } *)a0;
+ (void)reportComparisonWarningInContext:(struct TSCEWarningReportingContext { BOOL x0; BOOL x1; id x2; } *)a0 leftType:(int)a1 rightType:(int)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isIgnored;
- (unsigned long long)hash;
- (id)description;
- (id)type;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)displayStringWithCalculationEngine:(id)a0 forTable:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a1 andCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a2;
- (id)copyByRemappingEntityIDs:(id)a0;

@end
