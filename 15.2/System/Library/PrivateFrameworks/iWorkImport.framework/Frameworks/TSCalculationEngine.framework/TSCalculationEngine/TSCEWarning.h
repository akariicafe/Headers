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
+ (void)reportComparisonWarningInContext:(struct TSCEWarningReportingContext { BOOL x0; BOOL x1; id x2; } *)a0 leftType:(char)a1 rightType:(char)a2;

- (BOOL)isIgnored;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)type;
- (unsigned long long)hash;
- (id)displayStringWithCalculationEngine:(id)a0 forTable:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 andCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a2;
- (id)copyByRemappingEntityIDs:(id)a0;

@end
