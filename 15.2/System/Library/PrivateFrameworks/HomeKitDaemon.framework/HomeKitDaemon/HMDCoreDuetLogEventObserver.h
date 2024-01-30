@class NSString, HMDDuetEventManager;

@interface HMDCoreDuetLogEventObserver : HMFObject <HMMLogEventObserver>

@property (readonly) HMDDuetEventManager *duetEventManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mapHMDSourceToDKHomeKitSource:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (id)initWithDuetEventManager:(id)a0;

@end
