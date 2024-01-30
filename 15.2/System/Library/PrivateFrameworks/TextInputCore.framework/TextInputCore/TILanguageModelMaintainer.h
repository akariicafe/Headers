@class NSTimer, NSString, NSDate;

@interface TILanguageModelMaintainer : NSObject <TIKeyboardActivityObserving>

@property (retain, nonatomic) NSDate *nextEligibleMaintenanceDate;
@property (retain, nonatomic) NSTimer *dynamicLearningCacheTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedLanguageModelMaintainer;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)keyboardActivityDidTransition:(id)a0;
- (void)touchDynamicLearningCacheTimer;
- (BOOL)isMaintenanceDue;
- (void)performMaintenanceIfNecessary;
- (void)dynamicLearningCacheTimerFired:(id)a0;

@end
