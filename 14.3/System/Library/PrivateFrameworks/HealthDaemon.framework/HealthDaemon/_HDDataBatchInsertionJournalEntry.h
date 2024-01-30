@class HDCodableObjectCollection, HDDataOriginProvenance;

@interface _HDDataBatchInsertionJournalEntry : HDJournalEntry

@property (readonly, nonatomic) HDCodableObjectCollection *collection;
@property (readonly, nonatomic) HDDataOriginProvenance *provenance;

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCodableObjectCollection:(id)a0 provenance:(id)a1;

@end
