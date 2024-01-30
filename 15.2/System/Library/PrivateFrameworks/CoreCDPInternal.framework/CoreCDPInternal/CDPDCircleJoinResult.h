@interface CDPDCircleJoinResult : NSObject

@property BOOL didJoin;
@property BOOL needsBackupRecovery;
@property BOOL hasPeersForRemoteApproval;
@property BOOL hasPeersWithCDPBackupRecords;
@property BOOL requiresEscrowRecordsFetch;
@property BOOL requiresInitialSync;
@property unsigned long long remotePeeriCKState;
@property unsigned long long circleStatus;

@end
