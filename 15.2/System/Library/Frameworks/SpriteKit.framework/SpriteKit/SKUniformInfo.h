@class SKUniform;

@interface SKUniformInfo : NSObject

@property unsigned long long seed;
@property unsigned long long textureTarget;
@property (retain) SKUniform *uniform;

- (void).cxx_destruct;
- (id)init;

@end
