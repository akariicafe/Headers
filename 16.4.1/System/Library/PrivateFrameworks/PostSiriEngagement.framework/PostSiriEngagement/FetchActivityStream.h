@class SAActivityObject, NSString;

@interface FetchActivityStream : SAFetchActivityStream <AFServiceCommand>

@property (retain, nonatomic) SAActivityObject *appLaunchActivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_timeBasedMergePublisher:(id)a0 withOtherPublishers:(id)a1;
- (void).cxx_destruct;
- (id)convertIntentEventToSAActivity:(id)a0;
- (id)_timeBasedPublisher:(id)a0 withStartDate:(id)a1 endDate:(id)a2 limit:(id)a3;
- (id)convertAlarmEventToSAActivity:(id)a0 eventTimestamp:(double)a1;
- (id)convertBiomeEventToSAActivity:(id)a0;
- (id)convertNowPlayingEventToSAActivity:(id)a0;
- (id)convertSiriExecutionEventToSAActivity:(id)a0;
- (void)fetchAllBiomeEventsWithCommand:(id)a0 completion:(id /* block */)a1;
- (void)fetchNonSiriUIEventsWithCommand:(id)a0 completion:(id /* block */)a1;
- (void)fetchSiriUIEventsWithCommand:(id)a0 completion:(id /* block */)a1;

@end
