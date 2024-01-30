@class HMDHomeManager, NSArray, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMDAssistantGather : HMFObject <HMFLogging>

@property (weak, nonatomic) HMDHomeManager *manager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSArray *currentHomekitObjects;
@property (readonly, nonatomic) NSArray *homeKitObjects;
@property (readonly, nonatomic) long long homeCount;
@property (readonly, nonatomic) NSString *primaryHomeName;
@property (readonly, nonatomic) NSString *primaryHomeAssistantIdentifier;
@property (readonly, nonatomic) NSString *currentHomeName;
@property (readonly, nonatomic) NSString *currentHomeAssistantIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_getPrimaryHome;
- (id)_getCurrentHome;
- (void)_gatherHomeKitObjects;
- (void)gatherHomeKitObjectsWithCompletion:(id /* block */)a0;
- (void)getSyncEntityObjectsWithCompletionHandler:(id /* block */)a0;
- (id)initWithHomeManager:(id)a0 queue:(id)a1;

@end
