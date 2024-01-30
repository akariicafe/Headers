@class CMIImagePyramidShaders;

@interface CMIImagePyramidShared : NSObject {
    CMIImagePyramidShaders *_shaders;
}

+ (id)sharedInstance;
+ (void)releaseSharedInstance;
+ (id)getSharedInstanceOrRelease:(BOOL)a0;

- (void).cxx_destruct;
- (id)getShaders:(id)a0;

@end
