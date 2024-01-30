@class NTKDateComplication, NSDate;
@protocol NTKDateComplicationDisplay;

@interface NTKDateComplicationController : NTKComplicationController <CLKUITimeTravel> {
    unsigned long long _displayDateStyle;
    NSDate *_timeTravelDate;
}

@property (readonly, nonatomic) NTKDateComplication *complication;
@property (readonly, weak, nonatomic) id<NTKDateComplicationDisplay> legacyDisplay;

+ (BOOL)_acceptsComplicationType:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_textForDate:(id)a0 dateStyle:(unsigned long long)a1;
+ (id)textForDateStyle:(unsigned long long)a0;

- (void)_deactivate;
- (void)_activate;
- (void).cxx_destruct;
- (void)_updateDisplay;
- (void)_configureForLegacyDisplay:(id)a0;
- (void)_handleTimeChangeNotification;
- (void)_setTextInDisplayIfNeededWithDate:(id)a0;
- (id)complicationApplicationIdentifier;
- (BOOL)hasTapAction;
- (void)performTapAction;
- (void)setTimeTravelDate:(id)a0 animated:(BOOL)a1;

@end
