@class NSTimeZone, NSString, NSSet, NSURL, ICSDuration;

@interface CalDAVContainer : CoreDAVContainer

@property (nonatomic) BOOL overrideSupportsFreebusy;
@property (readonly, nonatomic) BOOL isCalendar;
@property (readonly, nonatomic) BOOL isSubscribed;
@property (readonly, nonatomic) BOOL isScheduleInbox;
@property (readonly, nonatomic) BOOL isScheduleOutbox;
@property (readonly, nonatomic) BOOL isNotification;
@property (readonly, nonatomic) BOOL isSharedOwner;
@property (readonly, nonatomic) BOOL isShared;
@property (readonly, nonatomic) BOOL isEventContainer;
@property (readonly, nonatomic) BOOL isTaskContainer;
@property (readonly, nonatomic) BOOL isJournalContainer;
@property (readonly, nonatomic) BOOL isPollContainer;
@property (readonly, nonatomic) BOOL supportsFreebusy;
@property (readonly, nonatomic) BOOL isFamilyCalendar;
@property (retain, nonatomic) NSString *calendarDescription;
@property (retain, nonatomic) NSString *ctag;
@property (retain, nonatomic) NSString *calendarColor;
@property (retain, nonatomic) NSString *symbolicColorName;
@property (retain, nonatomic) NSString *calendarOrder;
@property (retain, nonatomic) NSString *defaultTimedAlarms;
@property (retain, nonatomic) NSString *defaultAllDayAlarms;
@property (retain, nonatomic) NSSet *supportedCalendarComponentSet;
@property (nonatomic) BOOL subscribedStripAlarms;
@property (nonatomic) BOOL subscribedStripTodos;
@property (nonatomic) BOOL subscribedStripAttachments;
@property (retain, nonatomic) ICSDuration *subscribedRefreshRate;
@property (retain, nonatomic) NSURL *publishURL;
@property (retain, nonatomic) NSURL *prePublishURL;
@property (nonatomic) BOOL isScheduleTransparent;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) BOOL canBePublished;
@property (nonatomic) BOOL canBeShared;
@property (nonatomic) BOOL isMarkedUndeletable;
@property (nonatomic) BOOL isMarkedImmutableSharees;
@property (retain, nonatomic) NSURL *source;
@property (retain, nonatomic) NSSet *freeBusySet;
@property (retain, nonatomic) NSURL *scheduleDefaultCalendarURL;
@property (retain, nonatomic) NSSet *sharees;
@property (retain, nonatomic) NSString *supportedCalendarComponentSets;
@property (retain, nonatomic) NSString *locationCode;
@property (retain, nonatomic) NSString *languageCode;
@property (nonatomic) BOOL autoprovisioned;
@property (retain, nonatomic) NSString *alarms;
@property (nonatomic) long long maxAttendees;

+ (id)copyPropertyMappingsForParser;

- (void)applyParsedProperties:(id)a0;
- (void)postProcessWithResponseHeaders:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)_isComponentSupportedForString:(id)a0;
- (void)_setTimeZoneFromProperties:(id)a0 onCalendar:(id)a1;

@end
