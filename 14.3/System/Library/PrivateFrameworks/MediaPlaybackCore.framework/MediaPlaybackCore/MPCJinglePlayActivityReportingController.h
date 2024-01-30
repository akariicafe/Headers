@class NSString, ICPlayActivityController, NSObject;
@protocol OS_dispatch_queue;

@interface MPCJinglePlayActivityReportingController : MPCReportingController {
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    double _nonCatalogAggregatePlayDuration;
    double _nonCatalogAggregateStartTime;
    NSString *_nonCatalogDeviceName;
    BOOL _nonCatalogOffline;
    BOOL _nonCatalogSBEnabled;
    unsigned long long _nonCatalogStoreAccountID;
    NSString *_nonCatalogBuildVersion;
    NSString *_nonCatalogStoreFrontID;
    unsigned long long _nonCatalogSourceType;
}

@property (readonly, nonatomic) ICPlayActivityController *playActivityController;
@property (nonatomic) BOOL shouldReportPlayActivityEvents;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)completePendingPlayActivityEvents:(id)a0 forSessionToken:(unsigned long long)a1 withResult:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (id)initWithWritingStyle:(unsigned long long)a0;
- (void)_recordReportingEvents:(id)a0;
- (void)_applicationWillTerminateNotification:(id)a0;
- (id)_captureNonCatalogAggregatePlayActivityEventWithNonCatalogAggregateEndTime:(double)a0;
- (void)_clearNonCatalogAggregatePlayActivityEventData;
- (void)acquirePendingPlayActivityEventsForStoreAccountID:(unsigned long long)a0 completionHandler:(id /* block */)a1;

@end
