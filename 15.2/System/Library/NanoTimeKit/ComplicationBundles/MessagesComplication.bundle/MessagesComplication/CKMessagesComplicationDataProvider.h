@class NSObject, NSHashTable;
@protocol OS_os_log, NSObject;

@interface CKMessagesComplicationDataProvider : NSObject

@property (retain, nonatomic) NSHashTable *subscribers;
@property (retain, nonatomic) id<NSObject> observationToken;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;

- (void)addSubscriber:(id)a0;
- (void)disconnectFromDaemon;
- (void)connectToDaemon;
- (void)daemonControllerDidConnect;
- (void).cxx_destruct;
- (id)init;
- (void)daemonControllerWillConnect;
- (void)dealloc;
- (void)daemonControllerDidDisconnect;
- (void)daemonConnectionLost;
- (void)removeSubscriber:(id)a0;
- (void)stopUnreadCountObservation;
- (void)startUnreadCountObservation;
- (id)currentSubscribers;
- (void)notifySubscribersAboutNewUnreadCount:(id)a0;
- (id)urlForLastMessage;

@end
