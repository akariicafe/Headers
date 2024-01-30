@class HKObject;

@interface _HDDataDeletionJournalEntry : HDJournalEntry {
    BOOL _restrictSource;
    HKObject *_dataObject;
}

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
