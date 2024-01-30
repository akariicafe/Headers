@class NSObject, NSHashTable;
@protocol OS_os_log, IMDaemonMultiplexedConnectionManaging, NSObject;

@interface CKMessagesComplicationDataProvider : NSObject

@property (retain, nonatomic) NSHashTable *subscribers;
@property (retain, nonatomic) id<NSObject> observationToken;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain, nonatomic) id<IMDaemonMultiplexedConnectionManaging> daemonConnection;

- (void)disconnectFromDaemon;
- (void)connectToDaemon;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;
- (id)currentSubscribers;
- (void)notifySubscribersAboutNewUnreadCount:(id)a0;
- (void)startUnreadCountObservation;
- (void)stopUnreadCountObservation;
- (id)urlForLastMessage;

@end
