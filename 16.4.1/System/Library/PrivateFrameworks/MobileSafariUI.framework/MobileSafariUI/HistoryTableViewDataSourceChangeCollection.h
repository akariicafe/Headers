@class NSArray;

@interface HistoryTableViewDataSourceChangeCollection : NSObject

@property (copy, nonatomic) NSArray *insertChanges;
@property (copy, nonatomic) NSArray *deleteChanges;

- (id)init;
- (void).cxx_destruct;

@end
