@class NSData, MSPVectorTimestamp;

@interface MSPReplicaEditUpdateContents : MSPReplicaEdit

@property (readonly, nonatomic) NSData *contents;
@property (readonly, nonatomic) MSPVectorTimestamp *contentsTimestamp;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)_initToMoveRecordWithIdentifier:(id)a0 toContents:(id)a1 contentsTimestamp:(id)a2;
- (id)_initToTurnIntoTombstoneRecordWithIdentifier:(id)a0;
- (id)_initWithIdentifierOfAffectedRecord:(id)a0;

@end
