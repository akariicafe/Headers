@class NSIndexPath;

@interface HistoryTableViewDataSourceChange : NSObject

@property (nonatomic) long long changeType;
@property (nonatomic, getter=isSectionChange) BOOL sectionChange;
@property (retain, nonatomic) NSIndexPath *changeIndexPath;

+ (id)changeWithType:(long long)a0 indexPath:(id)a1 isSectionChange:(BOOL)a2;

- (void).cxx_destruct;

@end
