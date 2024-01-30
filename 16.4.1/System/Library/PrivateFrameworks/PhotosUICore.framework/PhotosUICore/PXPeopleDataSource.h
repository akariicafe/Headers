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

- (void)stopListeningForChanges;
- (id)localizedTitle;
- (void)startListeningForChanges;
- (void)dealloc;
- (void).cxx_destruct;
- (id)titleAtIndex:(unsigned long long)a0;
- (void)_asyncLoadImageForItem:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 displayScale:(double)a2 resultHandler:(id /* block */)a3;
- (void)_asyncLoadImageForItem:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 withCompletionBlock:(id /* block */)a2 fastDisplayBlock:(id /* block */)a3;
- (id)_itemsArrayFromObjects:(id)a0;
- (void)_setObjectsWithoutUpdate:(id)a0;
- (void)_updateMembers;
- (id /* block */)defaultComparator;
- (void)imageAtIndex:(unsigned long long)a0 targetSize:(struct CGSize { double x0; double x1; })a1 displayScale:(double)a2 resultHandler:(id /* block */)a3;
- (void)imageAtIndex:(unsigned long long)a0 targetSize:(struct CGSize { double x0; double x1; })a1 withCompletionBlock:(id /* block */)a2;
- (void)imageAtIndex:(unsigned long long)a0 targetSize:(struct CGSize { double x0; double x1; })a1 withCompletionBlock:(id /* block */)a2 fastDisplayBlock:(id /* block */)a3;
- (id)initWithName:(id)a0 objects:(id)a1;
- (id)initWithName:(id)a0 objectsReloadBlock:(id /* block */)a1;
- (id)initWithName:(id)a0 objectsReloadBlock:(id /* block */)a1 asynchronousLoad:(BOOL)a2 callbackDelegate:(id)a3;
- (void)loadObjectsAndUpdateMembersWithCompletion:(id /* block */)a0;
- (id)memberAtIndex:(unsigned long long)a0;
- (id)personAtIndex:(unsigned long long)a0;
- (unsigned long long)photoQuantityAtIndex:(unsigned long long)a0;

@end
