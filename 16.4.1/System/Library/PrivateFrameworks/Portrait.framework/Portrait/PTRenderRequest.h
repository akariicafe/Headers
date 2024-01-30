@class NSDictionary, PTTexture;
@protocol PTRenderState, MTLTexture;

@interface PTRenderRequest : NSObject

@property (retain, nonatomic) id<PTRenderState> renderState;
@property (retain, nonatomic) PTTexture *sourceColor;
@property (retain, nonatomic) id<MTLTexture> sourceDisparity;
@property (retain, nonatomic) PTTexture *destinationColor;
@property (nonatomic) float aperture;
@property (nonatomic) float focusDistance;
@property (nonatomic) float alphaLowLight;
@property (nonatomic) int AGC;
@property (nonatomic) float highlightBoostFactor;
@property (nonatomic) float highlightChromaFactor;
@property (nonatomic) unsigned int frameId;
@property (nonatomic) float disparityMin;
@property (nonatomic) float disparityMax;
@property (nonatomic) struct { unsigned long long x; unsigned long long y; unsigned long long width; unsigned long long height; } scissorRect;
@property (retain, nonatomic) NSDictionary *options;

- (id)init;
- (void).cxx_destruct;

@end
