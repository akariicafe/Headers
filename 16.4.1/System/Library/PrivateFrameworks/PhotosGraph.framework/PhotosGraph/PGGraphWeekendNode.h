@class PGGraphWeekendNodeCollection;

@interface PGGraphWeekendNode : PGGraphPartOfWeekNode

@property (readonly, nonatomic) PGGraphWeekendNodeCollection *collection;

+ (id)filter;

- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)init;
- (id)label;

@end
