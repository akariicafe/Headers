@class NSString;

@interface CNiOSABFaultFulfillmentPredicate : CNPredicate <CNiOSContactPredicate>

@property (readonly, nonatomic) int legacyIdentifier;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)os_log;

- (struct __CFArray { } *)cn_copyPeopleInAddressBook:(void *)a0 fetchRequest:(id)a1 matchInfos:(id *)a2 environment:(id)a3 error:(struct __CFError **)a4;
- (BOOL)cn_supportsNativeBatchFetch;
- (BOOL)cn_supportsEncodedFetching;
- (void).cxx_destruct;
- (BOOL)cn_supportsNativeSorting;
- (id)cn_cursorForEncodedPeopleFromAddressBook:(void *)a0 fetchRequest:(id)a1 environment:(id)a2 error:(id *)a3;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)cn_copyPeopleInAddressBook:(void *)a0 fetchRequest:(id)a1 matchInfos:(id *)a2 environment:(id)a3 nserror:(id *)a4;
- (id)initWithLegacyIdentifier:(int)a0 identifier:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
