@class SyntheticReferenceShaders;

@interface SyntheticReferenceShared : NSObject {
    SyntheticReferenceShaders *_shaders;
}

+ (id)sharedInstance;
+ (void)releaseSharedInstance;
+ (id)getSharedInstanceOrRelease:(BOOL)a0;

- (void).cxx_destruct;
- (id)getShaders:(id)a0;

@end
