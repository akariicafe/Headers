@class NSNumber;

@interface HDClinicalAccountUpdateLastSubmittedJournalEntry : HDClinicalAccountEntityUpdateJournalEntry

@property (readonly, copy, nonatomic) NSNumber *lastSubmittedRowID;
@property (readonly, copy, nonatomic) NSNumber *expectedRulesVersion;

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithLastSubmittedRowID:(id)a0 expectedRulesVersion:(id)a1 accountIdentifier:(id)a2;

@end
