@class SyntheticLongShaders;

@interface SyntheticLongShared : NSObject {
    SyntheticLongShaders *_shaders;
}

+ (id)sharedInstance;
+ (void)releaseSharedInstance;
+ (id)getSharedInstanceOrRelease:(BOOL)a0;

- (void).cxx_destruct;
- (id)getShaders:(id)a0;

@end
