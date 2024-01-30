@class NSRecursiveLock, APSConnection, NSString, NSData, NSMutableSet, NSMapTable;

@interface IDSPushHandler : NSObject <APSConnectionDelegate> {
    NSData *_cachedPushToken;
    NSMutableSet *_topicsCache;
    NSMapTable *_handlerMap;
    NSRecursiveLock *_recursiveLock;
}

@property (retain, nonatomic) APSConnection *apsConnection;
@property (retain, nonatomic) NSString *namedDelegatePort;
@property (readonly, nonatomic) BOOL isConnected;
@property (readonly, nonatomic) NSData *pushToken;
@property (nonatomic) BOOL shouldWaitToSetTopics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)sharedInstanceWithPortName:(id)a0;

- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)connectionDidReconnect:(id)a0;
- (void)removeListener:(id)a0;
- (void)addListener:(id)a0 topics:(id)a1 commands:(id)a2 queue:(id)a3;
- (id)_getValidPushHandlersWithSelector:(SEL)a0 topic:(id)a1 command:(id)a2;
- (id)_apsConnectionPushToken;
- (void)writePushPayloadToDiskIfEnabled:(id)a0 topic:(id)a1;
- (void)configureAsMacNotificationCenterObserver:(id)a0 withPushToWakeTopics:(id)a1;
- (void)connection:(id)a0 didChangeConnectedStatus:(BOOL)a1;
- (void)configureAsMacNotificationCenterObserver:(id)a0;
- (void)connection:(id)a0 didFailToSendOutgoingMessage:(id)a1 error:(id)a2;
- (void)_recalculateTopicsCache;
- (void).cxx_destruct;
- (struct __SecIdentity { } *)copyPushIdentity;
- (void)_updateTopics;
- (id)init;
- (void)setTopics:(id)a0 forListener:(id)a1;
- (void)setCommands:(id)a0 forListener:(id)a1;
- (BOOL)_validateHandler:(id)a0 withSelector:(SEL)a1 topic:(id)a2 command:(id)a3;
- (void)dealloc;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (id)initWithPort:(id)a0;
- (void)connection:(id)a0 didSendOutgoingMessage:(id)a1;

@end
