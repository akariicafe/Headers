@class NSArray, NSDictionary, PFParallaxLayout, PFParallaxLayer;

@interface PFParallaxLayerStack : NSObject

@property (retain, nonatomic) NSDictionary *layerMap;
@property (readonly, nonatomic) NSArray *layers;
@property (readonly, nonatomic) PFParallaxLayer *backgroundLayer;
@property (readonly, nonatomic) PFParallaxLayer *foregroundLayer;
@property (readonly, nonatomic) BOOL hasMainLayers;
@property (readonly, nonatomic) PFParallaxLayer *inactiveBackgroundLayer;
@property (readonly, nonatomic) PFParallaxLayer *inactiveForegroundLayer;
@property (readonly, nonatomic) BOOL hasInactiveLayers;
@property (readonly, nonatomic) PFParallaxLayer *backgroundBackfillLayer;
@property (readonly, nonatomic) PFParallaxLayer *foregroundBackfillLayer;
@property (readonly, nonatomic) BOOL hasBackfillLayers;
@property (readonly, nonatomic) BOOL hasDebugLayers;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) PFParallaxLayout *layout;
@property (readonly, nonatomic) double clockAreaLuminance;
@property (readonly, nonatomic) BOOL depthEnabled;
@property (readonly, nonatomic) BOOL parallaxDisabled;

- (id)description;
- (void).cxx_destruct;
- (id)initWithLayers:(id)a0 size:(struct CGSize { double x0; double x1; })a1 layout:(id)a2 depthEnabled:(BOOL)a3 parallaxDisabled:(BOOL)a4 clockAreaLuminance:(double)a5;
- (id)layerStackByRemovingLayersWithIdentifiers:(id)a0;
- (id)layerStackByRemovingLayersWithOptions:(unsigned long long)a0;
- (id)layerStackByUpdatingClockAreaLuminance:(double)a0;
- (id)layerStackByUpdatingClockLayerOrder:(id)a0;
- (id)layerStackByUpdatingDepthEnabled:(BOOL)a0;
- (id)layerStackByUpdatingInactiveFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layerStackByUpdatingLayers:(id)a0;
- (id)layerStackByUpdatingLayout:(id)a0;
- (id)layerStackByUpdatingParallaxDisabled:(BOOL)a0;
- (id)layerStackByUpdatingVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layerWithIdentifier:(id)a0;

@end
