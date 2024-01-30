@interface PGGraphSpecification : MAGraphSpecification

- (id)init;
- (void)enumerateNodeClassesUsingBlock:(id /* block */)a0;
- (Class)edgeClassWithLabel:(id)a0 domain:(unsigned short)a1;
- (id)edgeClassByDomain;
- (void)enumerateEdgeClassesUsingBlock:(id /* block */)a0;
- (id)nodeClassByDomainAndLabel;
- (id)edgeClassByDomainAndLabel;
- (id)nodeClassByDomain;
- (Class)nodeClassWithLabel:(id)a0 domain:(unsigned short)a1;

@end
