@class NTKDateComplication, NSDate;
@protocol NTKDateComplicationDisplay;

@interface NTKDateComplicationController : NTKComplicationController <NTKTimeTravel> {
    unsigned long long _displayDateStyle;
    NSDate *_timeTravelDate;
}

@property (readonly, nonatomic) NTKDateComplication *complication;
@property (readonly, weak, nonatomic) id<NTKDateComplicationDisplay> legacyDisplay;

+ (id)textForDateStyle:(unsigned long long)a0;
+ (BOOL)_acceptsComplicationType:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_textForDate:(id)a0 dateStyle:(unsigned long long)a1;

- (void)_deactivate;
- (void).cxx_destruct;
- (void)_activate;
- (void)_updateDisplay;
- (void)setTimeTravelDate:(id)a0 animated:(BOOL)a1;
- (id)complicationApplicationIdentifier;
- (BOOL)hasTapAction;
- (void)_configureForLegacyDisplay:(id)a0;
- (void)performTapAction;
- (void)_handleTimeChangeNotification;
- (void)_setTextInDisplayIfNeededWithDate:(id)a0;

@end
