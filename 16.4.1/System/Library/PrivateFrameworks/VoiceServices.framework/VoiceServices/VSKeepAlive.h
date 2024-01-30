@class NSXPCConnection;

@interface VSKeepAlive : NSObject {
    NSXPCConnection *_serverConnection;
}

@property (nonatomic) long long audioType;
@property (nonatomic) BOOL active;
@property (nonatomic) BOOL keepAudioSessionActive;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_serverConnection;
- (void)_ensureKeepAliveMaintenance;
- (id)_remoteKeepAlive;

@end
