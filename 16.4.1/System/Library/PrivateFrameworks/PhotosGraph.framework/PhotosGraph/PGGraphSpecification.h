@interface PGGraphSpecification : MAGraphSpecification

- (id)edgeClassByDomain;
- (void)enumerateEdgeClassesUsingBlock:(id /* block */)a0;
- (id)nodeClassByDomain;
- (id)edgeClassByDomainAndLabel;
- (id)nodeClassByDomainAndLabel;
- (Class)nodeClassWithLabel:(id)a0 domain:(unsigned short)a1;
- (void)enumerateNodeClassesUsingBlock:(id /* block */)a0;
- (id)init;
- (Class)edgeClassWithLabel:(id)a0 domain:(unsigned short)a1;

@end
