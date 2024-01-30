@class NSData, MSPVectorTimestamp;

@interface MSPReplicaEditUpdateContents : MSPReplicaEdit

@property (readonly, nonatomic) NSData *contents;
@property (readonly, nonatomic) MSPVectorTimestamp *contentsTimestamp;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)_initWithIdentifierOfAffectedRecord:(id)a0;
- (id)_initToTurnIntoTombstoneRecordWithIdentifier:(id)a0;
- (id)_initToMoveRecordWithIdentifier:(id)a0 toContents:(id)a1 contentsTimestamp:(id)a2;

@end
