@class NSXPCConnection;

@interface VSKeepAlive : NSObject {
    NSXPCConnection *_serverConnection;
}

@property (nonatomic) long long audioType;
@property (nonatomic) BOOL active;
@property (nonatomic) BOOL keepAudioSessionActive;

- (void).cxx_destruct;
- (void)dealloc;
- (id)_serverConnection;
- (void)_ensureKeepAliveMaintenance;
- (id)_remoteKeepAlive;

@end
