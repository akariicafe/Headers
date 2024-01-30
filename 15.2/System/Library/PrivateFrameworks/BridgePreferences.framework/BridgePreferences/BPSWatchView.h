@class BPSRemoteImageView, NSString, UIImageView;

@interface BPSWatchView : UIView <BPSWatchViewProtocol>

@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long sizeOverride;
@property (retain, nonatomic) BPSRemoteImageView *watchImageView;
@property (copy, nonatomic) NSString *styleVersionSuffix;
@property (readonly, nonatomic) UIImageView *watchScreenImageView;
@property (nonatomic) BOOL wantsLightenBlendedScreen;
@property (nonatomic) BOOL wantsInternalFPOLabel;
@property (retain, nonatomic) NSString *screenImageSearchBundleIdentifier;
@property (copy, nonatomic) NSString *screenImageName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithStyle:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)image;
- (id)initWithStyle:(unsigned long long)a0 allowsMaterialFallback:(BOOL)a1;
- (void)overrideMaterial:(unsigned long long)a0 size:(unsigned long long)a1;
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
