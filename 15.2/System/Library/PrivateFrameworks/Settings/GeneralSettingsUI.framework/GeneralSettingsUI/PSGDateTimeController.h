@class NSIndexPath, PSSpecifier, NSString, NSTimer, CoreTelephonyClient, PSGWallClockMinuteTimer;

@interface PSGDateTimeController : PSListController <CoreTelephonyClientCarrierBundleDelegate, PSDateTimePickerCellDelegate> {
    NSIndexPath *_setDateAndTimeIndexPath;
    NSTimer *_timer;
    BOOL _localeForces24HourTime;
    struct __CFDateFormatter { } *_dateFormatter;
    struct __CFDateFormatter { } *_timeFormatter;
}

@property (retain, nonatomic) PSGWallClockMinuteTimer *minuteTimer;
@property (retain, nonatomic) PSSpecifier *ampmToggleSpecifier;
@property (retain, nonatomic) CoreTelephonyClient *_client;
@property (retain) PSSpecifier *timeZoneSpecifier;
@property (retain) PSSpecifier *timePickerSpecifier;
@property (retain) PSSpecifier *currentTimeSpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)carrierBundleChange:(id)a0;
- (id)specifiers;
- (void)significantTimeChange:(id)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)localeChanged:(id)a0;
- (void)dealloc;
- (void)datePickerChanged:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)currentTimeString;
- (void)loadTimeZoneController:(id)a0;
- (void)effectiveSettingsChanged:(id)a0;
- (void)_createDateTimeFormatters;
- (void)_updateCurrentTime;
- (id)useAutomaticTime:(id)a0;
- (void)_setSpecifier:(id)a0 valueEnabled:(BOOL)a1;
- (id)makeCurrentTimeSpecifier;
- (void)setAutomaticTimeFooter;
- (id)currentDateString;
- (id)valueForTime:(id)a0;
- (BOOL)shouldDisplayTimezoneSpinner;
- (id)makeTimePickerSpecifier;
- (id)is24HourTime:(id)a0;
- (void)reloadTimezone;
- (void)setTimeZoneValue:(id)a0 specifier:(id)a1;
- (void)setUseAutomaticTime:(id)a0 specifier:(id)a1;
- (id)isShowingDateInStatusBar:(id)a0;
- (void)setShowDateInStatusBar:(id)a0 specifier:(id)a1;
- (id)isShowingAMPMInStatusBar:(id)a0;
- (void)setShowAMPMInStatusBar:(id)a0 specifier:(id)a1;
- (void)set24HourTime:(id)a0 specifier:(id)a1;
- (id)timeZoneValue:(id)a0;

@end
