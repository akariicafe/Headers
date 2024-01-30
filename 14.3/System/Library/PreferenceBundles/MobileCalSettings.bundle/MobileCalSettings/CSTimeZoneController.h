@class PSSpecifier;

@interface CSTimeZoneController : PSListController {
    PSSpecifier *_calendarTimeZoneSpecifier;
    PSSpecifier *_timeZoneSupportSpecifier;
    BOOL _timeZoneSupportEnabled;
}

- (void).cxx_destruct;
- (id)specifiers;
- (id)timeZoneSupportEnabled:(id)a0;
- (void)setCalendarTimeZone:(id)a0 specifier:(id)a1;
- (BOOL)_timeZoneSupportEnabled;
- (void)setTimeZoneSupportEnabled:(id)a0 specifier:(id)a1;
- (id)calendarTimeZone:(id)a0;
- (void)loadTimeZoneController:(id)a0;

@end
