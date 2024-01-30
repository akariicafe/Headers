@class NSString;

@interface GKNetworkActivityIndicatorDelegate : NSObject <GKDaemonProxyNetworkActivityIndicatorDelegate>

@property (nonatomic) int networkIndicatorCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)endNetworkActivity;
- (void)resetNetworkActivity;
- (void)beginNetworkActivity;

@end
