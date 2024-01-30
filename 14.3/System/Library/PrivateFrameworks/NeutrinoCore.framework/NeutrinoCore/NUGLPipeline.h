@class NUGLContext, NSArray, NSDictionary, NSOrderedSet, NSError, NSMutableDictionary, NSMutableSet;

@interface NUGLPipeline : NUGLObject {
    long long _buildStatus;
    NSError *_buildError;
    NUGLContext *_currentContext;
    NSMutableDictionary *_uniformValues;
    NSMutableDictionary *_uniformSamplers;
    NSMutableSet *_dirtyKeys;
}

@property (readonly, nonatomic) NSArray *stages;
@property (readonly, nonatomic) NSDictionary *uniforms;
@property (readonly, nonatomic) NSDictionary *attributes;
@property (readonly, nonatomic) NSArray *orderedAttributes;
@property (readonly, nonatomic) NSOrderedSet *samplers;

- (void)end:(id)a0;
- (void)delete;
- (id)init;
- (void)begin:(id)a0;
- (void).cxx_destruct;
- (void)_build:(id)a0;
- (void)generate:(id)a0;
- (void)run:(id)a0 block:(id /* block */)a1;
- (BOOL)build:(id)a0 error:(out id *)a1;
- (id)initWithStages:(id)a0;
- (id)valueForUniform:(id)a0;
- (void)setValue:(id)a0 forUniform:(id)a1;
- (id)samplerForUniform:(id)a0;
- (void)setSampler:(id)a0 forUniform:(id)a1;
- (void)drawVertexArray:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 mode:(long long)a2;
- (void)_drawVertexArray:(id)a0 block:(id /* block */)a1;
- (BOOL)_validate:(id)a0;
- (void)_beginDrawing:(id)a0;
- (void)_endDrawing:(id)a0;

@end
