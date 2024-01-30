@class NSTimeZone;

@interface NSISO8601DateFormatter : NSFormatter <NSSecureCoding> {
    struct __CFDateFormatter { } *_formatter;
    NSTimeZone *_timeZone;
    unsigned long long _formatOptions;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSTimeZone *timeZone;
@property unsigned long long formatOptions;

+ (id)stringFromDate:(id)a0 timeZone:(id)a1 formatOptions:(unsigned long long)a2;

- (void)encodeWithCoder:(id)a0;
- (id)stringForObjectValue:(id)a0;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;
- (id)initWithCoder:(id)a0;
- (id)stringFromDate:(id)a0;
- (void)dealloc;
- (id)init;
- (id)dateFromString:(id)a0;
- (void)updateFormatter;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 range:(inout struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 error:(out id *)a3;

@end
