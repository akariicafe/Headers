@class PSSpecifier;

@interface CSTimeZoneController : PSListController {
    PSSpecifier *_calendarTimeZoneSpecifier;
    PSSpecifier *_timeZoneSupportSpecifier;
    BOOL _timeZoneSupportEnabled;
}

- (id)specifiers;
- (void).cxx_destruct;
- (BOOL)_timeZoneSupportEnabled;
- (id)calendarTimeZone:(id)a0;
- (void)loadTimeZoneController:(id)a0;
- (void)setCalendarTimeZone:(id)a0 specifier:(id)a1;
- (void)setTimeZoneSupportEnabled:(id)a0 specifier:(id)a1;
- (id)timeZoneSupportEnabled:(id)a0;

@end
