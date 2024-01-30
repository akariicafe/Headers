@class NSString, NSObject;
@protocol OS_dispatch_queue, IMReachabilityDelegate;

@interface IMReachability : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_queue;
@property (nonatomic) void *reachabilityRef;
@property (retain, nonatomic) NSString *reachabilityDescription;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) BOOL gettingFlags;
@property (weak, nonatomic) id<IMReachabilityDelegate> delegate;
@property (readonly, nonatomic) BOOL connectionRequired;

+ (id)reachabilityWithHostName:(id)a0;
+ (id)reachabilityWithRemoteAddress:(id)a0;
+ (id)reachabilityWithLocalAddress:(id)a0 remoteAddress:(id)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_handleCallbackForSCNetworkReachability:(struct __SCNetworkReachability { } *)a0;
- (id)description;
- (id)_initWithReachabilityRef:(struct __SCNetworkReachability { } *)a0 description:(id)a1 delegate:(id)a2;
- (id)initWithLocalSocketAddress:(id)a0 remoteSocketAddress:(id)a1 delegate:(id)a2;
- (void)_forceGetFlagsIfNecessary;
- (id)initWithRemoteHost:(id)a0 delegate:(id)a1;

@end
