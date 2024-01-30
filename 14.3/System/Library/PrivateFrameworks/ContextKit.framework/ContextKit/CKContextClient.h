@class CKContextSemaphore, NSSet, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface CKContextClient : NSObject <CKContextServiceUpdateNotifications> {
    NSSet *_capabilities;
    NSString *_indexVersionId;
    NSMutableArray *_updateHandlers;
    NSObject<OS_dispatch_semaphore> *_sema_capabilities;
    CKContextSemaphore *_serviceSemaphore;
}

@property (readonly, nonatomic) unsigned long long defaultRequestType;
@property (readonly, nonatomic) NSSet *capabilities;

+ (void)initialize;
+ (void)_observeApplicationStateNotifications;
+ (BOOL)isLikelyUnsolicitedUserInteraction;
+ (id)new;
+ (id)clientWithDefaultRequestType:(unsigned long long)a0;
+ (double)timeIntervalBetweenMachTime:(unsigned long long)a0 andMachTime:(unsigned long long)a1;

- (id)initWithDefaultRequestType:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)didReceiveCKContextServiceUpdateNotification;
- (void)ancestorsForTopics:(id)a0 withReply:(id /* block */)a1;
- (void)registerConfigurationUpdateHandler:(id /* block */)a0;
- (void)_updateCachedCapabilites;
- (void)capabilitiesWithReply:(id /* block */)a0;
- (void)ensureFullyInitialized;
- (id)newRequest;
- (id)retrieveCapabilites;
- (id)indexVersionId;
- (void)workWithServiceSemaphore:(id /* block */)a0;
- (long long)tryAcquireServiceSemaphore;

@end
