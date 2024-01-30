@interface NUMutableHistogram : NUHistogram

- (void)write:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)increment:(long long)a0;
- (void)observeValue:(double)a0;
- (void)observeValuesInDataSet:(id)a0;

@end
