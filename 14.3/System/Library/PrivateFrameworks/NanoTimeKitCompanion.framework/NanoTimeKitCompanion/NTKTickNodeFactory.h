@class SKTexture, NSDictionary, CLKDevice, SKTextureAtlas;

@interface NTKTickNodeFactory : NSObject {
    NSDictionary *_imagesDictionary;
    SKTextureAtlas *_tickTextureAtlas;
    SKTexture *_tickTexture;
    CLKDevice *_device;
}

+ (id)sharedInstance;
+ (void)_deallocInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_asyncDeallocInstance;
- (id)imagesDictionaryForDevice:(id)a0;
- (id)_shaderWithTickWidth:(double)a0 filterWidth:(double)a1 forDevice:(id)a2;
- (id)_tickTextureForDevice:(id)a0;
- (void)layoutNodes:(id)a0 forDevice:(id)a1 offset:(unsigned long long)a2 center:(struct CGPoint { double x0; double x1; })a3 radius:(double)a4 angleMultiplier:(double)a5 scale:(double)a6 rotate:(BOOL)a7 round:(BOOL)a8;
- (id)_shaderCacheForDevice:(id)a0;
- (id)textureAtlasForDevice:(id)a0;
- (id)ticks:(unsigned int)a0 forDevice:(id)a1 center:(struct CGPoint { double x0; double x1; })a2 radius:(double)a3 color1:(id)a4 color2:(id)a5 smallSize:(struct CGSize { double x0; double x1; })a6 largeSize:(struct CGSize { double x0; double x1; })a7 smallFilterWidth:(double)a8 largeFilterWidth:(double)a9 l1mod:(unsigned int)a10 l2mod:(unsigned int)a11;
- (void)colorizeTicks:(id)a0 baseColor:(id)a1 accentColor:(id)a2 baseAlpha:(double)a3 accentAlpha:(double)a4 accentModulo:(long long)a5;
- (void)setBackgroundColor:(id)a0 onTicks:(id)a1;

@end
