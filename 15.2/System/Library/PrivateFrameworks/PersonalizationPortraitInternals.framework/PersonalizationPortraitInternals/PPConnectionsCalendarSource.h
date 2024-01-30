@class NSString, PPLocalEventStore;

@interface PPConnectionsCalendarSource : PPConnectionsSource <PPConnectionsLocationSource> {
    PPLocalEventStore *_localEventStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)locationNameFromEvent:(id)a0;
+ (id)locationValueFromEvent:(id)a0;
+ (id)locationLabelFromEvent:(id)a0;

- (id)identifier;
- (BOOL)isCalendarEventEligibleForLocationPrediction:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)locationItemsWithCriteria:(id)a0 earliest:(id)a1 latest:(id)a2 limit:(unsigned long long)a3 consumer:(unsigned long long)a4 explanationSet:(id)a5;
- (id)ekEventWithExternalID:(id)a0;

@end
