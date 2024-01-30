@class NSString;

@interface CNiOSABFullTextSearchContactPredicate : CNFullTextSearchContactPredicate <CNiOSContactPredicate, CNiOSContactAsyncPredicate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct __CFArray { } *)cn_copyPeopleInAddressBook:(void *)a0 fetchRequest:(id)a1 matchInfos:(id *)a2 environment:(id)a3 error:(struct __CFError **)a4;
- (BOOL)cn_supportsNativeBatchFetch;
- (BOOL)cn_supportsEncodedFetching;
- (BOOL)cn_supportsNativeSorting;
- (id)cn_cursorForEncodedPeopleFromAddressBook:(void *)a0 fetchRequest:(id)a1 environment:(id)a2 error:(id *)a3;
- (id)cn_copyPeopleInAddressBook:(void *)a0 fetchRequest:(id)a1 matchInfos:(id *)a2 environment:(id)a3 nserror:(id *)a4;
- (id)initWithSearchString:(id)a0 containerIdentifiers:(id)a1 groupIdentifiers:(id)a2;
- (id)_predicatesWithAddressBook:(void *)a0 environment:(id)a1;
- (id)cn_fetchPeopleInAddressBook:(void *)a0 fetchRequest:(id)a1 progressiveResults:(id /* block */)a2 completion:(id /* block */)a3 environment:(id)a4;

@end
