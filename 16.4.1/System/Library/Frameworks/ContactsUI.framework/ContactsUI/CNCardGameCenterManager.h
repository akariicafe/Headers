@class CNUICoreRecentsManager, GKServiceProxy, CNContact;
@protocol CNSchedulerProvider, CNCancelable, CNScheduler;

@interface CNCardGameCenterManager : NSObject

@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (readonly, nonatomic) id<CNScheduler> workQueue;
@property (retain, nonatomic) id<CNCancelable> relationshipResultsCancelable;
@property (retain, nonatomic) GKServiceProxy *gameCenterProxy;
@property (nonatomic) BOOL hasCheckedAuthenticatedLocalPlayer;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) CNUICoreRecentsManager *recentsManager;

- (id)init;
- (id)handles;
- (void).cxx_destruct;
- (BOOL)shouldActionDisplayDropdownMenu;
- (id)defaultFriendResultFromFriendResults:(id)a0 forContact:(id)a1;
- (void)getGameCenterRelationshipsForContact:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleResults:(id)a0 forContact:(id)a1 error:(id)a2 completionHandler:(id /* block */)a3;
- (id)handlesForContact:(id)a0;
- (void)refreshGameCenterRelationshipsForContact:(id)a0 completionHandler:(id /* block */)a1;

@end
