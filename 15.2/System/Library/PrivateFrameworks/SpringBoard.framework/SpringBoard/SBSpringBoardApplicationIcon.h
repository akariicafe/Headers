@interface SBSpringBoardApplicationIcon : SBLeafIcon {
    long long _interfaceStyle;
}

- (id)displayNameForLocation:(id)a0;
- (id)initWithLeafIdentifier:(id)a0 applicationBundleID:(id)a1;
- (id)init;
- (id)generateIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
- (BOOL)isUninstallSupported;
- (BOOL)canTruncateLabel;
- (BOOL)canTightenLabel;
- (id)initWithInterfaceStyle:(long long)a0;
- (id)_generateImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;

@end
