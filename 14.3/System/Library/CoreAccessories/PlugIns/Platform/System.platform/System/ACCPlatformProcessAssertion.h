@class NSObject;
@protocol OS_dispatch_source;

@interface ACCPlatformProcessAssertion : BKSProcessAssertion

@property (nonatomic) unsigned long long startTime;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *processAssertionTimer;

- (id)initWithBundleIdentifier:(id)a0 flags:(unsigned int)a1 reason:(unsigned int)a2 name:(id)a3 withHandler:(id /* block */)a4;
- (void).cxx_destruct;
- (void)dealloc;

@end
