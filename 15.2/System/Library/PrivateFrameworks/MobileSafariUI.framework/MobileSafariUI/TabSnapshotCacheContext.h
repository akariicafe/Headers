@class NSOrderedSet;

@interface TabSnapshotCacheContext : NSObject

@property (retain, nonatomic) NSOrderedSet *identifiersToCache;
@property (nonatomic) BOOL updating;
@property (nonatomic) unsigned long long capacity;

- (id)description;
- (void).cxx_destruct;

@end
