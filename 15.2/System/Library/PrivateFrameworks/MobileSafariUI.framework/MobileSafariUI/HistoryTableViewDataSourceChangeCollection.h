@class NSArray;

@interface HistoryTableViewDataSourceChangeCollection : NSObject

@property (copy, nonatomic) NSArray *insertChanges;
@property (copy, nonatomic) NSArray *deleteChanges;

- (void).cxx_destruct;
- (id)init;

@end
