@interface FCModifyUserInfoCommand : FCModifyRecordsCommand

+ (id)desiredKeys;

- (id)initWithUserInfoRecord:(id)a0;
- (BOOL)mergeLocalRecord:(id)a0 withRemoteRecord:(id)a1;

@end
