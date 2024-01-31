@class NSString, NSSet, NSXPCConnection, NSHashTable, NSNumber, NSLock;
@protocol CLKComplicationWidgetMigrator, CLKComplicationClientDelegate;

@interface CLKComplicationClient : NSObject <CLKComplicationServer, CLKComplicationDataSource> {
    NSXPCConnection *_connection;
    NSHashTable *_invalidationObservers;
    NSLock *_invalidationObserversLock;
    BOOL _invalidated;
}

@property (copy, nonatomic) id /* block */ checkinHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (readonly, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) NSString *clientBundlePath;
@property (readonly, nonatomic) NSNumber *pid;
@property (weak, nonatomic) id<CLKComplicationClientDelegate> delegate;
@property (copy, nonatomic) NSSet *activeComplications;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<CLKComplicationWidgetMigrator> widgetMigrator;

- (void)_handleConnectionInvalidated;
- (void)invalidate;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)getAlwaysOnTemplateForComplication:(id)a0 withHandler:(id /* block */)a1;
- (void)getCurrentTimelineEntryForComplication:(id)a0 withHandler:(id /* block */)a1;
- (void)getPrivacyBehaviorForComplication:(id)a0 withHandler:(id /* block */)a1;
- (void)getTimelineAnimationBehaviorForComplication:(id)a0 withHandler:(id /* block */)a1;
- (void)getTimelineEndDateForComplication:(id)a0 withHandler:(id /* block */)a1;
- (void)getTimelineEntriesForComplication:(id)a0 afterDate:(id)a1 limit:(unsigned long long)a2 withHandler:(id /* block */)a3;
- (void)notifyDebugTimeoutWithCharging:(BOOL)a0;
- (void)addInvalidationObserver:(id)a0;
- (void)checkinWithClientIdentifier:(id)a0 bundlePath:(id)a1;
- (void)extendTimelineForComplication:(id)a0;
- (void)getComplicationDescriptorsWithHandler:(id /* block */)a0;
- (void)getLocalizableSampleTemplateForComplication:(id)a0 withHandler:(id /* block */)a1;
- (void)getNextRequestedUpdateDateWithHandler:(id /* block */)a0;
- (void)getWidgetMigrationConfigurationFrom:(id)a0 withHandler:(id /* block */)a1;
- (void)handleSharedComplicationDescriptors:(id)a0;
- (void)reloadComplicationDescriptors;
- (void)reloadTimelineForComplication:(id)a0;
- (void)removeInvalidationObserver:(id)a0;
- (void)requestedUpdateBudgetExhausted;
- (void)requestedUpdateDidBegin;

@end
