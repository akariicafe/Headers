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
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)localeChanged:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)dealloc;
- (id)specifiers;
- (id)init;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)significantTimeChange:(id)a0;
- (void)datePickerChanged:(id)a0;
- (id)currentTimeString;
- (void)loadTimeZoneController:(id)a0;
- (void)_createDateTimeFormatters;
- (void)_setSpecifier:(id)a0 valueEnabled:(BOOL)a1;
- (void)_updateCurrentTime;
- (id)currentDateString;
- (void)effectiveSettingsChanged:(id)a0;
- (id)is24HourTime:(id)a0;
- (id)isShowingAMPMInStatusBar:(id)a0;
- (id)isShowingDateInStatusBar:(id)a0;
- (id)makeCurrentTimeSpecifier;
- (id)makeTimePickerSpecifier;
- (void)reloadTimezone;
- (void)set24HourTime:(id)a0 specifier:(id)a1;
- (void)setAutomaticTimeFooter;
- (void)setShowAMPMInStatusBar:(id)a0 specifier:(id)a1;
- (void)setShowDateInStatusBar:(id)a0 specifier:(id)a1;
- (void)setTimeZoneValue:(id)a0 specifier:(id)a1;
- (void)setUseAutomaticTime:(id)a0 specifier:(id)a1;
- (BOOL)shouldDisplayTimezoneSpinner;
- (id)timeZoneValue:(id)a0;
- (id)useAutomaticTime:(id)a0;
- (id)valueForTime:(id)a0;

@end
