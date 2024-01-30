@class NSSet, CRKASMCertificateVendor, NSString;
@protocol CRKASMNameComponents;

@interface CRKASMConcreteTrustedUser : CRKASMConcreteUser <CRKASMTrustedUser>

@property (readonly, nonatomic) CRKASMCertificateVendor *certificateVendor;
@property (readonly, copy, nonatomic) NSSet *certificates;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *appleID;
@property (readonly, nonatomic) id<CRKASMNameComponents> nameComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithBackingPerson:(id)a0 certificateVendor:(id)a1;
- (BOOL)isEqualToConcreteTrustedUser:(id)a0;

@end
