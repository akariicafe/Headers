@class NSArray, NSDictionary, RBSProcessIdentity, NSURL;
@protocol FBProcessWatchdogProviding;

@interface FBMutableProcessExecutionContext : FBProcessExecutionContext

@property (copy, nonatomic) RBSProcessIdentity *identity;
@property (copy, nonatomic) NSArray *arguments;
@property (copy, nonatomic) NSDictionary *environment;
@property (retain, nonatomic) NSURL *standardOutputURL;
@property (retain, nonatomic) NSURL *standardErrorURL;
@property (nonatomic) BOOL waitForDebugger;
@property (nonatomic) BOOL disableASLR;
@property (nonatomic) BOOL checkForLeaks;
@property (nonatomic) long long launchIntent;
@property (retain, nonatomic) id<FBProcessWatchdogProviding> watchdogProvider;
@property (nonatomic) double watchdogExtension;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
