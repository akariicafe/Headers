@class MAGraphReference;

@interface MAGraphSpecification : NSObject <NSCopying>

@property long long persistenceOptions;
@property (retain) Class defaultNodeClass;
@property (retain) Class defaultEdgeClass;
@property (retain, nonatomic) MAGraphReference *rootGraphReference;

- (void)enumerateEdgeClassesUsingBlock:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)nodeClassWithLabel:(id)a0 domain:(unsigned short)a1;
- (void)enumerateNodeClassesUsingBlock:(id /* block */)a0;
- (id)init;
- (Class)edgeClassWithLabel:(id)a0 domain:(unsigned short)a1;
- (void).cxx_destruct;

@end
