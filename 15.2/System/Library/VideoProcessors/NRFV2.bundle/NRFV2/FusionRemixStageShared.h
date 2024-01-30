@class FuseRemixShaders;

@interface FusionRemixStageShared : NSObject {
    FuseRemixShaders *_fuseRemixShaders[2];
}

+ (id)sharedInstance;
+ (void)releaseSharedInstance;
+ (id)getSharedInstanceOrRelease:(BOOL)a0;

- (void).cxx_destruct;
- (id)getShaders:(id)a0 fp16:(BOOL)a1;

@end
