@interface NUJSRational : NSObject <NUJSRationalExport> {
    long long _numerator;
    long long _denominator;
}

@property long long numerator;
@property long long denominator;

- (id)init;
- (double)toDouble;
- (id)initWithNumerator:(long long)a0 denominator:(long long)a1;

@end
