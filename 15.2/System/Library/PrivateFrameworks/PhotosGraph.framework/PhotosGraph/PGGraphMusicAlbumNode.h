@class NSString;

@interface PGGraphMusicAlbumNode : PGGraphOptimizedNode

@property (readonly, nonatomic) NSString *title;

- (id)initWithTitle:(id)a0;
- (BOOL)hasProperties:(id)a0;
- (id)description;
- (id)propertyDictionary;
- (id)label;
- (void).cxx_destruct;
- (unsigned short)domain;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;

@end
