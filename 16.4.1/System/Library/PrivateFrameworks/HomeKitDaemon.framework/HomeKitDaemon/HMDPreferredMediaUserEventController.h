@class NSString, NSObject;
@protocol OS_dispatch_queue, HMDPreferredMediaUserEventControllerDataSource, HMDFetchedSettingsDriver;

@interface HMDPreferredMediaUserEventController : NSObject <HMDFetchedSettingsDriverDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) id<HMDFetchedSettingsDriver> driver;
@property (readonly, weak) id<HMDPreferredMediaUserEventControllerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)eventSource;
- (void).cxx_destruct;
- (double)eventTimestamp;
- (void)_postUpdateEventsIfDifferent:(id)a0;
- (void)driver:(id)a0 didUpdatePrimaryUserInfo:(id)a1;
- (void)driver:(id)a0 didUpdateSettings:(id)a1;
- (void)driverDidReload:(id)a0;
- (id)initWithDataSource:(id)a0 queue:(id)a1 driver:(id)a2;
- (void)updatePreferredMediaUserWithPrimaryUserInfo:(id)a0 completion:(id /* block */)a1;

@end
