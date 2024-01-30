@class PGGraphWeekdayNodeCollection;

@interface PGGraphWeekdayNode : PGGraphPartOfWeekNode

@property (readonly, nonatomic) PGGraphWeekdayNodeCollection *collection;

+ (id)filter;

- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)init;
- (id)label;

@end
