@interface CADStatsOccurrenceInfo : NSObject {
    BOOL _isAllDay;
    BOOL _isBirthday;
    BOOL _isHoliday;
    BOOL _isCandidateForTravelAdvisories;
    BOOL _isImmediatelyEligibleForTravelAdvisories;
    BOOL _hasResponseComment;
    BOOL _organizerIsSelf;
    BOOL _hasNonDefaultAlarm;
    BOOL _hasLocation;
    BOOL _hasClientLocation;
    BOOL _hasLocationWithKnownSpatialData;
    BOOL _hasConferenceRoomLocation;
    BOOL _hasPredictedLocation;
    BOOL _isOnCalendarThatSuppressesAlerts;
    BOOL _isOnSharedCalendar;
    BOOL _hasURL;
    BOOL _hasNotes;
    unsigned long long _numAttendees;
    long long _travelAdvisoryBehavior;
    long long _status;
    long long _participationStatus;
    double _durationInMinutes;
    double _minutesUntilStart;
    double _minutesUntilEnd;
}

@end
