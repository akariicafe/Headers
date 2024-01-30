@class NSString, NSUUID;

@interface HDClinicalAccountManagerEndLoginSessionJournalEntry : HDJournalEntry

@property (readonly, copy, nonatomic) NSString *code;
@property (readonly, copy, nonatomic) NSUUID *state;

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCode:(id)a0 state:(id)a1;

@end
