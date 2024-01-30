@class NSString, NSArray;

@interface SKBitmapFont : NSObject <NSSecureCoding> {
    NSString *_fontName;
    NSString *_filePath;
    double _lineHeight;
    double _baseLine;
    NSArray *_characterSprites;
    struct map<unsigned short, SKSpriteNode *, std::__1::less<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, SKSpriteNode *> > > { struct __tree<std::__1::__value_type<unsigned short, SKSpriteNode *>, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, SKSpriteNode *>, std::__1::less<unsigned short>, true>, std::__1::allocator<std::__1::__value_type<unsigned short, SKSpriteNode *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned short, SKSpriteNode *>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, SKSpriteNode *>, std::__1::less<unsigned short>, true> > { unsigned long long __value_; } __pair3_; } __tree_; } _characterSpriteByChar;
    struct map<unsigned short, double, std::__1::less<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, double> > > { struct __tree<std::__1::__value_type<unsigned short, double>, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, double>, std::__1::less<unsigned short>, true>, std::__1::allocator<std::__1::__value_type<unsigned short, double> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned short, double>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, double>, std::__1::less<unsigned short>, true> > { unsigned long long __value_; } __pair3_; } __tree_; } _characterAdvanceByChar;
    struct map<unsigned int, double, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, double> > > { struct __tree<std::__1::__value_type<unsigned int, double>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, double>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, double> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, double>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, double>, std::__1::less<unsigned int>, true> > { unsigned long long __value_; } __pair3_; } __tree_; } _characterKerningByCharPair;
    BOOL _internal;
    NSString *_fileName;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)fontForFileNamed:(id)a0;
+ (id)fontWithTexture:(id)a0 fontDataString:(id)a1;
+ (id)_fontForFileNamed:(id)a0;

- (id)fontName;
- (id)init;
- (void).cxx_destruct;
- (double)lineHeight;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void)encodeWithCoder:(id)a0;
- (id)spriteForCharacterNamed:(unsigned short)a0;
- (double)kerningForCharacterNamed:(unsigned short)a0 followedBy:(unsigned short)a1;
- (double)advanceForCharacterNamed:(unsigned short)a0;
- (BOOL)loadFontWithTexture:(id)a0 fontDataString:(id)a1;

@end
