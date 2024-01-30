@class NSExtension, NSMutableDictionary, RBSAssertion, NSMapTable, NSObject, FPDDomain, NSString, FPGracePeriodTimer, FPDProcessMonitor, NSCountedSet, NSXPCConnection, FPDExtension, NSUUID;
@protocol OS_dispatch_queue, OS_os_log;

@interface FPDExtensionSession : NSObject <FPDProcessMonitorDelegate, FPDExtensionSessionProtocol> {
    NSExtension *_extension;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSXPCConnection *_connection;
    NSUUID *_requestIdentifier;
    NSCountedSet *_observingBundleIDs;
    NSMutableDictionary *_inflightProxies;
    NSMapTable *_lifetimeExtenders;
    FPDExtension *_fpdExtension;
    FPDDomain *_domain;
    NSObject<OS_os_log> *_log;
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

- (void)updatePresenceTCCWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (void)dumpStateTo:(id)a0;
- (void)asyncUnregisterLifetimeExtensionForObject:(id)a0;
- (void)_notifyNetworkingProviderMonitorWithState:(BOOL)a0;
- (BOOL)terminateExtensionWithError:(id *)a0;
- (id)newAssertionWithAttributeName:(id)a0 reason:(id)a1;
- (id)_alternateContentsDictionary;
- (id)newFileProviderProxyWithTimeout:(double)a0 pid:(int)a1;
- (BOOL)_setUpConnectionWithError:(id *)a0;
- (void)terminateWithReason:(id)a0;
- (id)existingFileProviderProxyWithTimeout:(double)a0 onlyAlreadyLifetimeExtended:(BOOL)a1 pid:(int)a2;
- (void)cancel;
- (void)dealloc;
- (void)__invalidate;
- (id)initWithDomain:(id)a0 extension:(id)a1 queue:(id)a2;
- (void)_invalidateExtensionIfPossible;
- (void)registerLifetimeExtensionForObject:(id)a0;
- (void)_unregisterLifetimeExtensionForObject:(id)a0;
- (void)processMonitor:(id)a0 didBecomeForeground:(BOOL)a1;
- (void)start;
- (void)invalidate;
- (void)_evaluateExtensionForegroundness;
- (void)_invalidate;
- (id)newForegroundAssertion;
- (id)_connectionWithError:(id *)a0;
- (void).cxx_destruct;
- (void)unregisterLifetimeExtensionForObject:(id)a0;
- (void)_networkingGracePeriodOver;
- (id)newBackgroundAssertion;
- (id)newFileProviderProxyWithTimeoutValue:(double)a0 pid:(int)a1 createIfNeeded:(BOOL)a2;

@end
