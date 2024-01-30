@class NSSet;

@interface _HDSampleTypesDeletionEntry : HDJournalEntry

@property (copy, nonatomic) NSSet *sourceIDs;
@property (copy, nonatomic) NSSet *types;

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSourceIDs:(id)a0 types:(id)a1;

@end
