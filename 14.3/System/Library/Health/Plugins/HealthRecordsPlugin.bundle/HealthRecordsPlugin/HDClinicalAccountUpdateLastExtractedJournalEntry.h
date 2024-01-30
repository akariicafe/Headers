@class NSNumber;

@interface HDClinicalAccountUpdateLastExtractedJournalEntry : HDClinicalAccountEntityUpdateJournalEntry

@property (readonly, copy, nonatomic) NSNumber *lastExtractedRowID;
@property (readonly, copy, nonatomic) NSNumber *lastExtractedRulesVersion;

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithLastExtractedRowID:(id)a0 rulesVersion:(id)a1 accountIdentifier:(id)a2;

@end
