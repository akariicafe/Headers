@class NSArray;

@interface HDInsertRacingClustersOperation : HDJournalableOperation

@property (readonly, copy, nonatomic) NSArray *clusters;
@property (readonly, nonatomic) long long provenance;
@property (readonly, nonatomic) long long syncIdentity;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)initWithClusters:(id)a0 provenance:(long long)a1 syncIdentity:(long long)a2;

@end
