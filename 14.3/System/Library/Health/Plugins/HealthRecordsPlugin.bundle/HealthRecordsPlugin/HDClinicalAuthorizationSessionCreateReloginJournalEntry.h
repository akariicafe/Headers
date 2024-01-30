@class NSUUID;

@interface HDClinicalAuthorizationSessionCreateReloginJournalEntry : HDClinicalAuthorizationSessionCreateJournalEntry

@property (readonly, copy, nonatomic) NSUUID *accountIdentifier;

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithState:(id)a0 queryString:(id)a1 accountIdentifier:(id)a2;

@end
