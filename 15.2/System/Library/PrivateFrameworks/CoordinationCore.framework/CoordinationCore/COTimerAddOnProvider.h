@class NSString, COHomeHubAdapter, COHomeKitAdapter, MTTimerManager;

@interface COTimerAddOnProvider : NSObject <COServiceAddOnProvider>

@property (readonly, nonatomic) MTTimerManager *timerManager;
@property (readonly, nonatomic) COHomeKitAdapter *homekit;
@property (readonly, nonatomic) COHomeHubAdapter *homehub;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
