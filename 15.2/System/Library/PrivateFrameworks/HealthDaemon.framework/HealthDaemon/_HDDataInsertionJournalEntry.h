@class HDDataOriginProvenance, HKObject;

@interface _HDDataInsertionJournalEntry : HDJournalEntry {
    HKObject *_dataObject;
    HDDataOriginProvenance *_provenance;
}

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
