@class NSDate;
@protocol NTKStopwatchComplicationDisplay;

@interface NTKStopwatchComplicationController : NTKComplicationController <NTKTimeTravel>

@property (readonly, weak, nonatomic) id<NTKStopwatchComplicationDisplay> legacyDisplay;
@property (retain, nonatomic) NSDate *timeTravelDate;

+ (BOOL)_acceptsComplicationType:(unsigned long long)a0 forDevice:(id)a1;

- (void)_deactivate;
- (void).cxx_destruct;
- (void)_activate;
- (void)_updateDisplay;
- (void)setDataMode:(long long)a0 forDisplayWrapper:(id)a1;
- (void)setTimeTravelDate:(id)a0 animated:(BOOL)a1;
- (id)complicationApplicationIdentifier;
- (BOOL)hasTapAction;
- (void)_configureForLegacyDisplay:(id)a0;
- (void)performTapAction;
- (void)_handleStopwatchChange;

@end
