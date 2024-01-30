@class NSArray;

@interface MTLRenderPipelineReflection : NSObject

@property (readonly) NSArray *vertexArguments;
@property (readonly) NSArray *fragmentArguments;
@property (readonly) NSArray *tileArguments;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

@end
