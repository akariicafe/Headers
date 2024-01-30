@class NSMutableDictionary;

@interface CUIPSDLayerEffects : NSObject

@property BOOL visible;
@property double effectScale;
@property (retain) NSMutableDictionary *effectList;

- (id)dropShadow;
- (id)colorOverlay;
- (id)init;
- (void)addLayerEffectComponent:(id)a0;
- (void)dealloc;

@end
