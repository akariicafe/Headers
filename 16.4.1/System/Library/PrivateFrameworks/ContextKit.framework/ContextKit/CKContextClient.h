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
+ (double)timeIntervalBetweenMachTime:(unsigned long long)a0 andMachTime:(unsigned long long)a1;
+ (void)_observeApplicationStateNotifications;
+ (BOOL)isLikelyUnsolicitedUserInteraction;
+ (id)clientWithDefaultRequestType:(unsigned long long)a0;
+ (id)new;
+ (id)clientWithPreferredRequestType:(unsigned long long)a0;

- (id)indexVersionId;
- (void)groupResponses:(id)a0 withReply:(id /* block */)a1;
- (void)ensureFullyInitialized;
- (id)newRequest;
- (void)workWithServiceSemaphore:(id /* block */)a0;
- (void)retrieveCapabilitiesWithReply:(id /* block */)a0;
- (void)registerConfigurationUpdateHandler:(id /* block */)a0;
- (id)createRequest;
- (void)capabilitiesWithReply:(id /* block */)a0;
- (id)retrieveCapabilites;
- (id)init;
- (void)updateCachedCapabilitiesWithReply:(id /* block */)a0;
- (id)initWithDefaultRequestType:(unsigned long long)a0;
- (void)didReceiveCKContextServiceUpdateNotification;
- (long long)tryAcquireServiceSemaphoreNeedsIncPending:(BOOL)a0;
- (void)ancestorsForTopics:(id)a0 withReply:(id /* block */)a1;
- (void).cxx_destruct;

@end
