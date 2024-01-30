@class MAGraphReference;

@interface MAGraphSpecification : NSObject <NSCopying>

@property long long persistenceOptions;
@property (retain) Class defaultNodeClass;
@property (retain) Class defaultEdgeClass;
@property (retain, nonatomic) MAGraphReference *rootGraphReference;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateNodeClassesUsingBlock:(id /* block */)a0;
- (Class)edgeClassWithLabel:(id)a0 domain:(unsigned short)a1;
- (void)enumerateEdgeClassesUsingBlock:(id /* block */)a0;
- (Class)nodeClassWithLabel:(id)a0 domain:(unsigned short)a1;

@end
