@class BPSRemoteImageView, NSString, UIImageView;

@interface BPSWatchView : UIView

@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long sizeOverride;
@property (retain, nonatomic) BPSRemoteImageView *watchImageView;
@property (copy, nonatomic) NSString *styleVersionSuffix;
@property (readonly, nonatomic) UIImageView *watchScreenImageView;
@property (nonatomic) BOOL wantsLightenBlendedScreen;
@property (nonatomic) BOOL wantsInternalFPOLabel;
@property (retain, nonatomic) NSString *screenImageSearchBundleIdentifier;
@property (copy, nonatomic) NSString *screenImageName;

- (id)initWithStyle:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (id)initWithStyle:(unsigned long long)a0 allowsMaterialFallback:(BOOL)a1;
- (void)overrideMaterial:(unsigned long long)a0 size:(unsigned long long)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)image;
- (id)initWithStyle:(unsigned long long)a0 versionModifier:(id)a1 allowsMaterialFallback:(BOOL)a2;
- (id)watchAssetBundle;
- (id)screenBackground:(struct CGSize { double x0; double x1; })a0;
- (void)applyScreenStyle;
- (unsigned long long)deviceSize;
- (void)layoutWatchScreenImageView;
- (struct CGSize { double x0; double x1; })screenImageSize;
- (id)initWithStyle:(unsigned long long)a0 andVersionModifier:(id)a1;
- (void)_cleanedImageName:(id *)a0 withFallbackImage:(id *)a1;

@end
