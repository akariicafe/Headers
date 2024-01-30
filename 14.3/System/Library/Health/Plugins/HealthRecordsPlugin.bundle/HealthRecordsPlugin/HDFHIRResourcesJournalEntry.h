@class NSArray;

@interface HDFHIRResourcesJournalEntry : HDJournalEntry

@property (readonly, copy, nonatomic) NSArray *codableResources;
@property (readonly, nonatomic) long long syncProvenance;

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCodableResources:(id)a0 syncProvencance:(long long)a1;

@end
