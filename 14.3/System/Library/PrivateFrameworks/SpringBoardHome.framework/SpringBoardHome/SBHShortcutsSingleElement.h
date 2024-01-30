@interface SBHShortcutsSingleElement : SBHCustomIconElement

+ (id)elementIdentifier;

- (id)icon:(id)a0 imageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a1;
- (id)containerBundleIdentifier;
- (BOOL)iconSupportsConfiguration:(id)a0;
- (id)configurationStorageIdentifier;
- (unsigned long long)supportedGridSizeClassesForIcon:(id)a0;
- (id)displayName;

@end
