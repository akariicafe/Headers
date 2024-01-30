@class NSString;

@interface CNiOSABContactIdentifiersPredicate : CNContactsWithIdentifiersPredicate <CNiOSContactPredicate>

@property (readonly) BOOL ignoreUnifiedIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)cn_supportsEncodedFetching;
- (BOOL)cn_supportsNativeSorting;
- (BOOL)cn_supportsNativeBatchFetch;
- (id)cn_cursorForEncodedPeopleFromAddressBook:(void *)a0 fetchRequest:(id)a1 environment:(id)a2 error:(id *)a3;
- (struct __CFArray { } *)cn_copyPeopleInAddressBook:(void *)a0 fetchRequest:(id)a1 matchInfos:(id *)a2 environment:(id)a3 error:(struct __CFError **)a4;
- (id)initWithIdentifiers:(id)a0 ignoreUnifiedIdentifiers:(BOOL)a1;

@end
