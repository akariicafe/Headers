@class NSMutableDictionary;

@interface CUIPSDLayerEffects : NSObject

@property BOOL visible;
@property double effectScale;
@property (retain) NSMutableDictionary *effectList;

- (void)dealloc;
- (id)init;
- (id)dropShadow;
- (void)addLayerEffectComponent:(id)a0;
- (id)colorOverlay;

@end
