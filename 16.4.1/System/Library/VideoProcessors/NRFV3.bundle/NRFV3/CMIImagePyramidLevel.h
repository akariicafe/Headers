@protocol MTLTexture;

@interface CMIImagePyramidLevel : NSObject {
    unsigned long long _levelIndex;
}

@property (retain, nonatomic, setter=setTexture:) id<MTLTexture> texture;

- (void)dealloc;
- (void).cxx_destruct;

@end
