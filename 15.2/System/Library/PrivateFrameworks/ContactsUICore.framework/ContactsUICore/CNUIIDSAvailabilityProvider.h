@class NSArray, NSString, CNUIDSHandleAvailabilityCache;
@protocol CNUIIDSIDQueryControllerWrapper, CNScheduler;

@interface CNUIIDSAvailabilityProvider : NSObject <CNUIIDSAvailabilityProvider>

@property (retain, nonatomic) id<CNUIIDSIDQueryControllerWrapper> queryControllerWrapper;
@property (retain, nonatomic) CNUIDSHandleAvailabilityCache *faceTimeRequests;
@property (retain, nonatomic) CNUIDSHandleAvailabilityCache *iMessageRequests;
@property (retain, nonatomic) CNUIDSHandleAvailabilityCache *expanseRequests;
@property (retain, nonatomic) NSArray *requestFutures;
@property (retain, nonatomic) id<CNScheduler> resourceLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeFaceTimeRequestsCache;
+ (id)makeIMessageRequestsCache;
+ (id)makeExpanseRequestsCache;

- (id)validateHandlesForFaceTime:(id)a0 schedulerProvider:(id)a1;
- (id)validateHandlesForIMessage:(id)a0 schedulerProvider:(id)a1;
- (id)initWithQueryControllerWrapper:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)cacheForService:(long long)a0;
- (void)startRequestForCacheMisses:(id)a0 service:(long long)a1 scheduler:(id)a2;
- (id)validateHandles:(id)a0 forService:(long long)a1 schedulerProvider:(id)a2;
- (id)validateHandlesForExpanse:(id)a0 schedulerProvider:(id)a1;

@end
