@class NSString;

@interface HDClinicalAuthorizationSessionCreateInitialLoginJournalEntry : HDClinicalAuthorizationSessionCreateJournalEntry

@property (readonly, copy, nonatomic) NSString *gatewayExternalID;

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithState:(id)a0 queryString:(id)a1 gatewayExternalID:(id)a2;

@end
