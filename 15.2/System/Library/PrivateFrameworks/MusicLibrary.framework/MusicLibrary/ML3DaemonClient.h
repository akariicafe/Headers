@interface ML3DaemonClient : ML3Client

@property (class, readonly, nonatomic) ML3DaemonClient *sharedDaemonClient;

- (int)processID;
- (id)bundleID;
- (id)init;
- (id)name;

@end
