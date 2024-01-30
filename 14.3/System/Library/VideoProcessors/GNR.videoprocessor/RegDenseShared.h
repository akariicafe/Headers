@class RegDenseShaders;

@interface RegDenseShared : NSObject {
    RegDenseShaders *_shaders;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)getShaders:(id)a0;

@end
