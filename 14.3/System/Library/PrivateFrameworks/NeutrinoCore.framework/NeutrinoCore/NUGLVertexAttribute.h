@class NSString;

@interface NUGLVertexAttribute : NSObject

@property (readonly) NSString *name;
@property (readonly) unsigned int type;
@property (readonly) int size;
@property (readonly) long long sizeInBytes;
@property (readonly, nonatomic) BOOL normalized;

+ (id)vec2Attribute:(id)a0;
+ (id)vec4Attribute:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (long long)_typeSize;
- (id)initWithName:(id)a0 type:(unsigned int)a1 size:(int)a2;
- (id)initWithName:(id)a0 type:(unsigned int)a1 size:(int)a2 normalized:(BOOL)a3;

@end
