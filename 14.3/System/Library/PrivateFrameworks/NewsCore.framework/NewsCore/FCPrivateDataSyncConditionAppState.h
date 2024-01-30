@interface FCPrivateDataSyncConditionAppState : NSObject <FCPrivateDataSyncCondition>

@property (readonly, nonatomic, getter=isSatisfied) BOOL satisfied;

- (id)_appState;
- (id)description;

@end
