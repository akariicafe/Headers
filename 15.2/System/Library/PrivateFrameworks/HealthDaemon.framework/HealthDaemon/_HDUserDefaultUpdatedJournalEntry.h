@class HDUserDefault;

@interface _HDUserDefaultUpdatedJournalEntry : HDJournalEntry

@property (readonly, nonatomic) HDUserDefault *userDefault;

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
