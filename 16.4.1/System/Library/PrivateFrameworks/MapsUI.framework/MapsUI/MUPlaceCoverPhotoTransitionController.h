@interface MUPlaceCoverPhotoTransitionController : NSObject {
    struct MUPlaceHeaderMetrics { double topToTitleSpacing; struct MUPlaceCoverPhotoMetrics { double aspectRatio; BOOL hasLogo; struct CGSize { double width; double height; } logoSize; double coverPhotoBottomToLogoBottomSpacing; double coverPhotoContainerToTitleSpacing; double startingLogoAlphaTransitionValue; double endingLogoAlphaTransitionValue; } coverPhotoMetrics; } _metrics;
    id /* block */ _updateHandler;
}

@property (readonly, nonatomic) long long currentScrollDirection;
@property (nonatomic) double expansionProgress;
@property (readonly, nonatomic) BOOL hideLogo;
@property (readonly, nonatomic) double logoImageAlpha;
@property (readonly, nonatomic) double coverPhotoAlpha;
@property (readonly, nonatomic) double interpolatedCoverPhotoToTitleSpacing;
@property (readonly, nonatomic) BOOL shouldBlurChromeHeaderButtons;

- (void).cxx_destruct;
- (double)_logoImageAlphaForVerticalDrag;
- (void)_updateWithOldProgress:(double)a0;
- (double)coverPhotoHeightForProposedWidth:(double)a0;
- (id)initWithMetrics:(struct MUPlaceHeaderMetrics { double x0; struct MUPlaceCoverPhotoMetrics { double x0; BOOL x1; struct CGSize { double x0; double x1; } x2; double x3; double x4; double x5; double x6; } x1; })a0 updateHandler:(id /* block */)a1;

@end
