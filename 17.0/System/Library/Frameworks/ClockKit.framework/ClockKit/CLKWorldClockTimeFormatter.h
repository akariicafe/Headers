@interface CLKWorldClockTimeFormatter : NSObject

+ (void)initialize;
+ (id)dayForOffset:(double)a0;
+ (id)differenceForOffset:(double)a0 caps:(BOOL)a1 suppressZero:(BOOL)a2;
+ (id)differenceForOffset:(double)a0 caps:(BOOL)a1 suppressZero:(BOOL)a2 size:(long long)a3;
+ (id)differenceForOffset:(double)a0 caps:(BOOL)a1;
+ (void)invalidateTimeZone:(id)a0;

@end
