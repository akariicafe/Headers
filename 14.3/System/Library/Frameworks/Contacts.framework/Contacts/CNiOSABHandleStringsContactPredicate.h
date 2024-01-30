@class NSString;

@interface CNiOSABHandleStringsContactPredicate : CNHandleStringsContactPredicate <CNiOSContactPredicate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)peopleForPredicate:(id)a0 sortOrder:(unsigned int)a1 addressBook:(void *)a2;

- (struct __CFArray { } *)cn_copyPeopleInAddressBook:(void *)a0 fetchRequest:(id)a1 matchInfos:(id *)a2 environment:(id)a3 error:(struct __CFError **)a4;
- (BOOL)cn_supportsNativeBatchFetch;
- (BOOL)cn_supportsEncodedFetching;
- (BOOL)cn_supportsNativeSorting;
- (id)cn_cursorForEncodedPeopleFromAddressBook:(void *)a0 fetchRequest:(id)a1 environment:(id)a2 error:(id *)a3;
- (id)handlesPredicateWithMap:(id)a0;

@end
