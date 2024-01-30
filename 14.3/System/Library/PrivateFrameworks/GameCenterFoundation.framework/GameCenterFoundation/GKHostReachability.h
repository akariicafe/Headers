@class NSString, NSError;

@interface GKHostReachability : GKReachability

@property (retain, nonatomic) NSString *hostName;
@property (retain, nonatomic) NSError *error;

+ (id)_gkReachabilityWithHostName:(id)a0;

- (void)dealloc;

@end
