@interface FCModifyIssueHistoryCommand : FCModifyRecordsCommand

+ (id)desiredKeys;

- (BOOL)mergeLocalRecord:(id)a0 withRemoteRecord:(id)a1;
- (id)recordZoneName;
- (id)initWithIssueHistoryItems:(id)a0 merge:(BOOL)a1;

@end
