@class NSTimeZone, NSString, NSSet, NSURL, NSDictionary, NSArray, NSMutableDictionary;
@protocol CalDAVPrincipal;

@interface MobileCalDAVSubscribedCalendar : MobileCalDAVCalendar <CalDAVSubscribedCalendar> {
    NSMutableDictionary *_properties;
}

@property (retain, nonatomic) NSURL *subscriptionURL;
@property (nonatomic) BOOL hasAlarmFilter;
@property (nonatomic) BOOL hasAttachmentFilter;
@property (nonatomic) BOOL hasTaskFilter;
@property (nonatomic) double refreshInterval;
@property (nonatomic) BOOL autoprovisioned;
@property (retain, nonatomic) NSString *locationCode;
@property (retain, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) id<CalDAVPrincipal> principal;
@property (retain, nonatomic) NSString *guid;
@property (retain, nonatomic) NSURL *calendarURL;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *notes;
@property (retain, nonatomic) NSString *color;
@property (retain, nonatomic) NSString *symbolicColorName;
@property (retain, nonatomic) NSString *pushKey;
@property (retain, nonatomic) NSURL *owner;
@property (retain, nonatomic) NSString *ownerDisplayName;
@property (retain, nonatomic) NSSet *preferredCalendarUserAddresses;
@property (retain, nonatomic) NSURL *publishURL;
@property (retain, nonatomic) NSURL *prePublishURL;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (retain, nonatomic) NSDictionary *bulkRequests;
@property (nonatomic) int order;
@property (nonatomic) int sharingStatus;
@property (retain, nonatomic) NSSet *sharees;
@property (nonatomic) BOOL isTaskContainer;
@property (nonatomic) BOOL isEventContainer;
@property (nonatomic) BOOL isSubscribed;
@property (nonatomic) BOOL isManagedByServer;
@property (nonatomic) BOOL isScheduleInbox;
@property (nonatomic) BOOL isScheduleOutbox;
@property (nonatomic) BOOL isNotification;
@property (nonatomic) BOOL isPoll;
@property (nonatomic) BOOL isEditable;
@property (nonatomic) BOOL isRenameable;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL isPublished;
@property (nonatomic) BOOL isAffectingAvailability;
@property (nonatomic) BOOL canBePublished;
@property (nonatomic) BOOL canBeShared;
@property (nonatomic) BOOL isFamilyCalendar;
@property (nonatomic) BOOL isMarkedUndeletable;
@property (nonatomic) BOOL isMarkedImmutableSharees;
@property (nonatomic) BOOL wasModifiedLocally;
@property (nonatomic) BOOL needsResync;
@property (retain, nonatomic) NSString *ctag;
@property (retain, nonatomic) NSString *syncToken;
@property (readonly, nonatomic) BOOL needsPublishUpdate;
@property (readonly, nonatomic) NSArray *syncActions;
@property (readonly, nonatomic) NSArray *shareeActions;
@property (readonly, nonatomic) NSArray *itemsToReportAsJunk;
@property (readonly, nonatomic) NSDictionary *uuidsToAddActions;
@property (readonly, nonatomic) NSDictionary *hrefsToModDeleteActions;
@property (readonly, nonatomic) NSSet *allItemURLs;
@property (readonly, nonatomic) NSArray *recurrenceSplitActions;
@property (nonatomic) long long maxAttendees;
@property (readonly, nonatomic) BOOL needsIsAffectingAvailabilityUpdate;
@property (readonly, nonatomic) BOOL becameDefaultSchedulingCalendar;
@property (retain, nonatomic) NSString *lastSyncTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)properties;
- (void).cxx_destruct;
- (void)updatePropertiesFromCalCalendar;
- (id)initWithCalendarURL:(id)a0 calendar:(void *)a1 properties:(id)a2 principal:(id)a3;
- (BOOL)shouldCalendarBeReadOnly;

@end
