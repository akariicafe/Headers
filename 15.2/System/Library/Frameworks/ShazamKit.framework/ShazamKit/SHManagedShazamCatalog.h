@protocol SHMatcher;

@interface SHManagedShazamCatalog : SHShazamCatalog

@property (retain, nonatomic) id<SHMatcher> proxyMatcher;
@property (nonatomic) BOOL sendNotifications;

- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (id)_initWithInstallationID:(id)a0;
- (id)_createMatcher;
- (void)startOneMatchAttempt;
- (void)startMatchingUntilDeadline:(id)a0;
- (void)startMatching;
- (void)startMatchingUntilResultFound;

@end
