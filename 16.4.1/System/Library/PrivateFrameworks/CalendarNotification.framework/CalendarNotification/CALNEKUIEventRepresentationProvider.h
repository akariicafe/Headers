@class NSString;

@interface CALNEKUIEventRepresentationProvider : NSObject <CALNDataSourceEventRepresentationProvider, CALNSourceEventRepresentationProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)eventRepresentationDictionaryForResourceChangeNotification:(id)a0 message:(id)a1 date:(id)a2 endDate:(id)a3 timeZone:(id)a4;
- (id)updateEventRepresentationDictionary:(id)a0 withHypothesisMessage:(id)a1;
- (id)eventRepresentationDictionaryForUpcomingEvent:(id)a0 date:(id)a1 displayTimeZone:(id)a2;
- (id)eventRepresentationDictionaryForSharedCalendarInvitationNotificationWithTitle:(id)a0 message:(id)a1;
- (id)eventRepresentationDictionaryForResponseNotificationWithTitle:(id)a0 message:(id)a1;
- (id)eventRepresentationDictionaryForInvitationNotification:(id)a0 event:(id)a1 date:(id)a2 endDate:(id)a3 timeZone:(id)a4;

@end
