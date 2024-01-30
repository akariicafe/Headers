@class NSUUID, NSString, PXGLayout, PXRegionOfInterest, NSObject, NSMutableArray, PXStoryItemPlacementContext;
@protocol UICoordinateSpace, PXDisplayAsset;

@interface PXStoryItemPlacement : NSObject <PXStoryMutableItemPlacement, NSCopying> {
    PXStoryItemPlacementContext *_context;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rectVelocity;
    long long _rectReference;
    NSObject<UICoordinateSpace> *_coordinateSpace;
    PXGLayout *_layout;
    NSMutableArray *_registeredSourceIdentifiers;
}

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) BOOL hasGeometry;
@property (readonly, nonatomic) double alpha;
@property (readonly, nonatomic) id<PXDisplayAsset> displayedAsset;
@property (readonly, nonatomic) struct { struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } t; } displayedAssetContentsRect;
@property (readonly, nonatomic) struct { union { struct { float topLeft; float topRight; float bottomLeft; float bottomRight; } ; float byIndex[4]; } ; } cornerRadius;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedDisplayedAssetRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedTitleRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedSubtitleRect;
@property (readonly, nonatomic) double chromeAlpha;
@property (readonly, nonatomic) double scrubberAlpha;
@property (readonly, nonatomic) double legibilityOverlayAlpha;
@property (readonly, nonatomic) float soundVolume;
@property (readonly, nonatomic) PXStoryItemPlacement *otherItemsPlacement;
@property (readonly, nonatomic) PXRegionOfInterest *regionOfInterest;
@property (readonly, nonatomic) PXStoryItemPlacement *adjustedPreferredPlacement;
@property (readonly, nonatomic) NSString *diagnosticDescription;

- (void)setAlpha:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDisplayedAsset:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setCornerRadius:(struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; })a0;
- (void)setSoundVolume:(float)a0;
- (id)initWithContext:(id)a0 configuration:(id /* block */)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectInCoordinateSpace:(id)a0 velocity:(out struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (void)setChromeAlpha:(double)a0;
- (void)adjustPreferredPlacementInSourceWithIdentifier:(id)a0 configuration:(id /* block */)a1;
- (id)copyWithConfiguration:(id /* block */)a0;
- (id)copyWithRegionOfInterest:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectInLayout:(id)a0 velocity:(out struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (void)registerSourceIdentifier:(id)a0;
- (void)setDisplayedAssetContentsRect:(struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; })a0;
- (void)setLegibilityOverlayAlpha:(double)a0;
- (void)setNormalizedDisplayedAssetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNormalizedSubtitleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNormalizedTitleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setOtherItemsPlacement:(id)a0;
- (void)setRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 velocity:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inCoordinateSpace:(id)a2;
- (void)setRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 velocity:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inLayout:(id)a2;
- (void)setScrubberAlpha:(double)a0;

@end
