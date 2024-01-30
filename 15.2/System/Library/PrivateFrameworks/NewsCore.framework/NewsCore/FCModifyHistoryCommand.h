@class NSArray;

@interface FCModifyHistoryCommand : FCModifyRecordsCommand

@property (readonly, copy, nonatomic) NSArray *historyItems;
@property (readonly, copy, nonatomic) NSArray *recordItems;

+ (id)desiredKeys;

- (id)recordZoneName;
- (id)initWithHistoryItems:(id)a0 merge:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)mergeLocalRecord:(id)a0 withRemoteRecord:(id)a1;

@end
