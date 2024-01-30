@interface TSKDurationFormat : TSKFormat <NSCopying>

@property (readonly, nonatomic) BOOL useAutomaticUnits;
@property (readonly, nonatomic) int durationUnitSmallest;
@property (readonly, nonatomic) int durationUnitLargest;
@property (readonly, nonatomic) int durationStyle;

+ (int)automaticMaxAndMinDurationUnitsForTimeInterval:(double)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithFormatType:(unsigned int)a0;
- (id)asDurationFormat;
- (id)initWithUseAutomaticUnits:(BOOL)a0 durationUnitSmallest:(int)a1 durationUnitLargest:(int)a2 durationStyle:(int)a3;
- (int)durationUnitLargestWithTimeInterval:(double)a0;
- (int)maxAndMinDurationUnitsForTimeInterval:(double)a0;
- (id)stringFromDurationTimeInterval:(double)a0 locale:(id)a1 showPrecision:(BOOL)a2;
- (id)formatByFixingUnitsIfNecessaryForTimeInterval:(double)a0;
- (id)stringFromDurationTimeInterval:(double)a0 locale:(id)a1;

@end
