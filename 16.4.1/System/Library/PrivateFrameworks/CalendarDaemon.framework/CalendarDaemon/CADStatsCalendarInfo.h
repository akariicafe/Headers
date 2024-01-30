@interface CADStatsCalendarInfo : NSObject {
    BOOL _isSelected;
    BOOL _isHoliday;
    BOOL _isSubscribed;
    BOOL _isCalDAV;
    BOOL _isAuthenticated;
    BOOL _isShared;
    BOOL _allowsEvents;
    BOOL _isHidden;
    BOOL _isBirthday;
    BOOL _isFacebookBirthday;
    BOOL _isFamily;
    BOOL _isFoundInMail;
    BOOL _isNaturalLanguageSuggestedEvents;
    BOOL _isSharedByMe;
    BOOL _isSyncedHolidayCalendar;
    unsigned long long _numSharees;
    unsigned long long _readOnlySharees;
    unsigned long long _readWriteSharees;
}

@end
