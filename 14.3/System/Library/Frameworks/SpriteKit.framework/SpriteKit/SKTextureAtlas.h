@class NSArray, NSDictionary, NSString;

@interface SKTextureAtlas : NSObject <NSSecureCoding> {
    NSDictionary *_textureDict;
    NSString *_atlasName;
    BOOL _isCUIImageAtlas;
    struct unordered_map<std::__1::basic_string<char>, SKTexture *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKTexture *> > > { struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> *> **__value_; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> *> *> > { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> *> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> *> *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, std::__1::hash<std::__1::basic_string<char> >, true> > { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, std::__1::equal_to<std::__1::basic_string<char> >, true> > { float __value_; } __p3_; } __table_; } _textureMap;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *textureNames;

+ (id)atlasWithDictionary:(id)a0;
+ (id)lookupCachedTextureNamed:(id)a0;
+ (id)atlasNamed:(id)a0;
+ (struct CGImage { } *)createCGImageFromCUINamedImage:(struct CGImage { } *)a0 withSize:(struct CGSize { double x0; double x1; })a1 atRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (id)findTextureNamed:(id)a0;
+ (BOOL)canUseObjectForAtlas:(id)a0;
+ (void)preloadTextureAtlases:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (id)atlasFromCUIImageAtlas:(id)a0 withName:(id)a1;
+ (id)getSupportedPostfixes;
+ (void)preloadTextureAtlasesNamed:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)_exportAtlasWithDictionary:(id)a0 toFile:(id)a1 forcePOT:(BOOL)a2;
+ (void)_exportAtlasWithDictionary:(id)a0 toFile:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)commonInit;
- (void)dealloc;
- (void)unload;
- (id)textureNamed:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id).cxx_construct;
- (void)encodeWithCoder:(id)a0;
- (void)preloadWithCompletionHandler:(id /* block */)a0;
- (void)loadTextures;
- (id)_copyImageData;
- (void)_prePopulateCache;
- (void)parseAtlasPropertyList:(id)a0 withPath:(id)a1;
- (void)loadTexturesFromCUIImageAtlas:(id)a0;
- (id)createTextureFromProvider:(struct CGImageProvider { } *)a0 andSource:(struct CGImage { } *)a1;
- (id)createSubTextureFromTexture:(id)a0 andCUINamedImage:(id)a1 andOrigin:(struct CGPoint { double x0; double x1; })a2;
- (id)findTextureNamedFromAtlas:(id)a0;
- (BOOL)isEqualToTextureAtlas:(id)a0;

@end
