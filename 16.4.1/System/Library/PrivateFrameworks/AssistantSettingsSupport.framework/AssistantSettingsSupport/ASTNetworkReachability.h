@interface ASTNetworkReachability : NSObject

+ (id)defaultPath;
+ (BOOL)hasNetworkConnection;
+ (BOOL)hasExpensiveCellOnlyNetworkConnection;

@end
