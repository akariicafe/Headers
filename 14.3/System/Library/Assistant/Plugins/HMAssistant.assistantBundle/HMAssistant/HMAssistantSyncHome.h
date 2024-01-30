@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface HMAssistantSyncHome : NSObject <AFSyncHandler>

@property (retain, nonatomic) NSMutableArray *anchors;
@property (retain, nonatomic) NSMutableArray *entities;
@property (retain, nonatomic) NSString *finalAnchor;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL done;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)beginSyncWithAnchor:(id)a0 validity:(id)a1 count:(long long)a2 forKey:(id)a3 beginInfo:(id)a4;
- (void)getChangeAfterAnchor:(id)a0 changeInfo:(id)a1;
- (void)syncDidEnd;
- (id)currentSyncSnapshot;
- (BOOL)shouldSyncForAnchor:(id)a0;

@end
