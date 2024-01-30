@interface ML3DaemonClient : ML3Client

@property (class, readonly, nonatomic) ML3DaemonClient *sharedDaemonClient;

- (id)bundleID;
- (id)init;
- (int)processID;
- (id)name;

@end
