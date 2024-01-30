@class HKValueRange;

@interface HKUIDateLabel : UILabel

@property (readonly, nonatomic) HKValueRange *dateRange;
@property (nonatomic) BOOL useUppercase;

+ (id)dateStringForDateRange:(id)a0 formatTemplate:(long long)a1 useUppercase:(BOOL)a2;
+ (id)_formattedTextFromDate:(id)a0 formatTemplate:(long long)a1 useUppercase:(BOOL)a2;

- (void).cxx_destruct;
- (id)init;
- (void)setDateRange:(id)a0 formatTemplate:(long long)a1;
- (BOOL)_setDateRange:(id)a0;
- (void)setDate:(id)a0 formatTemplate:(long long)a1;

@end
