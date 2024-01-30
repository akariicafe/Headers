@interface CNObservedResult : NSObject

@property (readonly) unsigned long long logTime;
@property (readonly) id logValue;
@property (readonly) BOOL isResultEvent;
@property (readonly) unsigned long long time;
@property (readonly) unsigned long long tolerance;
@property (readonly) id value;

+ (id)resultWithTime:(unsigned long long)a0 value:(id)a1;
+ (id)completionResultWithTime:(unsigned long long)a0;
+ (id)failureWithError:(id)a0 time:(unsigned long long)a1;
+ (id)resultWithTime:(unsigned long long)a0 tolerance:(unsigned long long)a1 value:(id)a2;
+ (id)completionResultWithTime:(unsigned long long)a0 tolerance:(unsigned long long)a1;
+ (id)failureWithError:(id)a0 time:(unsigned long long)a1 tolerance:(unsigned long long)a2;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeWithExactTime:(unsigned long long)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeWithTime:(unsigned long long)a0 tolerance:(unsigned long long)a1;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })underflowSafeRangeWithTime:(unsigned long long)a0 tolerance:(unsigned long long)a1;
+ (BOOL)rangeWouldUnderflowWithTime:(unsigned long long)a0 tolerance:(unsigned long long)a1;
+ (BOOL)rangeWouldOverflowWithTime:(unsigned long long)a0 tolerance:(unsigned long long)a1;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })overflowSafeRangeWithTime:(unsigned long long)a0 tolerance:(unsigned long long)a1;
+ (id)resultWithTimeInterval:(double)a0 tolerance:(double)a1 value:(id)a2;
+ (id)completionResultWithTimeInterval:(double)a0 tolerance:(double)a1;
+ (id)failureWithError:(id)a0 timeInterval:(double)a1 tolerance:(double)a2;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })timeRange;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithValue:(id)a0 time:(unsigned long long)a1 tolerance:(unsigned long long)a2;
- (id)formattedTimeString;
- (unsigned long long)hash;

@end
