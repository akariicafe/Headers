@interface CNiOSFetchExecution : NSObject

+ (void)_extractContacts:(id *)a0 matchInfo:(id *)a1 fromBlockResults:(id)a2 containsNestedResults:(BOOL)a3;
+ (id)contactsMatchingPredicates:(id)a0 sortOrdering:(unsigned int)a1 matchInfos:(id *)a2 options:(unsigned long long)a3 addressBook:(void *)a4 environment:(id)a5 error:(id *)a6;
+ (id)contactsMatchingPredicates:(id)a0 sortOrdering:(unsigned int)a1 options:(unsigned long long)a2 addressBook:(void *)a3 progressiveResults:(id /* block */)a4 completion:(id /* block */)a5 environment:(id)a6;

@end
