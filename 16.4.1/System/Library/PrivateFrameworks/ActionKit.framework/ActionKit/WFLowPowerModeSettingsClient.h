@class NSString, _PMLowPowerMode;

@interface WFLowPowerModeSettingsClient : WFSettingsClient <WFReversibleBooleanStateSetting>

@property (readonly, nonatomic) _PMLowPowerMode *lowPowerMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reversalArbiter;
+ (void)createClientWithCompletionHandler:(id /* block */)a0;
+ (id)energyModeStream;
+ (void)getBookmarkForCurrentStateWithCompletionHandler:(id /* block */)a0;
+ (void)getReversalStateWithBookmark:(id)a0 completionHandler:(id /* block */)a1;

@end
