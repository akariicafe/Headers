@class NSObject;
@protocol OS_dispatch_source;

@interface ACCPlatformProcessAssertion : RBSAssertion

@property (nonatomic) unsigned long long startTime;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *processAssertionTimer;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 processAssertionName:(id)a1 rbsAttributes:(id)a2 pid:(int)a3;

@end
