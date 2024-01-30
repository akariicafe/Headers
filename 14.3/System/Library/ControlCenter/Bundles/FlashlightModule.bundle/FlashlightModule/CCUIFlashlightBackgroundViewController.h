@class NSString;

@interface CCUIFlashlightBackgroundViewController : CCUISliderModuleBackgroundViewController <SBUIFlashlightObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)flashlightAvailabilityDidChange:(BOOL)a0;
- (void)flashlightLevelDidChange:(unsigned long long)a0;
- (void)_updateGlyphForFlashlightLevel:(unsigned long long)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;

@end
