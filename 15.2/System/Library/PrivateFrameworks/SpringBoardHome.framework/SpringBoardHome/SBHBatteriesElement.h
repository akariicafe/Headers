@interface SBHBatteriesElement : SBHCustomIconElement

+ (id)elementIdentifier;

- (id)displayName;
- (BOOL)iconSupportsRasterization:(id)a0;
- (unsigned long long)supportedGridSizeClassesForIcon:(id)a0;
- (id)icon:(id)a0 unmaskedImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a1;
- (BOOL)iconAllowsLaunch:(id)a0;

@end
