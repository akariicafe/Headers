@class NSString;

@interface HDClinicalAuthorizationSessionCreateJournalEntry : HDClinicalAuthorizationSessionJournalEntry

@property (readonly, copy, nonatomic) NSString *queryString;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithState:(id)a0 queryString:(id)a1;

@end
