@class NSDictionary, NSArray;

@interface HDInsertDeleteAndAssociateObjectsOperation : HDJournalableOperation

@property (readonly, copy, nonatomic) NSDictionary *objectsToInsertByDataProvenance;
@property (readonly, copy, nonatomic) NSArray *objectsToDelete;
@property (readonly, copy, nonatomic) NSDictionary *associations;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)initWithObjectsToInsertByDataProvenance:(id)a0 objectsToDelete:(id)a1 associations:(id)a2;

@end
