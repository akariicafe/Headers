@class FBSDisplayLayoutMonitor, NSArray, NSString;

@interface SMUSystemDisplayLayoutMonitor : NSObject <SMUSystemDisplayLayoutMonitoring>

@property (readonly, nonatomic) FBSDisplayLayoutMonitor *layoutMonitor;
@property (readonly, nonatomic) NSArray *currentLayout;
@property (copy, nonatomic) id /* block */ transitionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)externalDisplayLayoutMonitorWithIdentity:(id)a0;
+ (id)mainDisplayLayoutMonitor;

- (void)dealloc;
- (id)init;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)handleUpdatedLayout:(id)a0 transitionContext:(id)a1;

@end
