@class MAGraphSpecification;

@interface MAKGEntityFactory : NSObject <KGEntityFactory>

@property (readonly, nonatomic) MAGraphSpecification *specification;

- (id)initWithSpecification:(id)a0;
- (id)edgeWithIdentifier:(unsigned long long)a0 labels:(id)a1 properties:(id)a2 sourceNode:(id)a3 targetNode:(id)a4;
- (id)nodeWithIdentifier:(unsigned long long)a0 labels:(id)a1 properties:(id)a2;
- (void).cxx_destruct;

@end
