@class HMFUnfairLock, NSUUID, _HMContext, HMMutableArray, NSArray, NSObject, NSString;
@protocol HMAccessoryBrowserDelegate, OS_dispatch_queue;

@interface HMAccessoryBrowser : NSObject <HMFMessageReceiver> {
    HMFUnfairLock *_lock;
}

@property (readonly, nonatomic) _HMContext *context;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) HMMutableArray *accessories;
@property (nonatomic) unsigned long long generationCounter;
@property (nonatomic, getter=isBrowsing) BOOL browsing;
@property (weak, nonatomic) id<HMAccessoryBrowserDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *discoveredAccessories;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_start;
- (id)init;
- (void).cxx_destruct;
- (void)stopSearchingForNewAccessories;
- (void)startSearchingForNewAccessories;
- (void)dealloc;
- (void)_startSearchingForNewAccessories;
- (void)_fetchNewAccessoriesWithPrivacyCheck;
- (void)stopSearchingForNewAccessoriesWithError:(id)a0;
- (void)_stopSearchingForNewAccessoriesWithError:(id)a0;
- (void)_updateNewAccessories:(id)a0;
- (void)_fetchNewAccessories;
- (void)_handleNewAccessoriesFound:(id)a0;
- (void)_handleNewAccessoriesRemoved:(id)a0;
- (void)_registerNotificationHandlers;
- (void)handleStartWithError:(id)a0 response:(id)a1;

@end
