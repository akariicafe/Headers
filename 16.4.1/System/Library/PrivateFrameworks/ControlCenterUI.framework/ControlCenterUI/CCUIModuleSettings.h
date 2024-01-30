@interface CCUIModuleSettings : NSObject <NSCopying> {
    struct CCUILayoutSize { unsigned long long width; unsigned long long height; } _portraitLayoutSize;
    struct CCUILayoutSize { unsigned long long width; unsigned long long height; } _landscapeLayoutSize;
    BOOL _portraitDoubleMargin;
    BOOL _landscapeDoubleMargin;
}

- (BOOL)doubleMarginForInterfaceOrientation:(long long)a0;
- (id)initWithPortraitLayoutSize:(struct CCUILayoutSize { unsigned long long x0; unsigned long long x1; })a0 landscapeLayoutSize:(struct CCUILayoutSize { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithPortraitLayoutSize:(struct CCUILayoutSize { unsigned long long x0; unsigned long long x1; })a0 landscapeLayoutSize:(struct CCUILayoutSize { unsigned long long x0; unsigned long long x1; })a1 portraitDoubleMargin:(BOOL)a2 landscapeDoubleMargin:(BOOL)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (struct CCUILayoutSize { unsigned long long x0; unsigned long long x1; })layoutSizeForInterfaceOrientation:(long long)a0;

@end
