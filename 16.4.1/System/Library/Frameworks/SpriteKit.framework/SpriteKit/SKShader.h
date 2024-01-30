@class NSArray, NSString, NSMutableDictionary, NSPointerArray, NSMutableArray;

@interface SKShader : NSObject <NSCopying, NSSecureCoding> {
    NSMutableArray *_uniforms;
    NSArray *_attributes;
    NSMutableDictionary *_uniformData;
    NSString *_source;
    NSString *_fileName;
    BOOL _isPrecompiledMetal;
    NSString *_compileLog;
    BOOL _programDirty;
    BOOL _programWithTransformDirty;
    NSPointerArray *_targetNodes;
    BOOL _usesTimeUniform;
    BOOL _usesPathLengthUniform;
    BOOL _usesSpriteSizeUniform;
    struct shared_ptr<jet_program> { struct jet_program *__ptr_; struct __shared_weak_count *__cntrl_; } _backingProgram;
    struct shared_ptr<jet_program> { struct jet_program *__ptr_; struct __shared_weak_count *__cntrl_; } _backingProgramWithTransform;
    struct map<std::string, std::shared_ptr<jet_buffer_pool>, std::less<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<jet_buffer_pool>>>> { struct __tree<std::__value_type<std::string, std::shared_ptr<jet_buffer_pool>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<jet_buffer_pool>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::shared_ptr<jet_buffer_pool>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::shared_ptr<jet_buffer_pool>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<jet_buffer_pool>>, std::less<std::string>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _attributeBuffers;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSArray *_textureUniforms;
@property (readonly) void *_attributeBuffers;
@property (readonly) struct shared_ptr<jet_program> { struct jet_program *x0; struct __shared_weak_count *x1; } _backingProgram;
@property (readonly) struct shared_ptr<jet_program> { struct jet_program *x0; struct __shared_weak_count *x1; } _backingProgramWithTransform;
@property (readonly) struct shared_ptr<jet_command_buffer> { struct jet_command_buffer *x0; struct __shared_weak_count *x1; } _commands;
@property BOOL performFullCapture;
@property (copy) NSString *source;
@property (copy) NSArray *uniforms;
@property (copy, nonatomic) NSArray *attributes;

+ (id)shader;
+ (id)precompiledMetalShaderWithFile:(id)a0 uniforms:(id)a1;
+ (id)shaderWithFileNamed:(id)a0;
+ (id)shaderWithSource:(id)a0;
+ (id)shaderWithSource:(id)a0 uniforms:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithSource:(id)a0;
- (id).cxx_construct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isValid;
- (id)init;
- (void).cxx_destruct;
- (void)_addTargetNode:(id)a0;
- (id)fragmentPrelude;
- (BOOL)_backingProgramIsDirty;
- (struct shared_ptr<jet_command_buffer> { struct jet_command_buffer *x0; struct __shared_weak_count *x1; })_commandsForBatchOffset:(int)a0 count:(int)a1;
- (id)_fullMetalVertexSourceWithImplementation:(BOOL)a0;
- (id)_fullVertexSourceWithImplementation:(long long)a0;
- (id)_generateMetalSource;
- (id)_getLegacyUniformData;
- (id)_getMetalFragmentFunctionName;
- (id)_getMetalFragmentShaderSource;
- (id)_getMetalVertexOutDefinition;
- (id)_getMetalVertexShaderSource:(BOOL)a0;
- (id)_getShaderCompilationLog;
- (struct shared_ptr<jet_program> { struct jet_program *x0; struct __shared_weak_count *x1; })_makeBackingProgramWithImplementation:(long long)a0;
- (void)_removeTargetNode:(id)a0;
- (void)_setUniformsDirty;
- (BOOL)_usesPathLengthUniform;
- (BOOL)_usesTimeUniform;
- (void)addUniform:(id)a0;
- (id)fragmentPreludeMetal;
- (id)fullFragmentSource;
- (id)fullMetalFragmentSource;
- (id)fullMetalVertexSource;
- (id)fullMetalVertexWithTransformSource;
- (id)fullVertexSource;
- (id)fullVertexWithTransformSource;
- (void)generateFragmentAttributeDeclares:(id *)a0;
- (void)generateVertexAttributeDeclares:(id *)a0 statements:(id *)a1;
- (id)initWithSource:(id)a0 uniforms:(id)a1;
- (BOOL)isEqualToShader:(id)a0;
- (void)removeUniformNamed:(id)a0;
- (id)uniformNamed:(id)a0;

@end
