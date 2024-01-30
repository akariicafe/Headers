@class NSNotificationCenter, NSString;
@protocol HMDTimerManager;

@interface HMDHomePrimaryResidentMessagingHandlerDefaultDataSource : NSObject <HMDHomePrimaryResidentMessagingHandlerDataSource>

@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) id<HMDTimerManager> timerManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;

@end
