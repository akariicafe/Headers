@class NSExtension, NSMutableDictionary, BKSAssertion, NSObject, FPDDomain, NSString, FPGracePeriodTimer, NSHashTable, FPDProcessMonitor, NSCountedSet, NSXPCConnection, FPDExtension, NSUUID;
@protocol OS_dispatch_queue;

@interface FPDExtensionSession : NSObject <FPDProcessMonitorDelegate, FPDExtensionSessionProtocol> {
    NSExtension *_extension;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSXPCConnection *_connection;
    NSUUID *_requestIdentifier;
    NSCountedSet *_observingBundleIDs;
    NSMutableDictionary *_inflightProxies;
    NSHashTable *_lifetimeExtenders;
    FPDExtension *_fpdExtension;
    FPDDomain *_domain;
    FPGracePeriodTimer *_gracePeriodTimer;
    FPGracePeriodTimer *_networkingGracePeriodTimer;
    FPDProcessMonitor *_processMonitor;
    int _notifyTokenForFramework;
    BOOL _invalidated;
    BOOL _isForeground;
    int _pid;
    BKSAssertion *_foregroundAssertion;
    BKSAssertion *_backgroundAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasFileProviderPresenceTCCAccess;

- (id)newBackgroundAssertion;
- (void)processMonitor:(id)a0 didBecomeForeground:(BOOL)a1;
- (void).cxx_destruct;
- (id)existingFileProviderProxyWithTimeout:(BOOL)a0 onlyAlreadyLifetimeExtended:(BOOL)a1 pid:(int)a2;
- (void)dealloc;
- (BOOL)_setUpConnectionWithAttemptNumber:(long long)a0 error:(id *)a1;
- (void)_networkingGracePeriodOver;
- (void)unregisterLifetimeExtensionForObject:(id)a0;
- (id)_alternateContentsDictionary;
- (void)_notifyNetworkingProviderMonitorWithState:(BOOL)a0;
- (id)newFileProviderProxyWithoutPIDWithTimeout:(BOOL)a0;
- (id)newForegroundAssertion;
- (id)_connectionWithError:(id *)a0;
- (void)updatePresenceTCCWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)newFileProviderProxyWithPID:(int)a0;
- (void)_invalidateExtensionIfPossible;
- (id)newAssertionWithFlags:(unsigned int)a0 reason:(id)a1;
- (id)newFileProviderProxyWithTimeout:(BOOL)a0 pid:(int)a1;
- (void)start;
- (void)_evaluateExtensionForegroundness;
- (void)_unregisterLifetimeExtensionForObject:(id)a0;
- (id)newFileProviderProxyWithoutPID;
- (BOOL)terminateExtensionWithRetry:(long long)a0 error:(id *)a1;
- (id)initWithDomain:(id)a0 extension:(id)a1 queue:(id)a2;
- (void)registerLifetimeExtensionForObject:(id)a0;
- (void)_invalidateWithCancellation:(BOOL)a0;
- (void)__invalidateWithCancellation:(BOOL)a0;
- (void)asyncUnregisterLifetimeExtensionForObject:(id)a0;
- (id)newFileProviderProxyWithTimeout:(BOOL)a0 pid:(int)a1 createIfNeeded:(BOOL)a2;
- (void)invalidate;
- (void)dumpStateTo:(id)a0;

@end
