@class NSString, NTKRichComplicationView, NTKCurvedColoringLabel;

@interface NTKRichComplicationBezelBaseCircularView : NTKRichComplicationBezelView <NTKComplicationDisplayObserver, NTKRichComplicationCircularBezelView> {
    double _circularViewRotationInDegree;
    NTKCurvedColoringLabel *_bezelTextLabel;
    double _bezelTextLabelRotationInDegree;
    double _newDataAnimationCircularScale;
    double _newDataAnimationBezelLabelScale;
    BOOL _allowUpdatingBezelTextProperties;
    BOOL _allowNofityingDelegateWithBezelTextUpdate;
    long long _fromTheme;
    long long _toTheme;
    double _themeFraction;
    BOOL _inMonochromeMode;
}

@property (readonly, nonatomic) NTKRichComplicationView *circularView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double bezelLabelCircularRadius;

+ (void)updateCustomDataAnimationFromEarlierView:(id)a0 laterView:(id)a1 isForward:(BOOL)a2 animationType:(unsigned long long)a3 animationDuration:(double)a4 animationFraction:(float)a5 bezelTextUpdateHandler:(id /* block */)a6;

- (void)setForegroundColor:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)renderSynchronouslyWithImageQueueDiscard:(BOOL)a0 inGroup:(id)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (Class)_circularViewClassFromFromTemplate:(id)a0;
- (void)_editingDidEnd;
- (id)_bezelTextProviderFromTemplate:(id)a0;
- (id)_circularTemplateFromTemplate:(id)a0;
- (void)_applyPausedUpdate;
- (void)setBezelTextColor:(id)a0;
- (void)setTimeTravelDate:(id)a0 animated:(BOOL)a1;
- (void)complicationDisplay:(id)a0 renderStatsWithTime:(double)a1 cost:(double)a2;
- (void)_enumerateLabelsWithBlock:(id /* block */)a0;
- (void)_setEditingTransitionFraction:(double)a0 direction:(long long)a1 position:(long long)a2 type:(long long)a3;
- (void)_transitThemeFromTheme:(long long)a0 toTheme:(long long)a1 fraction:(double)a2;
- (void)_transitToHighlightState:(BOOL)a0 fraction:(double)a1;
- (void)_createBezelLabel;
- (void)_layoutCircularView;
- (void)_layoutBezelLabel;
- (void)_setWhistlerAnalogEditingTransitonFraction:(double)a0 direction:(long long)a1 position:(long long)a2;
- (struct CGPoint { double x0; double x1; })circularViewCenter;
- (void)complicationDisplayNeedsResize:(id)a0;
- (void)_updateNewDataAnimationFinalAlpha:(double)a0 finalBezelLabelScale:(double)a1 finalCircularViewScale:(double)a2 animationApplierBlock:(id /* block */)a3 animationFraction:(float)a4;

@end
