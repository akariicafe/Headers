@class NSManagedObjectContext, NSURL, NSPersistentContainer;

@interface SCLUnlockHistoryPersistentStore : NSObject

@property (retain) NSManagedObjectContext *storeContext;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSPersistentContainer *persistentContainer;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithURL:(id)a0;
- (BOOL)insertItem:(id)a0;
- (void)loadStore;
- (id)recentHistoryItems;
- (BOOL)deleteHistory:(id *)a0;
- (BOOL)purgeOldItems;
- (id)recentItemsThresholdDate;

@end
