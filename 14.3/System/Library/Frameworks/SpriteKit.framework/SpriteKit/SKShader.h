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
    struct map<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> > > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> >, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> >, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> >, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long __value_; } __pair3_; } __tree_; } _attributeBuffers;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSArray *_textureUniforms;
@property (readonly) struct map<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> > > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> >, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> >, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> >, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x0; } x2; } x0; } *_attributeBuffers;
@property (readonly) struct shared_ptr<jet_program> { struct jet_program *x0; struct __shared_weak_count *x1; } _backingProgram;
@property (readonly) struct shared_ptr<jet_program> { struct jet_program *x0; struct __shared_weak_count *x1; } _backingProgramWithTransform;
@property (readonly) struct shared_ptr<jet_command_buffer> { struct jet_command_buffer *x0; struct __shared_weak_count *x1; } _commands;
@property BOOL performFullCapture;
@property (copy) NSString *source;
@property (copy) NSArray *uniforms;
@property (copy, nonatomic) NSArray *attributes;

+ (id)shader;
+ (id)shaderWithSource:(id)a0;
+ (id)shaderWithFileNamed:(id)a0;
+ (id)shaderWithSource:(id)a0 uniforms:(id)a1;
+ (id)precompiledMetalShaderWithFile:(id)a0 uniforms:(id)a1;

- (id)initWithSource:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isValid;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_usesTimeUniform;
- (void)_removeTargetNode:(id)a0;
- (void)_addTargetNode:(id)a0;
- (BOOL)isEqualToShader:(id)a0;
- (id)initWithSource:(id)a0 uniforms:(id)a1;
- (id)_getLegacyUniformData;
- (id)_getMetalVertexOutDefinition;
- (id)_fullVertexSourceWithImplementation:(long long)a0;
- (void)generateVertexAttributeDeclares:(id *)a0 statements:(id *)a1;
- (void)generateFragmentAttributeDeclares:(id *)a0;
- (id)fragmentPrelude;
- (id)_fullMetalVertexSourceWithImplementation:(BOOL)a0;
- (id)fragmentPreludeMetal;
- (id)_generateMetalSource;
- (struct shared_ptr<jet_program> { struct jet_program *x0; struct __shared_weak_count *x1; })_makeBackingProgramWithImplementation:(long long)a0;
- (id)fullMetalVertexSource;
- (id)fullMetalVertexWithTransformSource;
- (id)fullMetalFragmentSource;
- (id)fullVertexSource;
- (id)fullVertexWithTransformSource;
- (id)fullFragmentSource;
- (struct shared_ptr<jet_command_buffer> { struct jet_command_buffer *x0; struct __shared_weak_count *x1; })_commandsForBatchOffset:(int)a0 count:(int)a1;
- (id)_getMetalFragmentFunctionName;
- (void)addUniform:(id)a0;
- (id)uniformNamed:(id)a0;
- (void)removeUniformNamed:(id)a0;
- (BOOL)_backingProgramIsDirty;
- (id)_getShaderCompilationLog;
- (id)_getMetalVertexShaderSource:(BOOL)a0;
- (id)_getMetalFragmentShaderSource;
- (BOOL)_usesPathLengthUniform;
- (void)_setUniformsDirty;

@end
