@class NSString, HDSPEnvironment;
@protocol HDSPSystemReadyDelegate;

@interface HDSPSimulatorReadyProvider : NSObject <HDSPSystemReadyProvider, HDSPEnvironmentAware>

@property (readonly, nonatomic) BOOL isSystemReady;
@property (weak, nonatomic) id<HDSPSystemReadyDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

- (BOOL)isInDemoMode;
- (void).cxx_destruct;
- (id)initWithEnvironment:(id)a0;

@end
