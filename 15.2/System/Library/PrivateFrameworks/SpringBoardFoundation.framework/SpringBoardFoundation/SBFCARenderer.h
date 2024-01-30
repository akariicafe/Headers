@class NSXPCConnection;

@interface SBFCARenderer : NSObject {
    NSXPCConnection *_rendererServiceConnection;
}

+ (id)sharedInstance;
+ (BOOL)shouldUseXPCServiceForRendering;

- (void)warmup;
- (void).cxx_destruct;
- (void)_createConnection;
- (id)_remoteObjectProxy;
- (id)treatWallpaperImage:(id)a0 needsLuminanceTreatment:(BOOL)a1 needsDimmingTreatment:(BOOL)a2 downsampleFactor:(double)a3 averageColor:(id)a4;
- (id)applyMaterialRecipe:(id)a0 recipeName:(id)a1 containingBundle:(id)a2 weighting:(double)a3 downsampleFactor:(double)a4;

@end
