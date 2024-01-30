@class NSIndexPath, NSMutableDictionary, NSString, MCDPCModel, NSObject, MCDPCItem;
@protocol OS_dispatch_queue, MCDPCContainerDelegate;

@interface MCDPCContainer : NSObject {
    struct { unsigned char didInvalidateRootItem : 1; unsigned char didInvalidateIndicies : 1; unsigned char willChangeCount : 1; unsigned char didChangeCount : 1; } __supportedDelegateCalls;
}

@property (nonatomic) long long cachedCount;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialAccessContainerQueue;
@property (retain, nonatomic) NSMutableDictionary *cachedIndiciesByIdentifier;
@property (retain, nonatomic) NSMutableDictionary *cachedItemsByIndicies;
@property (readonly, weak, nonatomic) MCDPCItem *rootItem;
@property (readonly, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *appTitle;
@property (readonly, nonatomic) NSString *title;
@property (readonly, weak, nonatomic) MCDPCModel *model;
@property (readonly, nonatomic) BOOL showPlaybackProgress;
@property (readonly, nonatomic) long long showCurrentlyPlayingIndex;
@property (weak, nonatomic) id<MCDPCContainerDelegate> delegate;

- (void)setCount:(long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)refreshWithCompletion:(id /* block */)a0;
- (void)invalidate;
- (id)containerAtIndex:(long long)a0;
- (id)cachedItemForIndex:(long long)a0;
- (void)beginLoadingItem:(id)a0 completion:(id /* block */)a1;
- (BOOL)isValidForRefreshedParent:(id)a0;
- (void)_contentItemsUpdated:(id)a0;
- (id)_initWithModel:(id)a0 rootItem:(id)a1 indexPath:(id)a2;
- (void)getNowPlayingIdentifiersWithCompletion:(id /* block */)a0;
- (void)_nowPlayingIdentifiersDidChange:(id)a0;
- (id)cachedIndexByIdentifier:(id)a0;
- (void)getChildrenInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 completion:(id /* block */)a1;
- (void)getCountOfChildrenWithCompletion:(id /* block */)a0;
- (void)getPlaybackProgressSupportForChildrenWithCompletion:(id /* block */)a0;
- (void)fetchContentWithCompletion:(id /* block */)a0;
- (void)beginLoadingItemWithCompletion:(id /* block */)a0;
- (id)containerForItem:(id)a0;
- (void)setShowPlaybackProgress:(BOOL)a0;
- (void)updateRootItemWithCompletion:(id /* block */)a0;
- (id)cachedItemForIdentifier:(id)a0;

@end
