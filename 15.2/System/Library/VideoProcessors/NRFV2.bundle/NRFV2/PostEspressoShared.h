@class PostEspressoShaders;

@interface PostEspressoShared : NSObject {
    PostEspressoShaders *_shaders;
}

+ (id)sharedInstance;
+ (void)releaseSharedInstance;
+ (id)getSharedInstanceOrRelease:(BOOL)a0;

- (void).cxx_destruct;
- (id)getShaders:(id)a0 networkVersion:(int)a1;

@end
