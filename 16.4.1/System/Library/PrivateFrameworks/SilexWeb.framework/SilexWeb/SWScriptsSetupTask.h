@class NSString;
@protocol SWScriptsManager;

@interface SWScriptsSetupTask : NSObject <SWSetupTask>

@property (readonly, nonatomic) id<SWScriptsManager> scriptsManager;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)performSetup;
- (id)initWithScriptsManager:(id)a0;

@end
