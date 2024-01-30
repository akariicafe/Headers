@interface NUMutableImageHistogram : NUImageHistogram

+ (Class)_histogramClass;

- (id)_red;
- (id)_blue;
- (id)_green;
- (id)_luminance;
- (void)write:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
