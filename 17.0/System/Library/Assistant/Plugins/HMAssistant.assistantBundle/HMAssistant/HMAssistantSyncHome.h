@class NSArray, NSString, HMHomeManager, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface HMAssistantSyncHome : NSObject <HMHomeManagerDelegate, HMFLogging, AFSyncHandler>

@property (retain, nonatomic) NSArray *anchors;
@property (retain, nonatomic) NSArray *entities;
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

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (void)beginSyncWithAnchor:(id)a0 validity:(id)a1 count:(long long)a2 forKey:(id)a3 beginInfo:(id)a4;
- (id)currentSyncSnapshot;
- (void)getChangeAfterAnchor:(id)a0 changeInfo:(id)a1;
- (void)syncDidEnd;
- (BOOL)shouldSyncForAnchor:(id)a0;

@end
