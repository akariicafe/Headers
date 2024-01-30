@class NSOrderedSet;

@interface IMBlockListController : NSObject

@property (retain, nonatomic) NSOrderedSet *imBlockItemList;
@property (retain, nonatomic) id cmfBlockListUpdatedObserver;
@property (retain, nonatomic) id cnDatabaseChangedExternallyObserver;

+ (id)sharedBlockList;
+ (void *)_createCMFItemRefWithUnsanitizedAddress:(id)a0;

- (BOOL)blockAddress:(id)a0;
- (id)init;
- (void)dealloc;
- (void)removeCNNotifications;
- (void)_buildBlockList;
- (BOOL)_blockCMFItemRef:(void *)a0;
- (void)_unblockCMFItem:(void *)a0;
- (id)_addressForCMItemRef:(void *)a0;
- (id)blockListItems;
- (void)listenToCNNotifications;
- (BOOL)itemIsBlocked:(id)a0;
- (BOOL)addressIsBlocked:(id)a0;
- (BOOL)blockItem:(id)a0;
- (void)unblockItem:(id)a0;
- (void)unblockAddress:(id)a0;

@end
