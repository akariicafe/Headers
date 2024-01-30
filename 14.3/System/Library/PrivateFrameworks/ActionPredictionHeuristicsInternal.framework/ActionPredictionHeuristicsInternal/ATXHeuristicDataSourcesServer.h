@class NSXPCListenerEndpoint, NSString, ATXHeuristicDevice, NSXPCListener;

@interface ATXHeuristicDataSourcesServer : NSObject <NSXPCListenerDelegate, ATXHeuristicDataSources> {
    ATXHeuristicDevice *_device;
    NSXPCListener *_listener;
}

@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDevice:(id)a0;
- (void)preferredAppForIntentName:(id)a0 andParameterCombination:(id)a1 callback:(id /* block */)a2;
- (void)contactsWithPhone:(id)a0 callback:(id /* block */)a1;
- (id)init;
- (void)getEventsWithProminentFeature:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;
- (void)passesWithStyle:(id)a0 callback:(id /* block */)a1;
- (void)birthdaysWithCallback:(id /* block */)a0;
- (void)dealloc;
- (void)unreadMessagesWithLimit:(long long)a0 callback:(id /* block */)a1;
- (void)obtainOneTimeLocationWithCallback:(id /* block */)a0;
- (void)duetInteractionCountForHandles:(id)a0 sinceDate:(id)a1 callback:(id /* block */)a2;
- (void)peopleSuggestionsWithCallback:(id /* block */)a0;
- (void)calendarEventsFromStartDate:(id)a0 toEndDate:(id)a1 callback:(id /* block */)a2;
- (void)contentsWithCallback:(id /* block */)a0;
- (void)fetchRecentWorkoutStateWithCompletionHandler:(id /* block */)a0;
- (void)bestHandleForContact:(id)a0 service:(id)a1 callback:(id /* block */)a2;
- (void)fetchRemindersObjectGraphFromStartDate:(id)a0 toEndDate:(id)a1 incompleteRemindersOnly:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)flightStatusForFlight:(id)a0 callback:(id /* block */)a1;
- (void)vipsWithCallback:(id /* block */)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)fetchWidgetMetadataForAppBundleIds:(id)a0 callback:(id /* block */)a1;
- (void)bestAppSuggestionWithCallback:(id /* block */)a0;
- (void)alarms:(id /* block */)a0;
- (void)isDNDActive:(id /* block */)a0;
- (void)nlEventsWithCallback:(id /* block */)a0;
- (void)batteryInformationWithCallback:(id /* block */)a0;
- (void)visibleCalendarsWithCallback:(id /* block */)a0;
- (void)contactsWithName:(id)a0 callback:(id /* block */)a1;
- (void)contactsWithIdentifiers:(id)a0 callback:(id /* block */)a1;
- (void)holidaysFromStartDate:(id)a0 toEndDate:(id)a1 callback:(id /* block */)a2;
- (void)travelTimeInfoForEventID:(id)a0 location:(id)a1 expectedArrivalDate:(id)a2 transportType:(id)a3 localOnlyAfterFirstUpdate:(BOOL)a4 callback:(id /* block */)a5;
- (void)favoritesWithContacts:(id)a0 callback:(id /* block */)a1;
- (void)alarmTimeOfDay:(id /* block */)a0;
- (void)appLaunchCountForBundleId:(id)a0 startDate:(id)a1 endDate:(id)a2 limit:(unsigned long long)a3 callback:(id /* block */)a4;
- (void)hourOfDayInteractionProbabilitiesWithContact:(id)a0 callback:(id /* block */)a1;
- (void)timeIntervalSinceUserWakeupWithCallback:(id /* block */)a0;
- (void)contactsWithEmail:(id)a0 callback:(id /* block */)a1;
- (void)callNewerThan:(double)a0 showIncoming:(BOOL)a1 showOutgoing:(BOOL)a2 missedOnly:(BOOL)a3 callback:(id /* block */)a4;

@end
