@interface MinMaxIntFormatter : APFormatter {
    long long _minimum;
    long long _maximum;
}

+ (id)formatterForMin:(long long)a0 max:(long long)a1;

- (long long)maximum;
- (long long)minimum;
- (BOOL)isPartialStringValid:(id)a0 newEditingString:(id *)a1 errorDescription:(id *)a2;
- (void)setMinimum:(long long)a0;
- (void)setMaximum:(long long)a0;
- (id)initWithMin:(long long)a0 max:(long long)a1;

@end
