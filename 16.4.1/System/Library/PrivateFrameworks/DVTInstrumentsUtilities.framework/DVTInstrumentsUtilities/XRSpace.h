@class NSString, NSMutableString, NSOperationQueue, NSMutableDictionary, NSMutableSet;

@interface XRSpace : NSObject <XRMobileAgentStop> {
    BOOL _overridesQoS;
    NSMutableString *_tag;
    unsigned long long _seqNum;
    NSMutableDictionary *_userDataByToken;
    NSMutableSet *_notificationShims;
    NSString *_opName;
}

@property (nonatomic) BOOL supportsOpNames;
@property (readonly, nonatomic) NSOperationQueue *queue;
@property (readonly, nonatomic) int agentStopDiagnosticsTypeCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)runWhenOperationFinishes:(id)a0 block:(id /* block */)a1;

- (void)addOperation:(id)a0;
- (BOOL)isBusy;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (unsigned long long)operationCount;
- (id)init;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)_postQueueStateChanged;
- (void)_removeNotificationShim:(id)a0;
- (id)_scheduleOperationFromCurrentQueue:(id)a0;
- (id)afterOperation:(id)a0 block:(id /* block */)a1;
- (id)afterOperation:(id)a0 priority:(long long)a1 spaceBlock:(id /* block */)a2;
- (id)afterOperation:(id)a0 spaceBlock:(id /* block */)a1;
- (id)afterOperations:(id)a0 priority:(long long)a1 spaceBlock:(id /* block */)a2;
- (id)afterOperationsRunBlock:(id)a0;
- (BOOL)currentlyInThisSpace;
- (BOOL)isOpValidForSpace:(id)a0;
- (BOOL)isSerial;
- (void)receiveMobileAgent:(id)a0;
- (void)removeUserDataForToken:(id)a0;
- (void)replaceUserData:(id)a0 forToken:(id)a1;
- (void)requestLocalNotification:(id)a0 object:(id)a1 observer:(id)a2 block:(id /* block */)a3;
- (void)setupVisitAfterOperation:(id)a0 itinerary:(id)a1 mode:(id)a2;
- (id)spaceName;
- (void)stopObservationsOfObject:(id)a0 forObserver:(id)a1;
- (id)storeUserData:(id)a0;
- (id)userDataForToken:(id)a0;

@end
