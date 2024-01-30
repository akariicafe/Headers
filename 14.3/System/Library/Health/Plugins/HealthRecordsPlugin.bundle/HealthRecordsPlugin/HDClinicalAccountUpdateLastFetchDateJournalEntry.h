@class NSDate;

@interface HDClinicalAccountUpdateLastFetchDateJournalEntry : HDClinicalAccountEntityUpdateJournalEntry

@property (readonly, copy, nonatomic) NSDate *lastFetchDate;
@property (readonly, nonatomic) BOOL wasFullFetch;

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithLastFetchDate:(id)a0 wasFullFetch:(BOOL)a1 accountIdentifier:(id)a2;

@end
