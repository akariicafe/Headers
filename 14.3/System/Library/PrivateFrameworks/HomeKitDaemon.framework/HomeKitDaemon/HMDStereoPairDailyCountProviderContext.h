@class NSString, HMDLogEventDispatcher, HMDLogEventDailyScheduler, HMDHomeMediaSystemHandler;

@interface HMDStereoPairDailyCountProviderContext : NSObject <HMDStereoPairDailyCountProviderContext>

@property (readonly, weak) HMDHomeMediaSystemHandler *mediaSystemController;
@property (readonly, weak) HMDLogEventDailyScheduler *scheduler;
@property (readonly) HMDLogEventDispatcher *logEventDispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)submitLogEvent:(id)a0;
- (void)registerLogEventDailyProvider:(id)a0;
- (id)initWithMediaSystemController:(id)a0;

@end
