@class HDSPEnvironment, NSString, NSDate;

@interface HDSPSleepDaemon : NSObject <HDSPDiagnosticsProvider>

@property (readonly, nonatomic) NSDate *launchDate;
@property (readonly, nonatomic) HDSPEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)diagnosticInfo;
- (id)diagnosticDescription;
- (void)start;
- (id)initWithBehavior:(id)a0 sleepEnabled:(BOOL)a1;

@end
