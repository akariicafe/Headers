@class NSArray, NSString, NSXPCConnection, NSDate, NSSet, NSObject;
@protocol OS_dispatch_queue, CLKComplicationDataSource;

@interface CLKComplicationServer : NSObject <CLKComplicationClient> {
    NSString *_clientIdentifier;
    Class _dataSourceClass;
    NSXPCConnection *_serverConnection;
    id<CLKComplicationDataSource> _dataSource;
    NSSet *_activeComplications;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectionLock;
    int _restartNotificationToken;
    struct { BOOL supportsGetTimeTravelDirections; BOOL supportsGetTimelineStartDate; BOOL supportsGetTimelineEndDate; BOOL supportsGetPrivacyBehavior; BOOL supportsGetTimelineAnimationBehavior; BOOL supportsExtendAfter; BOOL supportsExtendBefore; BOOL supportsGetRequestedUpdate; BOOL supportsNotifyRequestedUpdate; BOOL supportsNotifyBudgetExhausted; BOOL supportsGetPlaceholderTemplate; BOOL supportsGetLocalizableDescriptionProvider; BOOL supportsGetLocalizableSampleTemplate; BOOL exceptionOnSkippedHandler; BOOL supportsGetAlwaysOnTemplate; BOOL supportsComplicationDescriptors; BOOL supportsHandleSharedComplicationDescriptors; } _dataSourceFlags;
    NSObject<OS_dispatch_queue> *_templateFinalizationQueue;
}

@property (readonly, nonatomic) NSArray *activeComplications;
@property (readonly, nonatomic) NSDate *earliestTimeTravelDate;
@property (readonly, nonatomic) NSDate *latestTimeTravelDate;

+ (id)sharedInstance;

- (id)serverProxy;
- (void)setActiveComplications:(id)a0;
- (void).cxx_destruct;
- (id)initWithClientIdentifier:(id)a0;
- (id)init;
- (id)_init;
- (void)_createConnection;
- (void)dealloc;
- (void)getTimelineEndDateForComplication:(id)a0 withHandler:(id /* block */)a1;
- (void)getPrivacyBehaviorForComplication:(id)a0 withHandler:(id /* block */)a1;
- (void)getTimelineAnimationBehaviorForComplication:(id)a0 withHandler:(id /* block */)a1;
- (void)getAlwaysOnTemplateForComplication:(id)a0 withHandler:(id /* block */)a1;
- (void)getCurrentTimelineEntryForComplication:(id)a0 withHandler:(id /* block */)a1;
- (void)getTimelineEntriesForComplication:(id)a0 afterDate:(id)a1 limit:(unsigned long long)a2 withHandler:(id /* block */)a3;
- (void)reloadTimelineForComplication:(id)a0;
- (void)extendTimelineForComplication:(id)a0;
- (void)reloadComplicationDescriptors;
- (void)getLocalizableSampleTemplateForComplication:(id)a0 withHandler:(id /* block */)a1;
- (void)getComplicationDescriptorsWithHandler:(id /* block */)a0;
- (void)handleSharedComplicationDescriptors:(id)a0;
- (void)notifyDebugTimeoutWithCharging:(BOOL)a0;
- (void)getSupportedTimeTravelDirectionsForComplication:(id)a0 withHandler:(id /* block */)a1;
- (void)getNextRequestedUpdateDateWithHandler:(id /* block */)a0;
- (void)requestedUpdateDidBegin;
- (void)requestedUpdateBudgetExhausted;
- (void)getPlaceholderTemplateForComplication:(id)a0 withHandler:(id /* block */)a1;
- (void)_complicationServiceDidStart;
- (void)_checkinWithServer;
- (void)_createDataSourceIfNecessary;
- (BOOL)_shouldAllowComplication:(id)a0;

@end
