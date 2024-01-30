@class NSString, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface SBApplicationTestingManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_testEndedHandlers;
}

@property (readonly, nonatomic, getter=_idleTimerDisableAssertions) NSMutableDictionary *idleTimerDisableAssertions;
@property (copy, nonatomic) NSString *currentTestName;
@property (copy, nonatomic) NSString *scrollTestActiveSubtest;

+ (id)sharedInstance;

- (id)init;
- (void)markUserLaunchInitiationTime;
- (void).cxx_destruct;
- (void)_installTestEndedHandler:(id /* block */)a0;
- (void)_handleTestEnded;
- (void)_prepareForTestStartup:(id)a0;

@end
