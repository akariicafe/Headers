@class NSDate;
@protocol NTKStopwatchComplicationDisplay;

@interface NTKStopwatchComplicationController : NTKComplicationController <CLKUITimeTravel>

@property (readonly, weak, nonatomic) id<NTKStopwatchComplicationDisplay> legacyDisplay;
@property (retain, nonatomic) NSDate *timeTravelDate;

+ (BOOL)_acceptsComplicationType:(unsigned long long)a0 forDevice:(id)a1;

- (void)_deactivate;
- (void)_activate;
- (void).cxx_destruct;
- (void)_updateDisplay;
- (void)_configureForLegacyDisplay:(id)a0;
- (void)_handleStopwatchChange;
- (id)complicationApplicationIdentifier;
- (BOOL)hasTapAction;
- (void)performTapAction;
- (void)setDataMode:(long long)a0 forDisplayWrapper:(id)a1;
- (void)setTimeTravelDate:(id)a0 animated:(BOOL)a1;

@end
