@class SKTexture, CLKDevice;

@interface _NTKAnalogSceneCache : NSObject {
    SKTexture *_faceCircleSpriteTexture;
    CLKDevice *_device;
}

+ (id)sharedInstance;
+ (void)_deallocInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_asyncDeallocInstance;
- (id)faceCircleSpriteTextureForDevice:(id)a0;

@end
