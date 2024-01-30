@class NSArray, NSSet, CRKASMCertificateVendor, NSString;
@protocol CRKASMUser, CRKASMOrganization;

@interface CRKASMConcreteRoster : NSObject <CRKASMRoster>

@property (readonly, nonatomic) CRKASMCertificateVendor *certificateVendor;
@property (readonly, nonatomic) id<CRKASMOrganization> organization;
@property (readonly, nonatomic) id<CRKASMUser> user;
@property (readonly, copy, nonatomic) NSArray *courses;
@property (readonly, copy, nonatomic) NSSet *allTrustedUserCertificates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)allTrustedUserIdentifiers;
- (id)initWithOrganization:(id)a0 user:(id)a1 courses:(id)a2 certificateVendor:(id)a3;

@end
