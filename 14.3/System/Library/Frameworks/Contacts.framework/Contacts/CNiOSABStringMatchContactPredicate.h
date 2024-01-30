@class NSString;

@interface CNiOSABStringMatchContactPredicate : CNPredicate <CNiOSContactPredicate>

@property (readonly, copy, nonatomic) NSString *searchString;
@property (readonly, copy, nonatomic) NSString *accountIdentifier;
@property (readonly, copy, nonatomic) NSString *containerIdentifier;
@property (readonly, copy, nonatomic) NSString *groupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (struct __CFArray { } *)cn_copyPeopleInAddressBook:(void *)a0 fetchRequest:(id)a1 matchInfos:(id *)a2 environment:(id)a3 error:(struct __CFError **)a4;
- (BOOL)cn_supportsNativeBatchFetch;
- (BOOL)cn_supportsEncodedFetching;
- (void).cxx_destruct;
- (BOOL)cn_supportsNativeSorting;
- (id)cn_cursorForEncodedPeopleFromAddressBook:(void *)a0 fetchRequest:(id)a1 environment:(id)a2 error:(id *)a3;
- (id)initWithCoder:(id)a0;
- (id)initWithSearchString:(id)a0 accountIdentifier:(id)a1 containerIdentifier:(id)a2 groupIdentifier:(id)a3;
- (void)encodeWithCoder:(id)a0;

@end
