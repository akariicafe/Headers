@class ASCodableDatabaseCompetition;

@interface ASDatabaseCompetitionJournalEntry : HDJournalEntry

@property (readonly, nonatomic) ASCodableDatabaseCompetition *databaseCompetition;

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDatabaseCompetition:(id)a0;

@end
