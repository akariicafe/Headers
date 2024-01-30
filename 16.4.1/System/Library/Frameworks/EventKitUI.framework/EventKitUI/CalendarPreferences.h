@class NSArray, NSString, CalPreferences, NSDate, NSNumber;

@interface CalendarPreferences : NSObject {
    CalPreferences *_preferences;
}

@property (nonatomic) BOOL showWeekNumbers;
@property (nonatomic) BOOL weekViewStartsOnToday;
@property (nonatomic) BOOL showListView;
@property (nonatomic) BOOL showMonthDividedListView;
@property (nonatomic) BOOL viewedTimeZoneAutomatic;
@property (nonatomic) BOOL requestSyncOnApplicationLaunch;
@property (nonatomic) BOOL drawDebugViewColors;
@property (nonatomic) BOOL immediateAlarmCreation;
@property (nonatomic) BOOL showEventsInPhoneMonthView;
@property (nonatomic) BOOL showExperimentalUI;
@property (nonatomic) BOOL showDetailedListView;
@property (nonatomic) BOOL disableContinuity;
@property (nonatomic) BOOL swipeToDeleteEnabled;
@property (nonatomic) BOOL largeListViewDisclosingEventDetails;
@property (nonatomic) BOOL showWindowDebugButton;
@property (nonatomic, getter=isShortResumeToTodayTimeout) BOOL shortResumeToTodayTimeout;
@property (nonatomic) BOOL hideInlineDayViewInEventDetails;
@property (nonatomic) BOOL disableTodayPushes;
@property (nonatomic) BOOL enableAvatars;
@property (nonatomic) BOOL enableMultiwindowAsserts;
@property (nonatomic) unsigned long long promptForCommentWhenDeclining;
@property (nonatomic) unsigned long long debugOccurrenceViewIconOverload;
@property (retain, nonatomic) NSArray *calendarUUIDsExcludedFromNotifications;
@property (retain, nonatomic) NSNumber *weekStart;
@property (retain, nonatomic) NSNumber *lastSuspendTime;
@property (retain, nonatomic) NSNumber *lastViewedDate;
@property (retain, nonatomic) NSNumber *lastViewMode;
@property (retain, nonatomic) NSNumber *lastSidebarMode;
@property (retain, nonatomic) NSNumber *dayViewHourScale;
@property (retain, nonatomic) NSNumber *weekViewHourScale;
@property (retain, nonatomic) NSString *sourceIdentifierForSelectedIdentity;
@property (retain, nonatomic) NSString *searchString;
@property (retain, nonatomic) NSString *overlayCalendarID;
@property (retain, nonatomic) NSDate *simulatedCurrentDate;
@property (retain, nonatomic) NSNumber *locationSearchResultLimit;
@property (nonatomic) BOOL eventAutocompleteEnabled;
@property (nonatomic) BOOL highColorCarplayEnabled;
@property (retain, nonatomic) NSNumber *dayViewFirstVisibleSecond;
@property (readonly, nonatomic) NSArray *deselectedCalendarSyncHashes;
@property (nonatomic) BOOL overrideLocaleWeekends;
@property (retain, nonatomic) NSString *lastViewedOccurrenceUID;
@property (retain, nonatomic) NSDate *lastViewedOccurrenceDate;
@property (nonatomic) BOOL scanForDiscoveredVirtualConferences;
@property (nonatomic) BOOL displayedSubscribedCalendarSpamDetectionPrivacyNotice;
@property (nonatomic) BOOL allowSubscribedCalendarSpamDetection;
@property (nonatomic) BOOL hideCalendarsFilteredByFocus;
@property (nonatomic) BOOL promptToDisableFilterByFocus;
@property (nonatomic) BOOL useMoonForCheckboxForCalendarsFilteredByFocus;
@property (retain, nonatomic) NSNumber *defaultEventDuration;

+ (id)sharedPreferences;

- (void)resetSubscribedCalendarSpamDetectionToNull;
- (id)init;
- (void).cxx_destruct;

@end
