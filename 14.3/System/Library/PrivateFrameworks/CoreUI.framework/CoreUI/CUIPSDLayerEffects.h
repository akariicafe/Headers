@class NSMutableDictionary;

@interface CUIPSDLayerEffects : NSObject

@property BOOL visible;
@property double effectScale;
@property (retain) NSMutableDictionary *effectList;

- (id)init;
- (id)colorOverlay;
- (void)dealloc;
- (void)addLayerEffectComponent:(id)a0;
- (id)dropShadow;

@end
