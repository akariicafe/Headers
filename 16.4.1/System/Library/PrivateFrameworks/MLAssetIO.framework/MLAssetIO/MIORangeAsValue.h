@interface MIORangeAsValue : NSValue {
    struct _MIORange { long long lowerBound; long long upperBound; } _range;
}

+ (id)valueWithMIORange:(struct _MIORange { long long x0; long long x1; })a0;

- (const char *)objCType;
- (void)getValue:(void *)a0;
- (struct _MIORange { long long x0; long long x1; })MIORangeValue;

@end
