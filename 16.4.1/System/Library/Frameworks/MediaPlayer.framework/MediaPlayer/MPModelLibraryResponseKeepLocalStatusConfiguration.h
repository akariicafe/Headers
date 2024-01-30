@interface MPModelLibraryResponseKeepLocalStatusConfiguration : NSObject

@property (copy, nonatomic) id /* block */ downloadablePlaylistItemEntityQueryBlock;
@property (nonatomic) struct shared_ptr<mlcore::EntityQuery> { struct EntityQuery *__ptr_; struct __shared_weak_count *__cntrl_; } downloadableItemsQuery;

- (id).cxx_construct;
- (void).cxx_destruct;

@end
