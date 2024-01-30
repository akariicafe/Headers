@class NUGLTexture;

@interface NUGLSampler : NSObject

@property (readonly, nonatomic) NUGLTexture *texture;
@property (nonatomic) unsigned int wrapMode;
@property (nonatomic) unsigned int minificationFilter;
@property (nonatomic) unsigned int magnificationFilter;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTexture:(id)a0;

@end
