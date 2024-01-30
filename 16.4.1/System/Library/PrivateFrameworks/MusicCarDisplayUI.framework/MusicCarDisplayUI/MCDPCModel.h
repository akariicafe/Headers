@class MCDPCItem, NSMutableDictionary, MCDPlayableContentPlaybackManager, NSString, MPWeakTimer, NSIndexPath, NSObject;
@protocol OS_dispatch_queue;

@interface MCDPCModel : NSObject <MCDNowPlayingContentManagerDelegate>

@property (retain, nonatomic) MCDPlayableContentPlaybackManager *playableContentPlaybackManager;
@property (nonatomic, getter=isCurrentPlayingApp) BOOL currentPlayingApp;
@property (copy, nonatomic) id /* block */ playbackCompletion;
@property (copy, nonatomic) id /* block */ containerCompletion;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) NSMutableDictionary *items;
@property (nonatomic) BOOL didFinishInitialLoad;
@property (nonatomic) unsigned int supportedAPIMask;
@property (retain, nonatomic) NSMutableDictionary *beginLoadingBlocks;
@property (retain, nonatomic) MPWeakTimer *beginLoadingTimeoutTimer;
@property (retain, nonatomic) MPWeakTimer *playbackProgressTimeoutTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mediaRemoteNotificationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mediaRemoteItemQueue;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) MCDPCItem *rootItem;
@property (readonly, nonatomic) NSString *appTitle;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBundleID:(id)a0;
- (void)_registerNotifications;
- (void)dealloc;
- (void).cxx_destruct;
- (void)getChildrenSupportsPlaybackProgressForIndexPath:(id)a0 withCompletion:(id /* block */)a1;
- (void)_browsableContentDidRegisterNotification:(id)a0;
- (void)_contentItemsUpdated:(id)a0;
- (void)_dataSourceInvalidated:(id)a0;
- (id)_errorForNotification:(id)a0;
- (void)_finishBeginLoadingNotification:(id)a0;
- (void)_finishPlaybackNotification:(id)a0;
- (void)_invalidateBeginLoadingTimeoutTimer;
- (void)_invalidatePlaybackProgressTimeoutTimer;
- (void)_nowPlayingDidChangeNotification:(id)a0;
- (void)_registerForClientContent;
- (void)_setupBeginLoadingTimeoutTimerWithCompletion:(id /* block */)a0;
- (void)_setupPlaybackProgressTimeoutTimerWithCompletion:(id /* block */)a0;
- (void)beginLoadingItemAtIndexPath:(id)a0 completion:(id /* block */)a1;
- (id)containerForRoot;
- (void)contentManager:(id)a0 itemDidChange:(id)a1 response:(id)a2;
- (void)getChildrenAtIndexPath:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 completion:(id /* block */)a2;
- (void)getCountOfChildrenAtIndexPath:(id)a0 withCompletion:(id /* block */)a1;
- (void)getNowPlayingIdentifiersWithCompletion:(id /* block */)a0;
- (void)initiatePlaybackAtIndexPath:(id)a0 completion:(id /* block */)a1;
- (id)itemsFromMRContentItems:(id)a0;

@end
