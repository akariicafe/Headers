@interface SBHShortcutsFolderElement : SBHCustomIconElement

+ (id)elementIdentifier;

- (id)containerBundleIdentifier;
- (id)displayName;
- (unsigned long long)supportedGridSizeClassesForIcon:(id)a0;
- (id)icon:(id)a0 imageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a1;
- (id)configurationStorageIdentifier;
- (BOOL)iconSupportsConfiguration:(id)a0;

@end
