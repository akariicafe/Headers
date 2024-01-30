@class NSArray;

@interface HDClinicalDeletedAccountJournalEntry : HDJournalEntry

@property (readonly, copy, nonatomic) NSArray *codableDeletedAccounts;
@property (readonly, nonatomic) long long syncProvenance;

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCodableDeletedAccounts:(id)a0 syncProvenance:(long long)a1;

@end
