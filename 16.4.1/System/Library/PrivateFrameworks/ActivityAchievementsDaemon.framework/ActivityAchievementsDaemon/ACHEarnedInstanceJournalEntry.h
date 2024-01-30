@class ACHEarnedInstance;

@interface ACHEarnedInstanceJournalEntry : HDJournalEntry

@property (readonly, nonatomic) long long action;
@property (readonly, nonatomic) ACHEarnedInstance *earnedInstance;
@property (readonly, nonatomic) long long persistentID;
@property (readonly, nonatomic) long long provenance;

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithEarnedInstance:(id)a0 provenance:(long long)a1 action:(long long)a2;

@end
