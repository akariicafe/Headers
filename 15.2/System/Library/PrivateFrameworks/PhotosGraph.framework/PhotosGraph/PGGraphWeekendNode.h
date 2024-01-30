@class PGGraphWeekendNodeCollection;

@interface PGGraphWeekendNode : PGGraphPartOfWeekNode

@property (readonly, nonatomic) PGGraphWeekendNodeCollection *collection;

+ (id)filter;

- (id)label;
- (id)init;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;

@end
