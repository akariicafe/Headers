@interface ML3ProcessClient : ML3Client

@property (class, readonly, nonatomic) ML3ProcessClient *sharedProcessClient;

- (int)processID;
- (id)bundleID;
- (id)init;
- (id)name;

@end
