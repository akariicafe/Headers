@class NSObject, NSHashTable;
@protocol OS_os_log, NSObject;

@interface CKMessagesComplicationDataProvider : NSObject

@property (retain, nonatomic) NSHashTable *subscribers;
@property (retain, nonatomic) id<NSObject> observationToken;
@property (retain, nonatomic) NSObject<OS_os_log> *log;

- (id)init;
- (void)disconnectFromDaemon;
- (void).cxx_destruct;
- (void)dealloc;
- (void)daemonControllerDidConnect;
- (void)daemonConnectionLost;
- (void)removeSubscriber:(id)a0;
- (void)daemonControllerDidDisconnect;
- (void)addSubscriber:(id)a0;
- (void)daemonControllerWillConnect;
- (void)connectToDaemon;
- (void)stopUnreadCountObservation;
- (void)startUnreadCountObservation;
- (void)notifySubscribersAboutNewUnreadCount:(id)a0;
- (id)urlForLastMessage;

@end
