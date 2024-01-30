@class NSUUID;

@interface HDClinicalAccountManagerAccountJournalEntry : HDJournalEntry

@property (readonly, copy, nonatomic) NSUUID *accountIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAccountIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
