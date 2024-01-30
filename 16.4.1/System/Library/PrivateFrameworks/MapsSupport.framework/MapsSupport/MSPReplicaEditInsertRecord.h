@protocol MSPReplicaRecord;

@interface MSPReplicaEditInsertRecord : MSPReplicaEdit

@property (readonly, nonatomic) id<MSPReplicaRecord> recordWithInformationToInsert;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithIdentifierOfAffectedRecord:(id)a0;
- (id)_initWithRecordToInsert:(id)a0 identifier:(id)a1;

@end
