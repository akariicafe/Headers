@class NSXPCConnection;

@interface VSKeepAlive : NSObject {
    NSXPCConnection *_serverConnection;
}

@property (nonatomic) long long audioType;
@property (nonatomic) BOOL active;
@property (nonatomic) BOOL keepAudioSessionActive;

- (id)_serverConnection;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_ensureKeepAliveMaintenance;
- (id)_remoteKeepAlive;

@end
