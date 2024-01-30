@class NTKWorldClockComplication, NSDate;
@protocol NTKWorldClockComplicationDisplay;

@interface NTKWorldClockComplicationController : NTKComplicationController <NTKTimeTravel> {
    struct { unsigned char wantsShortCity : 1; unsigned char wantsLongCity : 1; } _displayFlags;
    NSDate *_timeTravelDate;
}

@property (readonly, weak, nonatomic) id<NTKWorldClockComplicationDisplay> legacyDisplay;
@property (readonly, nonatomic) NTKWorldClockComplication *complication;

+ (BOOL)_acceptsComplicationType:(unsigned long long)a0 forDevice:(id)a1;

- (void)_deactivate;
- (void)_handleTimeZoneChange;
- (void).cxx_destruct;
- (void)_activate;
- (void)_updateDisplay;
- (void)_handleLocaleChange;
- (void)setPauseDate:(id)a0;
- (void)setDataMode:(long long)a0 forDisplayWrapper:(id)a1;
- (void)setTimeTravelDate:(id)a0 animated:(BOOL)a1;
- (id)complicationApplicationIdentifier;
- (BOOL)hasTapAction;
- (void)_configureForLegacyDisplay:(id)a0;
- (void)performTapAction;
- (void)_handleAbbreviationStoreChange:(id)a0;
- (void)_startTimeTravelAnimated:(BOOL)a0;
- (void)_endTimeTravelAnimated:(BOOL)a0;

@end
