@interface SBSpringBoardApplicationIcon : SBLeafIcon {
    long long _interfaceStyle;
}

- (id)generateIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
- (id)initWithLeafIdentifier:(id)a0 applicationBundleID:(id)a1;
- (id)displayNameForLocation:(id)a0;
- (BOOL)isUninstallSupported;
- (id)init;
- (BOOL)canTightenLabel;
- (BOOL)canTruncateLabel;
- (id)_generateImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
- (id)initWithInterfaceStyle:(long long)a0;

@end
