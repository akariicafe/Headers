@class CKRecordID;

@interface CKSyncEngineAccountChangeEvent : CKSyncEngineEvent

@property (readonly, nonatomic) long long changeType;
@property (readonly, copy, nonatomic) CKRecordID *previousUser;
@property (readonly, copy, nonatomic) CKRecordID *currentUser;

- (void)CKDescribePropertiesUsing:(id)a0;
- (void).cxx_destruct;
- (long long)type;
- (id)initWithPreviousUser:(id)a0 currentUser:(id)a1;

@end
