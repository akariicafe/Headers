@class CNPostalAddress, NSString;

@interface CNiOSABPostalAddressContactPredicate : CNPredicate <CNiOSContactPredicate>

@property (copy, nonatomic) CNPostalAddress *postalAddress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (BOOL)cn_supportsEncodedFetching;
- (BOOL)cn_supportsNativeSorting;
- (BOOL)cn_supportsNativeBatchFetch;
- (id)cn_cursorForEncodedPeopleFromAddressBook:(void *)a0 fetchRequest:(id)a1 environment:(id)a2 error:(id *)a3;
- (struct __CFArray { } *)cn_copyPeopleInAddressBook:(void *)a0 fetchRequest:(id)a1 matchInfos:(id *)a2 environment:(id)a3 error:(struct __CFError **)a4;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPostalAddress:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)cn_copyPeopleInAddressBook:(void *)a0 fetchRequest:(id)a1 matchInfos:(id *)a2 environment:(id)a3 nserror:(id *)a4;

@end
