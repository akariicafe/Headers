@interface CCUIModuleSettings : NSObject <NSCopying> {
    struct CCUILayoutSize { unsigned long long width; unsigned long long height; } _portraitLayoutSize;
    struct CCUILayoutSize { unsigned long long width; unsigned long long height; } _landscapeLayoutSize;
    BOOL _portraitDoubleMargin;
    BOOL _landscapeDoubleMargin;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPortraitLayoutSize:(struct CCUILayoutSize { unsigned long long x0; unsigned long long x1; })a0 landscapeLayoutSize:(struct CCUILayoutSize { unsigned long long x0; unsigned long long x1; })a1 portraitDoubleMargin:(BOOL)a2 landscapeDoubleMargin:(BOOL)a3;
- (BOOL)doubleMarginForInterfaceOrientation:(long long)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithPortraitLayoutSize:(struct CCUILayoutSize { unsigned long long x0; unsigned long long x1; })a0 landscapeLayoutSize:(struct CCUILayoutSize { unsigned long long x0; unsigned long long x1; })a1;
- (struct CCUILayoutSize { unsigned long long x0; unsigned long long x1; })layoutSizeForInterfaceOrientation:(long long)a0;

@end
