@class MSPPosition, MSPVectorTimestamp;

@interface MSPOrderedReplicaEditUpdatePosition : MSPReplicaEdit

@property (readonly, nonatomic) MSPPosition *position;
@property (readonly, nonatomic) MSPVectorTimestamp *positionTimestamp;

- (id)_initToMoveRecordWithIdentifier:(id)a0 toPosition:(id)a1 positionTimestamp:(id)a2;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)_initWithIdentifierOfAffectedRecord:(id)a0;

@end
