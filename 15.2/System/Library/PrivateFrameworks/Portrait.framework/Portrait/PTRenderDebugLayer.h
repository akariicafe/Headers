@interface PTRenderDebugLayer : NSObject

- (id)initWithDevice:(id)a0 library:(id)a1 debugLayer:(long long)a2;
- (void)renderDebugLayer:(id)a0 renderRequest:(id)a1 inDisparity:(id)a2 disparityDiff:(id)a3 focusObject:(struct PTFocus { float x0; float x1; float x2; float x3; float x4; float x5; })a4 algorithm:(int)a5 debugTextures:(id)a6;
- (void)dumpDebug:(id)a0 renderRequest:(id)a1 debugTextures:(id)a2;

@end
