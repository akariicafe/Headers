@class MAGraphSpecification;

@interface MAKGEntityFactory : NSObject <KGEntityFactory>

@property (readonly, nonatomic) MAGraphSpecification *specification;

- (id)initWithSpecification:(id)a0;
- (id)nodeWithIdentifier:(unsigned long long)a0 labels:(id)a1 weight:(float)a2 properties:(id)a3;
- (void).cxx_destruct;
- (id)edgeWithIdentifier:(unsigned long long)a0 labels:(id)a1 weight:(float)a2 properties:(id)a3 sourceNode:(id)a4 targetNode:(id)a5;

@end
