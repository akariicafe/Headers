@interface PGGraphSpecification : MAGraphSpecification

- (Class)edgeClassWithLabel:(id)a0 domain:(unsigned short)a1;
- (id)edgeClassByDomain;
- (id)edgeClassByDomainAndLabel;
- (id)init;
- (void)enumerateEdgeClassesUsingBlock:(id /* block */)a0;
- (Class)nodeClassWithLabel:(id)a0 domain:(unsigned short)a1;
- (id)nodeClassByDomain;
- (id)nodeClassByDomainAndLabel;
- (void)enumerateNodeClassesUsingBlock:(id /* block */)a0;

@end
