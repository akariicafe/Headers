@class NSExtension, NSMutableDictionary, RBSAssertion, NSObject, FPDDomain, NSString, FPGracePeriodTimer, NSHashTable, FPDProcessMonitor, NSCountedSet, NSXPCConnection, FPDExtension, NSUUID;
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
    RBSAssertion *_foregroundAssertion;
    RBSAssertion *_backgroundAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasFileProviderPresenceTCCAccess;
@property (readonly, nonatomic) BOOL hasFileProviderAttributionMDMAccess;

- (BOOL)terminateExtensionWithError:(id *)a0;
- (void)unregisterLifetimeExtensionForObject:(id)a0;
- (id)newFileProviderProxyWithPID:(int)a0;
- (BOOL)_setUpConnectionWithError:(id *)a0;
- (id)newAssertionWithAttributeName:(id)a0 reason:(id)a1;
- (void)__invalidate;
- (void)_invalidate;
- (id)_connectionWithError:(id *)a0;
- (void)start;
- (id)initWithDomain:(id)a0 extension:(id)a1 queue:(id)a2;
- (void)_invalidateExtensionIfPossible;
- (void)updatePresenceTCCWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (void)registerLifetimeExtensionForObject:(id)a0;
- (void)processMonitor:(id)a0 didBecomeForeground:(BOOL)a1;
- (void).cxx_destruct;
- (void)asyncUnregisterLifetimeExtensionForObject:(id)a0;
- (id)newBackgroundAssertion;
- (id)existingFileProviderProxyWithTimeout:(BOOL)a0 onlyAlreadyLifetimeExtended:(BOOL)a1 pid:(int)a2;
- (id)newFileProviderProxyWithoutPIDWithTimeout:(BOOL)a0;
- (void)_networkingGracePeriodOver;
- (void)invalidate;
- (id)newForegroundAssertion;
- (id)_alternateContentsDictionary;
- (void)dealloc;
- (id)newFileProviderProxyWithTimeout:(BOOL)a0 pid:(int)a1 createIfNeeded:(BOOL)a2;
- (id)newFileProviderProxyWithTimeout:(BOOL)a0 pid:(int)a1;
- (void)cancel;
- (void)_notifyNetworkingProviderMonitorWithState:(BOOL)a0;
- (void)_evaluateExtensionForegroundness;
- (void)_unregisterLifetimeExtensionForObject:(id)a0;
- (void)dumpStateTo:(id)a0;
- (id)newFileProviderProxyWithoutPID;

@end
