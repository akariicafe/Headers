@class PGGraphLocationNumberNodeCollection;

@interface PGGraphLocationNumberNode : PGGraphNamedLocationNode

@property (readonly, nonatomic) PGGraphLocationNumberNodeCollection *collection;

+ (id)filter;

- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)label;

@end
