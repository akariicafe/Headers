@interface FCModifyUserInfoCommand : FCModifyRecordsCommand

+ (id)desiredKeys;

- (BOOL)mergeLocalRecord:(id)a0 withRemoteRecord:(id)a1;
- (id)initWithUserInfoRecord:(id)a0;

@end
