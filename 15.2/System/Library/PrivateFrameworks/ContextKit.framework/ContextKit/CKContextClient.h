@class CKContextSemaphore, NSSet, NSString, NSMutableArray;

@interface CKContextClient : NSObject <CKContextServiceUpdateNotifications> {
    NSSet *_capabilities;
    NSString *_indexVersionId;
    NSMutableArray *_updateHandlers;
    CKContextSemaphore *_serviceSemaphore;
}

@property (readonly, nonatomic) unsigned long long defaultRequestType;
@property (readonly, nonatomic) NSSet *capabilities;

+ (void)initialize;
+ (BOOL)isLikelyUnsolicitedUserInteraction;
+ (id)new;
+ (void)_observeApplicationStateNotifications;
+ (double)timeIntervalBetweenMachTime:(unsigned long long)a0 andMachTime:(unsigned long long)a1;
+ (id)clientWithDefaultRequestType:(unsigned long long)a0;

- (void)groupResponses:(id)a0 withReply:(id /* block */)a1;
- (void)ancestorsForTopics:(id)a0 withReply:(id /* block */)a1;
- (void)didReceiveCKContextServiceUpdateNotification;
- (id)newRequest;
- (void)registerConfigurationUpdateHandler:(id /* block */)a0;
- (void)retrieveCapabilitiesWithReply:(id /* block */)a0;
- (long long)tryAcquireServiceSemaphoreNeedsIncPending:(BOOL)a0;
- (void)workWithServiceSemaphore:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)ensureFullyInitialized;
- (id)retrieveCapabilites;
- (void)capabilitiesWithReply:(id /* block */)a0;
- (id)indexVersionId;
- (void)updateCachedCapabilitiesWithReply:(id /* block */)a0;
- (id)initWithDefaultRequestType:(unsigned long long)a0;

@end
