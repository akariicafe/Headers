@class HKObject;

@interface _HDDataDeletionJournalEntry : HDJournalEntry

@property (readonly, nonatomic) HKObject *dataObject;
@property (readonly, nonatomic) BOOL restrictSource;

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDataObject:(id)a0 restrictSource:(BOOL)a1;

@end
