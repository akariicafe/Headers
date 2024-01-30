@class NSData, NSIndexSet, AVApplePortraitMetadataInternal;

@interface AVApplePortraitMetadata : NSObject <NSSecureCoding> {
    AVApplePortraitMetadataInternal *_internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) float apertureFocalRatio;
@property (readonly) float minimumApertureFocalRatio;
@property (readonly) float maximumApertureFocalRatio;
@property (readonly) float portraitLightingEffectStrength;
@property (readonly) float luminanceNoiseAmplitude;
@property (readonly) int faceOrientation;
@property (readonly) NSData *faceObservationsData;
@property (readonly) NSIndexSet *indexesOfShallowDepthOfFieldObservations;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } focusRectangle;
@property (readonly) unsigned int SDOFRenderingVersion;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithInternal:(id)a0;
- (id)initWithPortraitMetadataDictionary:(id)a0;

@end
