@class EKCalendarVisibilityManager, NSString, NSArray, CLLocationManager, _CLPlaceInference, EKEvent, EKEventStore, NSObject;
@protocol OS_dispatch_queue, DNDLifetimeDetailsProviderDelegate;

@interface DNDLifetimeDetailsProvider : NSObject <CLLocationManagerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_eventStoreQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    BOOL _monitoringLifetimes;
    CLLocationManager *_locationManager;
    _CLPlaceInference *_currentPlaceInference;
    EKEventStore *_eventStore;
    EKCalendarVisibilityManager *_calendarVisibilityManager;
    EKEvent *_relevantEvent;
}

@property (readonly, copy, nonatomic) NSArray *availableLifetimeDetails;
@property (weak, nonatomic) id<DNDLifetimeDetailsProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)lifetimeDetailsWithMetadataForAssertionDetails:(id)a0 completionHandler:(id /* block */)a1;
- (void)startUpdatingLifetimeDetailMetadata;
- (id)init;
- (void).cxx_destruct;
- (void)_eventStoreQueue_requestRelevantEvent;
- (void)_queue_resetLifetimeDetails;
- (id)lifetimeForLifetimeDetails:(id)a0 error:(id *)a1;
- (void)stopUpdatingLifetimeDetails;
- (void)_queue_gotPlaceInferences:(id)a0;
- (void)requestLifetimeDetails;
- (void)_queue_requestLifetimeDetails;
- (void)_requestRelevantLocationMetadata;
- (void)startUpdatingLifetimeDetails;
- (void)resetLifetimeDetails;
- (id)lifetimeDetailsForAssertionDetails:(id)a0 error:(id *)a1;
- (void)stopUpdatingLifetimeDetailMetadata;
- (id)_lifetimeDetailsUntilEveningOrMorningForDate:(id)a0;
- (void)_queue_rebuildAvailableLifetimeDetails;

@end
