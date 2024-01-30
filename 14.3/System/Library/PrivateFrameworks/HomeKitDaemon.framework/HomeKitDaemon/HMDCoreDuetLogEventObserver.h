@class NSString;

@interface HMDCoreDuetLogEventObserver : HMFObject <HMDLogEventObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mapHMDSourceToDKHomeKitSource:(unsigned long long)a0;

- (void)didReceiveEventFromDispatcher:(id)a0 withLogContext:(id)a1;

@end
