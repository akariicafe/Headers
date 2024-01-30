@class NSArray;

@interface HDInsertOrUpdateSharingRelationshipOperation : HDJournalableOperation {
    NSArray *_relationships;
    long long _syncProvenance;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)initWithCodableSharingRelationships:(id)a0 syncProvenance:(long long)a1;

@end
