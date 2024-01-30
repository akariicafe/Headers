@class NSDate;

@interface MSPHistoryReplicaEditUpdateModificationDate : MSPReplicaEditRemoveTombstone

@property (readonly, nonatomic) NSDate *modificationDate;

- (id)description;
- (id)_initToMoveRecordWithIdentifier:(id)a0 toModificationDate:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)_initWithIdentifierOfAffectedRecord:(id)a0;

@end
