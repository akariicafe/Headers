@class NSArray;

@interface HDObjectAuthorizationJournalEntry : HDJournalEntry

@property (retain, nonatomic) NSArray *records;
@property (nonatomic) double modificationDate;
@property (nonatomic) long long syncProvenance;

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
