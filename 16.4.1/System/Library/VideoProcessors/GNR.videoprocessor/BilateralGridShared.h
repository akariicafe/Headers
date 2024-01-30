@class BilateralGridShaders;

@interface BilateralGridShared : NSObject {
    BilateralGridShaders *_shaders;
}

+ (id)sharedInstance;
+ (void)releaseSharedInstance;
+ (id)getSharedInstanceOrRelease:(BOOL)a0;

- (void).cxx_destruct;
- (id)getShaders:(id)a0 normalizeGridConfidence:(BOOL)a1;

@end
