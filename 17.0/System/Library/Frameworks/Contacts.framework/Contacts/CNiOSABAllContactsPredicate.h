@class NSString;

@interface CNiOSABAllContactsPredicate : CNPredicate <CNiOSContactPredicate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (BOOL)cn_supportsNativeSorting;
- (struct __CFArray { } *)cn_copyPeopleInAddressBook:(void *)a0 fetchRequest:(id)a1 matchInfos:(id *)a2 environment:(id)a3 error:(struct __CFError **)a4;
- (BOOL)cn_supportsEncodedFetching;
- (void)encodeWithCoder:(id)a0;
- (BOOL)cn_supportsNativeBatchFetch;
- (BOOL)isEqual:(id)a0;
- (id)cn_ABQSLPredicateForAddressBook:(void *)a0 fetchRequest:(id)a1 error:(id *)a2;
- (id)initWithCoder:(id)a0;

@end
