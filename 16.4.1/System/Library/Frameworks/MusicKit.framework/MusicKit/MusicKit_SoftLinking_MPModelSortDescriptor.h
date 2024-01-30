@class NSSortDescriptor;

@interface MusicKit_SoftLinking_MPModelSortDescriptor : NSObject

@property (class, readonly, nonatomic) NSSortDescriptor *recentlyAddedModelObjectSortDescriptor;
@property (class, readonly, nonatomic) NSSortDescriptor *recentlyDownloadedModelObjectSortDescriptor;

@property (copy, nonatomic) NSSortDescriptor *sortDescriptor;

- (void).cxx_destruct;
- (id)initWithKey:(id)a0 isAscending:(BOOL)a1;
- (id)initWithKeyPath:(id)a0 isAscending:(BOOL)a1;

@end
