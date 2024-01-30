@protocol MSPReplicaRecord;

@interface MSPReplicaEditInsertRecord : MSPReplicaEdit

@property (readonly, nonatomic) id<MSPReplicaRecord> recordWithInformationToInsert;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)_initWithIdentifierOfAffectedRecord:(id)a0;
- (id)_initWithRecordToInsert:(id)a0 identifier:(id)a1;

@end
