@class NSString;

@interface PGGraphMusicAlbumNode : PGGraphOptimizedNode

@property (readonly, nonatomic) NSString *title;

- (unsigned short)domain;
- (BOOL)hasProperties:(id)a0;
- (id)initWithTitle:(id)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)label;
- (id)description;
- (id)propertyDictionary;
- (void).cxx_destruct;

@end
