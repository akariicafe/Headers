@class NSDate;

@interface MSPHistoryReplicaEditUpdateModificationDate : MSPReplicaEditRemoveTombstone

@property (readonly, nonatomic) NSDate *modificationDate;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)_initWithIdentifierOfAffectedRecord:(id)a0;
- (id)_initToMoveRecordWithIdentifier:(id)a0 toModificationDate:(id)a1;

@end
