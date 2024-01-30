@class NSArray, NSDictionary, NSURL, RBSProcessIdentity;
@protocol FBProcessWatchdogProviding;

@interface FBProcessExecutionContext : NSObject <NSCopying, NSMutableCopying>

@property (copy, nonatomic) NSArray *arguments;
@property (copy, nonatomic) NSDictionary *environment;
@property (retain, nonatomic) NSURL *standardOutputURL;
@property (retain, nonatomic) NSURL *standardErrorURL;
@property (nonatomic) BOOL waitForDebugger;
@property (nonatomic) BOOL disableASLR;
@property (nonatomic) BOOL checkForLeaks;
@property (nonatomic) long long launchIntent;
@property (nonatomic) unsigned int launchAssertionFlags;
@property (retain, nonatomic) id<FBProcessWatchdogProviding> watchdogProvider;
@property (nonatomic) double watchdogExtension;
@property (copy, nonatomic) RBSProcessIdentity *identity;

- (id)initWithIdentity:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_initWithExecutionContext:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
