@interface NUJSRational : NSObject <NUJSRationalExport> {
    long long _numerator;
    long long _denominator;
}

@property long long numerator;
@property long long denominator;

- (double)toDouble;
- (id)init;
- (id)initWithNumerator:(long long)a0 denominator:(long long)a1;

@end
