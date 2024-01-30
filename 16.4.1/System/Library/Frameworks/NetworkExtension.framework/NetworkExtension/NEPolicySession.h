@class NSData, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface NEPolicySession : NSObject <NEPrettyDescription> {
    BOOL _convertToLegacyPriority;
    unsigned int _lastSendMessageID;
    int _sessionFD;
    long long _internalPriority;
    NSMutableDictionary *_policies;
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSObject<OS_dispatch_semaphore> *_responseSemaphore;
    NSData *_lastReceivedResponse;
}

@property long long priority;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (int)dupSocket;
- (id)initWithSessionName:(id)a0;
- (id)policyWithID:(unsigned long long)a0;
- (id)initFromPrivilegedProcess;
- (BOOL)removeDomainFilterWithID:(unsigned long long)a0;
- (BOOL)lockSessionToCurrentProcess;
- (BOOL)removePolicyWithID:(unsigned long long)a0;
- (BOOL)removeAllDomainFilters;
- (BOOL)unregisterServiceUUID:(id)a0;
- (id)dumpKernelPolicies;
- (unsigned long long)addPolicy:(id)a0 storeLocally:(BOOL)a1;
- (void)dealloc;
- (unsigned long long)addDomainFilterWithData:(id)a0;
- (unsigned long long)addPolicy:(id)a0;
- (BOOL)apply;
- (id)init;
- (BOOL)removeAllPolicies;
- (id)description;
- (id)initWithSocket:(int)a0;
- (void).cxx_destruct;
- (BOOL)registerServiceUUID:(id)a0;

@end
