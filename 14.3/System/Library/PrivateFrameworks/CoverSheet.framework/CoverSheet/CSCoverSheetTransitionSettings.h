@class NSString;

@interface CSCoverSheetTransitionSettings : PTSettings <BSDescriptionProviding>

@property (nonatomic) BOOL blursPanel;
@property (nonatomic) double blurRadius;
@property (nonatomic) double blurStart;
@property (nonatomic) double blurEnd;
@property (nonatomic) double blurEndReducedTransparency;
@property (nonatomic) BOOL fadesContent;
@property (nonatomic) double maxContentAlpha;
@property (nonatomic) double contentFadeStart;
@property (nonatomic) double contentFadeEnd;
@property (nonatomic) BOOL darkensContent;
@property (nonatomic) double darkeningColorWhite;
@property (nonatomic) double darkeningColorAlpha;
@property (nonatomic) double darkeningStart;
@property (nonatomic) double darkeningEnd;
@property (nonatomic) BOOL panelWallpaper;
@property (nonatomic) BOOL trackingWallpaper;
@property (nonatomic) double trackingWallpaperParallaxFactor;
@property (nonatomic) BOOL revealWallpaper;
@property (nonatomic) BOOL fadePanelWallpaper;
@property (nonatomic) double fadePanelWallpaperStart;
@property (nonatomic) double fadePanelWallpaperEnd;
@property (nonatomic) BOOL iconsFlyIn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)settingsControllerModule;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)setDefaultValues;
- (id)succinctDescriptionBuilder;

@end
