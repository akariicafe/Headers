@class SHProxyMatcher;

@interface SHAudioMatchingRemoteStore : SHRemoteStore

@property (retain, nonatomic) SHProxyMatcher *proxyMatcher;
@property (nonatomic) BOOL sendNotifications;

- (void).cxx_destruct;
- (void)stop;
- (id)createMatcher;
- (void)startOneMatchAttempt;
- (void)startMatching;
- (void)startMatchingUntilDeadline:(id)a0;
- (void)startMatchingUntilResultFound;

@end
