@class NSString;

@interface CNiOSABContactIdentifiersPredicate : CNContactsWithIdentifiersPredicate <CNiOSContactPredicate>

@property (readonly) BOOL ignoreUnifiedIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)cn_supportsNativeBatchFetch;
- (id)cn_ABQSLPredicateForAddressBook:(void *)a0 fetchRequest:(id)a1 error:(id *)a2;
- (BOOL)cn_supportsNativeSorting;
- (BOOL)cn_supportsEncodedFetching;
- (id)initWithIdentifiers:(id)a0 ignoreUnifiedIdentifiers:(BOOL)a1;
- (struct __CFArray { } *)cn_copyPeopleInAddressBook:(void *)a0 fetchRequest:(id)a1 matchInfos:(id *)a2 environment:(id)a3 error:(struct __CFError **)a4;

@end
