@class HDCodableObjectCollection, NSArray, HDDataOriginProvenance;

@interface _HDDeletedSampleInsertionJournalEntry : HDJournalEntry {
    HDCodableObjectCollection *_objectCollection;
    NSArray *_samples;
    HDDataOriginProvenance *_provenance;
}

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
