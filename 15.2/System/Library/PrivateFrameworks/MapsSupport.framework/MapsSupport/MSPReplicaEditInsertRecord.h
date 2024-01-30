@protocol MSPReplicaRecord;

@interface MSPReplicaEditInsertRecord : MSPReplicaEdit

@property (readonly, nonatomic) id<MSPReplicaRecord> recordWithInformationToInsert;

- (id)_initWithRecordToInsert:(id)a0 identifier:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)_initWithIdentifierOfAffectedRecord:(id)a0;

@end
