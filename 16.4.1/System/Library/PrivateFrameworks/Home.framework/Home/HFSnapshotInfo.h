@class NSDiffableDataSourceSnapshot, NSMutableDictionary;

@interface HFSnapshotInfo : NSObject

@property (retain, nonatomic) NSDiffableDataSourceSnapshot *baseSnapshot;
@property (retain, nonatomic) NSMutableDictionary *sectionSnapshots;

- (void).cxx_destruct;
- (id)initWithSnapshot:(id)a0;

@end
