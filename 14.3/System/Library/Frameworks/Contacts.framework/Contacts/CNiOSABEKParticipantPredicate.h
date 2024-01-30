@class NSString, NSURL;

@interface CNiOSABEKParticipantPredicate : CNPredicate <CNiOSContactPredicate>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSString *customDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)initWithName:(id)a0 URL:(id)a1 emailAddress:(id)a2 customDescription:(id)a3;
- (struct __CFArray { } *)cn_copyPeopleInAddressBook:(void *)a0 fetchRequest:(id)a1 matchInfos:(id *)a2 environment:(id)a3 error:(struct __CFError **)a4;
- (BOOL)cn_supportsNativeBatchFetch;
- (BOOL)cn_supportsEncodedFetching;
- (void).cxx_destruct;
- (BOOL)cn_supportsNativeSorting;
- (id)cn_cursorForEncodedPeopleFromAddressBook:(void *)a0 fetchRequest:(id)a1 environment:(id)a2 error:(id *)a3;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
