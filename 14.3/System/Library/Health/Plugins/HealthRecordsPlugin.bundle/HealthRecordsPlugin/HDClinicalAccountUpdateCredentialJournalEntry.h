@class NSString, HDFHIRAuthResponse;

@interface HDClinicalAccountUpdateCredentialJournalEntry : HDClinicalAccountEntityUpdateJournalEntry

@property (readonly, copy, nonatomic) HDFHIRAuthResponse *authResponse;
@property (readonly, copy, nonatomic) NSString *requestedScope;

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAuthResponse:(id)a0 accountIdentifier:(id)a1 requestedScope:(id)a2;

@end
