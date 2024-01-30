@interface ASTNetworkReachability : NSObject

+ (BOOL)hasNetworkConnection;
+ (struct __SCNetworkReachability { } *)createReachabilityForVoiceDownload;
+ (BOOL)reachabilityHasNetworkConnection:(struct __SCNetworkReachability { } *)a0;
+ (BOOL)reachabilityHasCellOnlyNetworkConnection:(struct __SCNetworkReachability { } *)a0;
+ (BOOL)hasCellOnlyNetworkConnection;

@end
