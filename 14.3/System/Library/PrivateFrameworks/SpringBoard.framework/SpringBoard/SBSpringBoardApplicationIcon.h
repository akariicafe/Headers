@interface SBSpringBoardApplicationIcon : SBLeafIcon {
    long long _interfaceStyle;
}

- (id)init;
- (BOOL)isUninstallSupported;
- (id)displayNameForLocation:(id)a0;
- (id)generateIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
- (BOOL)canTruncateLabel;
- (BOOL)canTightenLabel;
- (id)initWithLeafIdentifier:(id)a0 applicationBundleID:(id)a1;
- (id)initWithInterfaceStyle:(long long)a0;
- (id)_generateImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;

@end
