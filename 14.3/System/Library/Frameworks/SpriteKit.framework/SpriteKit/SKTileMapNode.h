@class SKTileSet, NSString, UIColor, NSDictionary, SKShader;

@interface SKTileMapNode : SKNode <NSCopying, NSSecureCoding> {
    struct SKCTileMapNode { void /* function */ **x0; id x1; BOOL x2; struct unordered_map<std::__1::basic_string<char>, SKAttributeValue *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKAttributeValue *> > > { struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> **x0; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > { unsigned long long x0; } x0; } x1; } x0; } x0; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true> > { unsigned long long x0; } x2; struct __compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true> > { float x0; } x3; } x0; } x3; id x4; id x5; struct SKCNode *x6; struct vector<SKCNode *, std::__1::allocator<SKCNode *> > { struct SKCNode **x0; struct SKCNode **x1; struct __compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> > { struct SKCNode **x0; } x2; } x7; struct vector<SKCNode *, std::__1::allocator<SKCNode *> > { struct SKCNode **x0; struct SKCNode **x1; struct __compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> > { struct SKCNode **x0; } x2; } x8; struct vector<SKCNode *, std::__1::allocator<SKCNode *> > { struct SKCNode **x0; struct SKCNode **x1; struct __compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> > { struct SKCNode **x0; } x2; } x9; id x10; float x11; BOOL x12; struct list<SKCAction *, std::__1::allocator<SKCAction *> > { struct __list_node_base<SKCAction *, void *> { struct __list_node_base<SKCAction *, void *> *x0; struct __list_node_base<SKCAction *, void *> *x1; } x0; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > > { unsigned long long x0; } x1; } x13; struct list<SKCAction *, std::__1::allocator<SKCAction *> > { struct __list_node_base<SKCAction *, void *> { struct __list_node_base<SKCAction *, void *> *x0; struct __list_node_base<SKCAction *, void *> *x1; } x0; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > > { unsigned long long x0; } x1; } x14; BOOL x15; id x16; struct shared_ptr<PKPath> { struct PKPath *x0; struct __shared_weak_count *x1; } x17; unsigned int x18; unsigned int x19; BOOL x20; long long x21; float x22; float x23; BOOL x24; BOOL x25; struct { void /* unknown type, empty encoding */ x0[4]; } x26; struct { void /* unknown type, empty encoding */ x0[4]; } x27; unsigned int x28; BOOL x29; id x30; unsigned long long x31; float x32; unsigned int x33; unsigned int x34; unsigned char x35; unsigned char x36; unsigned int x37; unsigned int x38; int x39; int x40; int x41; int x42; struct map<unsigned int, SKCTileMapNodeChunk *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, SKCTileMapNodeChunk *> > > { struct __tree<std::__1::__value_type<unsigned int, SKCTileMapNodeChunk *>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, SKCTileMapNodeChunk *>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, SKCTileMapNodeChunk *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, SKCTileMapNodeChunk *>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, SKCTileMapNodeChunk *>, std::__1::less<unsigned int>, true> > { unsigned long long x0; } x2; } x0; } x43; } *_skcTileMapNode;
    SKTileSet *_tileSet;
    struct CGSize { double width; double height; } _tileSize;
    void /* unknown type, empty encoding */ _isoOrigin;
    void /* unknown type, empty encoding */ _isoColumnVector;
    void /* unknown type, empty encoding */ _isoRowVector;
    float _isoColumnWidth;
    float _isoRowHeight;
    float _isoHeightScalar;
    float _hexRadius;
    BOOL _enableAutomapping;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *tileSetName;
@property (nonatomic) unsigned long long numberOfColumns;
@property (nonatomic) unsigned long long numberOfRows;
@property (nonatomic) struct CGSize { double x0; double x1; } tileSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } mapSize;
@property (retain, nonatomic) SKTileSet *tileSet;
@property (nonatomic) double colorBlendFactor;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) long long blendMode;
@property (nonatomic) struct CGPoint { double x0; double x1; } anchorPoint;
@property (retain, nonatomic) SKShader *shader;
@property (copy, nonatomic) NSDictionary *attributeValues;
@property (nonatomic) unsigned int lightingBitMask;
@property (nonatomic) BOOL enableAutomapping;

+ (id)tileMapNodeWithTileSet:(id)a0 columns:(unsigned long long)a1 rows:(unsigned long long)a2 tileSize:(struct CGSize { double x0; double x1; })a3 tileGroupLayout:(id)a4;
+ (id)debugHierarchyPropertyDescriptions;
+ (id)debugHierarchyValueForPropertyWithName:(id)a0 onObject:(id)a1 outOptions:(id *)a2 outError:(id *)a3;
+ (id)tileMapNodeWithTileSet:(id)a0 columns:(unsigned long long)a1 rows:(unsigned long long)a2 tileSize:(struct CGSize { double x0; double x1; })a3;
+ (id)tileMapNodeWithTileSet:(id)a0 columns:(unsigned long long)a1 rows:(unsigned long long)a2 tileSize:(struct CGSize { double x0; double x1; })a3 fillWithTileGroup:(id)a4;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)commonInit;
- (void)dealloc;
- (BOOL)isEqualToNode:(id)a0;
- (double)alpha;
- (id)copy;
- (id)initWithCoder:(id)a0;
- (void)setAlpha:(double)a0;
- (void)removeAllTiles;
- (void)encodeWithCoder:(id)a0;
- (void)calculateSize;
- (struct SKCNode { void /* function */ **x0; id x1; BOOL x2; struct unordered_map<std::__1::basic_string<char>, SKAttributeValue *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKAttributeValue *> > > { struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> **x0; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > { unsigned long long x0; } x0; } x1; } x0; } x0; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true> > { unsigned long long x0; } x2; struct __compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true> > { float x0; } x3; } x0; } x3; id x4; id x5; struct SKCNode *x6; struct vector<SKCNode *, std::__1::allocator<SKCNode *> > { struct SKCNode **x0; struct SKCNode **x1; struct __compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> > { struct SKCNode **x0; } x2; } x7; struct vector<SKCNode *, std::__1::allocator<SKCNode *> > { struct SKCNode **x0; struct SKCNode **x1; struct __compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> > { struct SKCNode **x0; } x2; } x8; struct vector<SKCNode *, std::__1::allocator<SKCNode *> > { struct SKCNode **x0; struct SKCNode **x1; struct __compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> > { struct SKCNode **x0; } x2; } x9; id x10; float x11; BOOL x12; struct list<SKCAction *, std::__1::allocator<SKCAction *> > { struct __list_node_base<SKCAction *, void *> { struct __list_node_base<SKCAction *, void *> *x0; struct __list_node_base<SKCAction *, void *> *x1; } x0; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > > { unsigned long long x0; } x1; } x13; struct list<SKCAction *, std::__1::allocator<SKCAction *> > { struct __list_node_base<SKCAction *, void *> { struct __list_node_base<SKCAction *, void *> *x0; struct __list_node_base<SKCAction *, void *> *x1; } x0; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > > { unsigned long long x0; } x1; } x14; BOOL x15; id x16; struct shared_ptr<PKPath> { struct PKPath *x0; struct __shared_weak_count *x1; } x17; unsigned int x18; unsigned int x19; BOOL x20; long long x21; float x22; float x23; BOOL x24; BOOL x25; struct { void /* unknown type, empty encoding */ x0[4]; } x26; struct { void /* unknown type, empty encoding */ x0[4]; } x27; } *)_makeBackingNode;
- (void)_didMakeBackingNode;
- (id)tileDefinitionForTileID:(unsigned int)a0;
- (void)setColumns:(unsigned long long)a0 andRows:(long long)a1;
- (void)rebuildTileSprites;
- (BOOL)shouldUnarchiveTileSet;
- (void)setStartData:(unsigned long long)a0 rows:(unsigned long long)a1 tileSize:(struct CGSize { double x0; double x1; })a2 tileSet:(id)a3;
- (void)fillWithTileGroup:(id)a0;
- (id)initWithTileSet:(id)a0 columns:(unsigned long long)a1 rows:(unsigned long long)a2 tileSize:(struct CGSize { double x0; double x1; })a3;
- (id)initWithTileSet:(id)a0 columns:(unsigned long long)a1 rows:(unsigned long long)a2 tileSize:(struct CGSize { double x0; double x1; })a3 fillWithTileGroup:(id)a4;
- (id)initWithTileSet:(id)a0 columns:(unsigned long long)a1 rows:(unsigned long long)a2 tileSize:(struct CGSize { double x0; double x1; })a3 tileGroupLayout:(id)a4;
- (void)updateTileGroupsAtX:(unsigned long long)a0 y:(unsigned long long)a1;
- (void)updateTileDefinitionWithoutAutomappingAtX:(unsigned long long)a0 y:(unsigned long long)a1;
- (unsigned int)getTileIDWithTileGroup:(id)a0 andTileDefinition:(id)a1;
- (id)valueForAttributeNamed:(id)a0;
- (void)setValue:(id)a0 forAttributeNamed:(id)a1;
- (void)setRawTiles:(unsigned int *)a0 rows:(unsigned long long)a1 columns:(unsigned long long)a2;
- (void)fillWithTileDefinition:(id)a0;
- (id)tileDefinitionAtColumn:(unsigned long long)a0 row:(unsigned long long)a1;
- (id)tileGroupAtColumn:(unsigned long long)a0 row:(unsigned long long)a1;
- (void)setTileGroup:(id)a0 forColumn:(unsigned long long)a1 row:(unsigned long long)a2;
- (void)setTileGroup:(id)a0 andTileDefinition:(id)a1 forColumn:(unsigned long long)a2 row:(unsigned long long)a3;
- (void)setTileGroupWithoutUpdate:(id)a0 forColumn:(unsigned long long)a1 row:(unsigned long long)a2;
- (void)setTileGroupWithoutUpdate:(id)a0 tileDefinition:(id)a1 forColumn:(unsigned long long)a2 row:(unsigned long long)a3;
- (void)setTileGroup:(id)a0 forTileIndicies:(id)a1;
- (void)setTileGroup:(id)a0 andTileDefinition:(id)a1 forTileIndicies:(id)a2;
- (void)validateAllTiles;
- (void)fillArrayWithTiles:(unsigned int *)a0;
- (void)fillArray:(unsigned int *)a0 withTilesFromColumn:(unsigned long long)a1 row:(unsigned long long)a2 forWidth:(unsigned long long)a3 height:(unsigned long long)a4;
- (void)setTilesFromArray:(unsigned int *)a0;
- (void)setTilesFromArray:(unsigned int *)a0 fromColumn:(unsigned long long)a1 row:(unsigned long long)a2 forWidth:(unsigned long long)a3 height:(unsigned long long)a4;
- (void)clearModifiedTileTracking;
- (void)getTileModifiedData:(long long *)a0 outMinRowModified:(long long *)a1 outMaxColumnModified:(long long *)a2 outmaxRowModified:(long long *)a3;
- (unsigned long long)tileColumnIndexFromPosition:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)tileRowIndexFromPosition:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })centerOfTileAtColumn:(unsigned long long)a0 row:(unsigned long long)a1;
- (id)createTileStampFromColumn:(unsigned long long)a0 row:(unsigned long long)a1 withWidth:(unsigned long long)a2 height:(unsigned long long)a3 addToTileSet:(BOOL)a4;
- (void)applyTileStamp:(id)a0 inColumn:(long long)a1 row:(long long)a2;
- (void)forceRedraw;

@end
