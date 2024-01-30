@class NSArray, NSDictionary, NSString;

@interface SKTextureAtlas : NSObject <NSSecureCoding> {
    NSDictionary *_textureDict;
    NSString *_atlasName;
    BOOL _isCUIImageAtlas;
    struct unordered_map<std::string, SKTexture *, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, SKTexture *>>> { struct __hash_table<std::__hash_value_type<std::string, SKTexture *>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, SKTexture *>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, SKTexture *>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, SKTexture *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, SKTexture *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, SKTexture *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, SKTexture *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, SKTexture *>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, SKTexture *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, SKTexture *>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, SKTexture *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, SKTexture *>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, SKTexture *>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, SKTexture *>, std::hash<std::string>, std::equal_to<std::string>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, SKTexture *>, std::equal_to<std::string>, std::hash<std::string>, true>> { float __value_; } __p3_; } __table_; } _textureMap;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *textureNames;

+ (id)lookupCachedTextureNamed:(id)a0;
+ (id)atlasNamed:(id)a0;
+ (struct CGImage { } *)createCGImageFromCUINamedImage:(struct CGImage { } *)a0 withSize:(struct CGSize { double x0; double x1; })a1 atRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (id)findTextureNamed:(id)a0;
+ (BOOL)canUseObjectForAtlas:(id)a0;
+ (void)preloadTextureAtlases:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (id)atlasFromCUIImageAtlas:(id)a0 withName:(id)a1;
+ (id)getSupportedPostfixes;
+ (id)atlasWithDictionary:(id)a0;
+ (void)preloadTextureAtlasesNamed:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)_exportAtlasWithDictionary:(id)a0 toFile:(id)a1 forcePOT:(BOOL)a2;
+ (void)_exportAtlasWithDictionary:(id)a0 toFile:(id)a1;

- (void)unload;
- (void)commonInit;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)textureNamed:(id)a0;
- (void)dealloc;
- (id).cxx_construct;
- (void)loadTextures;
- (id)_copyImageData;
- (void)preloadWithCompletionHandler:(id /* block */)a0;
- (void)_prePopulateCache;
- (void)parseAtlasPropertyList:(id)a0 withPath:(id)a1;
- (void)loadTexturesFromCUIImageAtlas:(id)a0;
- (id)createTextureFromProvider:(struct CGImageProvider { } *)a0 andSource:(struct CGImage { } *)a1;
- (id)createSubTextureFromTexture:(id)a0 andCUINamedImage:(id)a1 andOrigin:(struct CGPoint { double x0; double x1; })a2;
- (id)findTextureNamedFromAtlas:(id)a0;
- (BOOL)isEqualToTextureAtlas:(id)a0;

@end
