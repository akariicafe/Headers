@class NSLock, NSMutableSet, NSMutableOrderedSet;

@interface SHLibraryDataSource : NSObject

@property (readonly, nonatomic) NSMutableOrderedSet *dataSource;
@property (readonly, nonatomic) NSMutableSet *dataToReconfigure;
@property (readonly, nonatomic) NSLock *dataSourceLock;
@property (readonly, nonatomic) long long count;

- (void)applyChanges:(id)a0;
- (id)currentSnapshot;
- (id)init;
- (void).cxx_destruct;
- (void)appendTrack:(id)a0;
- (void)deleteTrack:(id)a0;
- (void)insertTrack:(id)a0;
- (void)insertTrack:(id)a0 atIndex:(long long)a1;
- (id)trackAtIndex:(long long)a0;
- (void)updateTrack:(id)a0 atIndex:(long long)a1;

@end
