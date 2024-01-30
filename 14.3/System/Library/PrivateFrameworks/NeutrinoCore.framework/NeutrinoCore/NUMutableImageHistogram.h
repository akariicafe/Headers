@interface NUMutableImageHistogram : NUImageHistogram

+ (Class)_histogramClass;

- (id)_red;
- (id)_blue;
- (id)_green;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)write:(id /* block */)a0;
- (id)_luminance;

@end
