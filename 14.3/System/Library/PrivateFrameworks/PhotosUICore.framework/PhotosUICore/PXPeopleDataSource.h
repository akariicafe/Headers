@class NSArray, PHFetchResult, NSString, NSPredicate, NSObject;
@protocol OS_dispatch_queue, PXPeopleDataSourceDelegate;

@interface PXPeopleDataSource : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reloadQueue;
@property (readonly, nonatomic) BOOL useAsynchronousLoad;
@property (retain, nonatomic) PHFetchResult *objects;
@property (copy, nonatomic) id /* block */ reloadBlock;
@property (copy, nonatomic) NSArray *members;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long numberOfMembers;
@property (nonatomic) unsigned long long maximumNumberOfMembers;
@property (weak, nonatomic) id<PXPeopleDataSourceDelegate> delegate;
@property (copy) NSString *localizedDisclosedTitle;
@property (copy) NSString *localizedUndisclosedTitle;
@property (getter=isDisclosed) BOOL disclosed;
@property (copy, nonatomic) NSPredicate *filterPredicate;
@property (copy, nonatomic) id /* block */ sortComparator;
@property (readonly, nonatomic) NSArray *persons;

- (id)localizedTitle;
- (void)startListeningForChanges;
- (id)initWithName:(id)a0 objectsReloadBlock:(id /* block */)a1 asynchronousLoad:(BOOL)a2 callbackDelegate:(id)a3;
- (id)initWithName:(id)a0 objects:(id)a1;
- (id)memberAtIndex:(unsigned long long)a0;
- (id)personAtIndex:(unsigned long long)a0;
- (void)imageAtIndex:(unsigned long long)a0 targetSize:(struct CGSize { double x0; double x1; })a1 withCompletionBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (void)imageAtIndex:(unsigned long long)a0 targetSize:(struct CGSize { double x0; double x1; })a1 withCompletionBlock:(id /* block */)a2 fastDisplayBlock:(id /* block */)a3;
- (unsigned long long)photoQuantityAtIndex:(unsigned long long)a0;
- (id /* block */)defaultComparator;
- (void)_setObjectsWithoutUpdate:(id)a0;
- (void)_updateMembers;
- (void)stopListeningForChanges;
- (void)dealloc;
- (id)_itemsArrayFromObjects:(id)a0;
- (id)initWithName:(id)a0 objectsReloadBlock:(id /* block */)a1;
- (void)_asyncLoadImageForItem:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 withCompletionBlock:(id /* block */)a2 fastDisplayBlock:(id /* block */)a3;
- (id)titleAtIndex:(unsigned long long)a0;
- (void)loadObjectsAndUpdateMembersWithCompletion:(id /* block */)a0;

@end
