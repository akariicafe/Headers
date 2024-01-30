@class NSString, FBApplicationProcessWatchdogPolicy;

@interface SBSceneWatchdogProvider : NSObject <FBProcessWatchdogProviding> {
    BOOL _watchdogDisabled;
    FBApplicationProcessWatchdogPolicy *_defaultProcessWatchdogProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)disabledSceneWatchdogProvider;
+ (id)defaultSceneWatchdogProvider;

@end
