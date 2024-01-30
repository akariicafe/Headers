@class SCNNode, NSArray, NSDictionary, NSMutableDictionary, NTKSnowglobePromise;
@protocol MTLDevice;

@interface NTKSnowglobeAssetLibrary : NSObject {
    SCNNode *_leftEye;
    SCNNode *_rightEye;
    NSDictionary *_shaderModifier;
    NSArray *_digitPromises;
    NTKSnowglobePromise *_backgroundObjectPromise;
    NTKSnowglobePromise *_daintyPromise;
    NSMutableDictionary *_digitPools;
    id _lightingMaterialContents;
}

@property (readonly, retain, nonatomic) id<MTLDevice> sharedDevice;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_applyCustomShadingToMaterial:(id)a0;
- (void)_configurePhysicsBodyForNode:(id)a0;
- (id)_copyAndConfigureDigitNode:(id)a0;
- (void)_fetchEyes:(id /* block */)a0;
- (id)_lightMaterialContents;
- (id)_loadBackgroundObjects;
- (id)_loadDainty;
- (id)_loadDigitNumber:(unsigned long long)a0;
- (void)_replaceEyesForNode:(id)a0 withCompletion:(id /* block */)a1;
- (id)createScene;
- (void)digitNodeForNumber:(unsigned long long)a0 queue:(id)a1 withCompletion:(id /* block */)a2;
- (id)digitShaderModifier;
- (void)loadDaintyOnQueue:(id)a0 withCompletion:(id /* block */)a1;
- (void)loadRandomBackgroundShapeOnQueue:(id)a0 withCompletion:(id /* block */)a1;

@end
