@class HDDataOriginProvenance, HKObject;

@interface _HDDataInsertionJournalEntry : HDJournalEntry

@property (readonly, nonatomic) HKObject *dataObject;
@property (readonly, nonatomic) HDDataOriginProvenance *provenance;

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDataObject:(id)a0 provenance:(id)a1;

@end
