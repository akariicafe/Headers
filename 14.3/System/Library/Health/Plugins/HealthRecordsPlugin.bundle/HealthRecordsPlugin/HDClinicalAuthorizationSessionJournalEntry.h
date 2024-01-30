@class NSUUID;

@interface HDClinicalAuthorizationSessionJournalEntry : HDJournalEntry

@property (readonly, copy, nonatomic) NSUUID *state;

+ (BOOL)supportsSecureCoding;

- (id)initWithState:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
