@class NSArray, NSDictionary, NSSet, NSString;

@interface WBSAutoFillQuirksSnapshot : NSObject <WBSRemotePlistSnapshot> {
    NSDictionary *_autoFillQuirks;
}

@property (readonly, copy, nonatomic) NSDictionary *passwordRequirementsByDomain;
@property (readonly, copy, nonatomic) NSArray *domainsWithAssociatedCredentials;
@property (readonly, copy, nonatomic) NSArray *domainsIneligibleForPasswordAuditing;
@property (readonly, copy, nonatomic) NSArray *domainsToConsiderIdentical;
@property (readonly, copy, nonatomic) NSDictionary *changePasswordURLsByDomain;
@property (readonly, copy, nonatomic) NSSet *domainsIneligibleForAutomaticLogin;
@property (readonly, copy, nonatomic) NSSet *domainsIneligibleForStreamlinedLogin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPlistData:(id)a0 error:(id *)a1;
- (id)_passwordRequirementsByDomainFromAutoFillQuirks:(id)a0 error:(id *)a1;
- (id)_domainsWithAssociatedCredentialsFromAutoFillQuirks:(id)a0 error:(id *)a1;
- (id)_domainsIneligibleForPasswordAuditingFromAutoFillQuirks:(id)a0 error:(id *)a1;
- (id)_domainsToConsiderIdenticalFromAutoFillQuirls:(id)a0 error:(id *)a1;
- (id)_changePasswordURLStringsByDomainFromAutoFillQuirks:(id)a0 error:(id *)a1;
- (id)_domainsIneligibleForAutomaticLoginFromAutoFillQuirks:(id)a0 error:(id *)a1;
- (id)_domainsIneligibleForStreamlinedLoginFromAutoFillQuirks:(id)a0 error:(id *)a1;
- (id)plistDataWithFormat:(unsigned long long)a0;

@end
