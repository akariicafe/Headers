@interface ASTNetworkReachability : NSObject

+ (struct __SCNetworkReachability { } *)createReachabilityForVoiceDownload;
+ (BOOL)reachabilityHasNetworkConnection:(struct __SCNetworkReachability { } *)a0;
+ (BOOL)reachabilityHasNonWWANNetworkConnection:(struct __SCNetworkReachability { } *)a0;
+ (BOOL)hasNetworkConnection;
+ (BOOL)hasNonWWANNetworkConnection;

@end
