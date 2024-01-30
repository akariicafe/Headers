@class NSDate;

@interface MSPHistoryReplicaEditUpdateModificationDate : MSPReplicaEditRemoveTombstone

@property (readonly, nonatomic) NSDate *modificationDate;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)_initToMoveRecordWithIdentifier:(id)a0 toModificationDate:(id)a1;
- (id)_initWithIdentifierOfAffectedRecord:(id)a0;

@end
