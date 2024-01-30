@class UIColor, SKUniform;

@interface NTKTickShader : SKShader {
    SKUniform *_filterUniform;
    SKUniform *_backgroundColorUniform;
}

@property (readonly, nonatomic) double tickWidth;
@property (readonly, nonatomic) double filterWidth;
@property (retain, nonatomic) UIColor *backgroundColor;

+ (id)shaderWithTickWidth:(float)a0 filterWidth:(float)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTickWidth:(float)a0 filterWidth:(float)a1;

@end
