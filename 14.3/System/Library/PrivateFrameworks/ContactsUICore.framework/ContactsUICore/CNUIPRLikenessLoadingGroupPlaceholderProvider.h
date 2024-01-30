@interface CNUIPRLikenessLoadingGroupPlaceholderProvider : CNUIPRLikenessLoadingPlaceholderProvider

@property (readonly, nonatomic) unsigned long long backgroundStyle;

- (struct CGImage { } *)renderRoundedRectImageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (struct CGImage { } *)renderCircularImageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)initWithBackgroundStyle:(unsigned long long)a0;

@end
