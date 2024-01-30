@class NSDate, NSString, NSTimeZone;

@interface NSDateCheckingResult : NSTextCheckingResult {
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    NSDate *_date;
    NSTimeZone *_timeZone;
    double _duration;
    NSDate *_referenceDate;
    id _underlyingResult;
    BOOL _timeIsSignificant;
    BOOL _timeIsApproximate;
    BOOL _timeIsPast;
    NSString *_leadingText;
    NSString *_trailingText;
}

@property (readonly) NSTimeZone *timeZone;
@property (readonly) double duration;
@property (readonly) NSDate *referenceDate;
@property (readonly) void *underlyingResult;
@property (readonly) BOOL timeIsSignificant;
@property (readonly) BOOL timeIsApproximate;
@property (readonly) BOOL timeIsPast;

+ (BOOL)supportsSecureCoding;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 date:(id)a1 timeZone:(id)a2 duration:(double)a3 referenceDate:(id)a4 underlyingResult:(void *)a5 timeIsSignificant:(BOOL)a6 timeIsApproximate:(BOOL)a7;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 date:(id)a1 timeZone:(id)a2 duration:(double)a3 referenceDate:(id)a4 underlyingResult:(void *)a5 timeIsSignificant:(BOOL)a6 timeIsApproximate:(BOOL)a7 timeIsPast:(BOOL)a8 leadingText:(id)a9 trailingText:(id)a10;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 date:(id)a1 timeZone:(id)a2 duration:(double)a3 referenceDate:(id)a4 underlyingResult:(void *)a5 timeIsSignificant:(BOOL)a6 timeIsApproximate:(BOOL)a7 timeIsPast:(BOOL)a8;
- (unsigned long long)resultType;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 date:(id)a1 timeZone:(id)a2 duration:(double)a3 referenceDate:(id)a4 underlyingResult:(void *)a5;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 date:(id)a1 timeZone:(id)a2 duration:(double)a3 referenceDate:(id)a4;
- (void)dealloc;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 date:(id)a1 timeZone:(id)a2 duration:(double)a3;
- (id)leadingText;
- (id)date;
- (id)trailingText;
- (id)initWithCoder:(id)a0;
- (id)resultByAdjustingRangesWithOffset:(long long)a0;
- (id)description;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 date:(id)a1;
- (BOOL)_adjustRangesWithOffset:(long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
