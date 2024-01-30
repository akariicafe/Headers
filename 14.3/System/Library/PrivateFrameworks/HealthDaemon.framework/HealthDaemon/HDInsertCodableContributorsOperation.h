@class NSArray;

@interface HDInsertCodableContributorsOperation : HDJournalableOperation

@property (readonly, copy, nonatomic) NSArray *contributors;
@property (readonly, nonatomic) long long provenance;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)initWithContributors:(id)a0 provenance:(long long)a1;

@end
