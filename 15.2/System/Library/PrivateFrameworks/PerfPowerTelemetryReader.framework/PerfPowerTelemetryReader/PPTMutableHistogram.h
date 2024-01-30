@interface PPTMutableHistogram : PPTHistogram

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)increment:(long long)a0;
- (void)recordSample:(id)a0;
- (void)recordSamples:(id)a0;

@end
