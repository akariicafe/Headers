@interface MPModelLibraryResponseKeepLocalStatusConfiguration : NSObject

@property (copy, nonatomic) id /* block */ downloadablePlaylistItemEntityQueryBlock;
@property (nonatomic) struct shared_ptr<mlcore::EntityQuery> { struct EntityQuery *__ptr_; struct __shared_weak_count *__cntrl_; } downloadableItemsQuery;

- (void).cxx_destruct;
- (id).cxx_construct;

@end
