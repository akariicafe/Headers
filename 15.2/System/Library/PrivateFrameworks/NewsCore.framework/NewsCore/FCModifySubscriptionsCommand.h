@interface FCModifySubscriptionsCommand : FCModifyRecordsCommand

+ (id)desiredKeys;

- (id)initWithSubscriptions:(id)a0 merge:(BOOL)a1;
- (BOOL)mergeLocalRecord:(id)a0 withRemoteRecord:(id)a1;

@end
