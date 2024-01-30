@class FBSDisplayConfiguration, FBSDisplayIdentity;

@interface FBDisplayManager : FBSDisplayMonitor

@property (class, readonly, copy, nonatomic) FBSDisplayIdentity *mainIdentity;
@property (class, readonly, copy, nonatomic) FBSDisplayConfiguration *mainConfiguration;
@property (class, readonly, copy, nonatomic) FBSDisplayConfiguration *mainDisplay;

@property (readonly, copy, nonatomic) FBSDisplayConfiguration *mainDisplay;

+ (id)sharedInstance;

- (id)init;
- (void)postBookendConnections;
- (void)invalidate;
- (void)dealloc;

@end
