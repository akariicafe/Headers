@interface TSDGLTextureParameter : NSObject {
    unsigned int _pname;
    unsigned long long _paramCount;
    int *_intData;
    float *_floatData;
    unsigned int _target;
}

+ (id)stringWithCurrentTextureParameters;
+ (id)textureParameterWithPName:(unsigned int)a0 floatParameter:(float)a1;
+ (id)textureParameterWithPName:(unsigned int)a0 floatParameters:(float *)a1 count:(unsigned long long)a2;
+ (id)textureParameterWithPName:(unsigned int)a0 floatParameters:(float *)a1 count:(unsigned long long)a2 target:(unsigned int)a3;
+ (id)textureParameterWithPName:(unsigned int)a0 integerParameter:(int)a1;
+ (id)textureParameterWithPName:(unsigned int)a0 integerParameters:(int *)a1 count:(unsigned long long)a2;
+ (id)textureParameterWithPName:(unsigned int)a0 integerParameters:(int *)a1 count:(unsigned long long)a2 target:(unsigned int)a3;

- (void)dealloc;
- (id)initWithPName:(unsigned int)a0 paramCount:(unsigned long long)a1 intData:(int *)a2 floatData:(float *)a3 target:(unsigned int)a4;
- (void)setGLTextureParameter;

@end
