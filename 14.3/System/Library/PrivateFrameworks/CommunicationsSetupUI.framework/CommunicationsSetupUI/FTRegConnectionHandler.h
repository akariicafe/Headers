@class NSString;

@interface FTRegConnectionHandler : NSObject {
    struct { unsigned char listeningForNotifications : 1; } _handlerFlags;
}

@property (nonatomic) long long serviceType;
@property (copy, nonatomic) NSString *name;
@property (readonly, retain, nonatomic) NSString *_serviceName;
@property (retain, nonatomic) NSString *_logName;
@property (copy, nonatomic, setter=_setListenerID:) NSString *_listenerID;
@property (nonatomic) unsigned int caps;

- (void)_stopListeningForNotifications;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)connectToDaemon:(BOOL)a0;
- (void)_startListeningForNotifications;
- (void)_handleDaemonConnected:(id)a0;
- (void)_handleDaemonDisconnected:(id)a0;
- (BOOL)connectToDaemon;
- (void)_disconnectFromDaemon;
- (id)initWithServiceType:(long long)a0 name:(id)a1;
- (BOOL)isConnectedToDaemon;
- (id)initWithServiceType:(long long)a0 name:(id)a1 capabilities:(unsigned int)a2;
- (BOOL)_isServiceSupported;

@end
