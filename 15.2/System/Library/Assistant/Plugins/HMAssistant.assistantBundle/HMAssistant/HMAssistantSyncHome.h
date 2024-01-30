@class NSString, HMHomeManager, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface HMAssistantSyncHome : NSObject <HMHomeManagerDelegate, HMFLogging, AFSyncHandler>

@property (retain, nonatomic) NSMutableArray *anchors;
@property (retain, nonatomic) NSMutableArray *entities;
@property (retain, nonatomic) NSString *finalAnchor;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL done;
@property (retain, nonatomic) HMHomeManager *homeManager;
@property (nonatomic) unsigned long long fetchHomeConfigurationStartTime;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *waitGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)homeManagerDidUpdateHomes:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)beginSyncWithAnchor:(id)a0 validity:(id)a1 count:(long long)a2 forKey:(id)a3 beginInfo:(id)a4;
- (void)getChangeAfterAnchor:(id)a0 changeInfo:(id)a1;
- (void)syncDidEnd;
- (id)currentSyncSnapshot;
- (BOOL)shouldSyncForAnchor:(id)a0;

@end
