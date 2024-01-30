@interface CNiOSABPredicateRunner : NSObject

- (void)searchPeopleWithPredicate:(id)a0 sortOrder:(unsigned int)a1 ranked:(BOOL)a2 inAddressBook:(void *)a3 withDelegate:(id)a4;
- (id)personPredicateWithNameLike:(id)a0 inSource:(id)a1 addressBook:(void *)a2;
- (id)personPredicateWithNameLike:(id)a0 inGroups:(id)a1 sources:(id)a2 addressBook:(void *)a3;

@end
