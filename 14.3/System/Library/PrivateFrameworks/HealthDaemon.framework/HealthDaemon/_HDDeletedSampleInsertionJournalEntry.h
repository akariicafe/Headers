@class NSArray, HDDataOriginProvenance;

@interface _HDDeletedSampleInsertionJournalEntry : HDJournalEntry

@property (readonly, copy, nonatomic) NSArray *samples;
@property (readonly, copy, nonatomic) HDDataOriginProvenance *provenance;

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCodableDeletedSamples:(id)a0 provenance:(id)a1;

@end
