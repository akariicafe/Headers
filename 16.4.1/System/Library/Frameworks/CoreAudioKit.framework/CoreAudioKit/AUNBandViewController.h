@class NSMutableArray, UIView;

@interface AUNBandViewController : AURightEdgeControlsBaseViewController {
    NSMutableArray *controls;
    unsigned long long activeControl;
    unsigned int numBands;
    UIView *hintView;
    BOOL noParamDisplayed;
}

@property (nonatomic) unsigned int typeParam;
@property struct AudioUnitFrequencyResponseBin { double x0; double x1; } *frequencyData;

- (id)add:(id)a0 to:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)prepareData;
- (BOOL)bandEnabledFor:(long long)a0;
- (id)controlAtIndex:(unsigned long long)a0;
- (id)abbreviatedFilterTypeStrings;
- (void)endGestureNotificationForGraph:(id)a0;
- (void)priv_eventListener:(void *)a0 event:(const struct AudioUnitEvent { unsigned int x0; union { struct AudioUnitParameter { struct OpaqueAudioComponentInstance *x0; unsigned int x1; unsigned int x2; unsigned int x3; } x0; struct AudioUnitProperty { struct OpaqueAudioComponentInstance *x0; unsigned int x1; unsigned int x2; unsigned int x3; } x1; } x1; } *)a1 value:(float)a2;
- (void)bandEnabledChanged:(id)a0;
- (void)bandSelectionChanged:(id)a0;
- (void)beginGestureNotificationForGraph:(id)a0;
- (id)colorForControlAtIndex:(long long)a0;
- (BOOL)filterTypeHasBandwidth:(long long)a0;
- (BOOL)filterTypeHasGain:(long long)a0;
- (void)globalGainChanged:(id)a0;
- (void)globalGainKnobReleased:(id)a0;
- (void)globalGainKnobTouched:(id)a0;
- (void)hintDismissed:(id)a0;
- (float)maxValueFor:(unsigned int)a0;
- (float)minValueFor:(unsigned int)a0;
- (id)multiply:(id)a0 multiplier:(double)a1;
- (id)nameFor:(unsigned int)a0;
- (void)registerParameters;
- (void)selectBand:(long long)a0;
- (id)shortNameFor:(unsigned int)a0;
- (id)symbolFor:(unsigned int)a0;
- (void)typeControlChanged:(id)a0;
- (void)typeControlChangedWithValue:(long long)a0 set:(BOOL)a1;
- (id)unitLabelFor:(unsigned int)a0;
- (void)updateVisibleControlsForType:(unsigned long long)a0 newIndex:(long long)a1;
- (float)valueFor:(unsigned int)a0;
- (id)valueStringsFor:(unsigned int)a0;
- (long long)widthTypeFor:(unsigned int)a0;

@end
