@class NSData, NSIndexSet;

@interface AVApplePortraitMetadataInternal : NSObject

@property (nonatomic) int version;
@property (nonatomic) float apertureFocalRatio;
@property (nonatomic) float minimumApertureFocalRatio;
@property (nonatomic) float maximumApertureFocalRatio;
@property (nonatomic) float portraitLightingEffectStrength;
@property (nonatomic) float luminanceNoiseAmplitude;
@property (nonatomic) int faceOrientation;
@property (retain, nonatomic) NSData *faceObservationsData;
@property (retain, nonatomic) NSIndexSet *indexesOfShallowDepthOfFieldObservations;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } focusRectangle;
@property (nonatomic) unsigned int SDOFRenderingVersion;

- (id)init;
- (void)dealloc;

@end
