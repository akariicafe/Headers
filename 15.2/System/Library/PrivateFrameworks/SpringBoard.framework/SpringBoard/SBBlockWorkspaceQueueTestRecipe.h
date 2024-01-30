@class NSTimer, FBWorkspaceEventQueueLock, NSString;

@interface SBBlockWorkspaceQueueTestRecipe : NSObject <SBTestRecipe>

@property (retain, nonatomic) NSTimer *blockTimer;
@property (retain, nonatomic) FBWorkspaceEventQueueLock *queueLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)load;

- (id)title;
- (void).cxx_destruct;
- (void)handleVolumeIncrease;
- (void)handleVolumeDecrease;
- (void)blockTimerDidFire:(id)a0;

@end
